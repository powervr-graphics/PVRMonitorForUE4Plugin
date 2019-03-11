/*!***********************************************************************

 @file           PVRMonitorBlueprint.cpp
 @copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved.

**************************************************************************/
#include "PVRMonitorBlueprint.h"

#include <limits>

#if PLATFORM_ANDROID
#include <sys/types.h>
#include <unistd.h>
#endif

#define BUFSIZE 32

//checks if counter belongs to our PID
bool isOurCounter(const char* name)
{
#if PLATFORM_ANDROID
	//starts with a number
	//if (name[0] >= '0' && name[0] <= '9')
	{
		//char buf[256];
		unsigned pid = getpid();

		//const char* loc = strstr(name, " ");
		//memcpy(buf, name, loc - name);
		//buf[loc - name] = 0;
		//unsigned parsedPid = atoi(buf);
		unsigned parsedPid = atoi(name);
		FString Fs = FString(ANSI_TO_TCHAR(name));
		UE_LOG(LogPVRMonitorPlugin, Display, TEXT("COUNTER: %s, parsedpid: %i, pid: %i"), *Fs, parsedPid, pid);
		if (parsedPid != pid && parsedPid)
		{
			return false;
		}
	}
#endif
	return true;
}



UPVRMonitorManager::UPVRMonitorManager()
{
	numCounter = 0;
	scopeData = 0;
	counters = 0;
	activeGroup = 0;
	activeGroupSelect = 0;
	isActiveGroupChanged = true;
	idxFPS = static_cast<uint32_t>(0) - 1;

	reading.pfValueBuf = NULL;
	reading.nValueCnt = 0;
	reading.nReadingActiveGroup = 99;
}

UPVRMonitorManager::~UPVRMonitorManager()
{
}

int32 UPVRMonitorManager::InitializeManager()
{
#if PLATFORM_ANDROID
	if (!scopeData)
	{
		UE_LOG(LogPVRMonitorPlugin, Display, TEXT("INITIALISING PVRSCOPE."));

		const EPVRScopeInitCode ePVRScopeInitCode = PVRScopeInitialise(&scopeData);
		if (ePVRScopeInitCodeOk != ePVRScopeInitCode)
		{
			scopeData = 0;
			UE_LOG(LogPVRMonitorPlugin, Error, TEXT("FAILED TO INITIALISE PVRSCOPE."));

			if (ePVRScopeInitCode == ePVRScopeInitCodeOutOfMem)
			{
				UE_LOG(LogPVRMonitorPlugin, Error, TEXT("REASON: OUT OF MEMORY."));
			}
			else if (ePVRScopeInitCode == ePVRScopeInitCodeDriverSupportNotFound)
			{
				UE_LOG(LogPVRMonitorPlugin, Error, TEXT("REASON: DRIVER SUPPORT NOT FOUND."));
			}
			else if (ePVRScopeInitCode == ePVRScopeInitCodeDriverSupportInsufficient)
			{
				UE_LOG(LogPVRMonitorPlugin, Error, TEXT("REASON: DRIVER SUPPORT INSUFFICIENT."));
			}
			else if (ePVRScopeInitCode == ePVRScopeInitCodeDriverSupportInitFailed)
			{
				UE_LOG(LogPVRMonitorPlugin, Error, TEXT("REASON: DRIVER SUPPORT INIT FAILED."));
			}
			else if (ePVRScopeInitCode == ePVRScopeInitCodeDriverSupportQueryInfoFailed)
			{
				UE_LOG(LogPVRMonitorPlugin, Error, TEXT("REASON: DRIVER SUPPORT QUERY INFO FAILED."));
			}

			return 0;
		}
		else
		{
			UE_LOG(LogPVRMonitorPlugin, Display, TEXT("PVRSCOPE SUCCESSFULLY INITIALISED."));

			const char* desc = PVRScopeGetDescription();
			if (desc)
			{
				FString Fs = FString(ANSI_TO_TCHAR(desc));
				UE_LOG(LogPVRMonitorPlugin, Display, TEXT("PVRSCOPE DESCRIPTION: %s."), *Fs);
			}

			

			return 1;
		}
	}
#endif
	return 0;
}

void UPVRMonitorManager::InitCounters()
{
#if PLATFORM_ANDROID
	static bool initialized = false;
	if (!initialized)
	{
		initialized = true;
	}
	else
	{
		return;
	}

	//need to call these so that PID data gets grabbed
	PVRScopeGetCounters(scopeData, &numCounter, &counters, &reading);
	PVRScopeReadCounters(scopeData, &reading);

	//Initialise the counter data structures.
	if (PVRScopeGetCounters(scopeData, &numCounter, &counters, &reading))
	{
		UE_LOG(LogPVRMonitorPlugin, Display, TEXT("TOTAL COUNTERS ENABLED: %i"), numCounter);

		for (int c = 0; c < numCounter; ++c)
		{
			FString Fs = FString(ANSI_TO_TCHAR(counters[c].pszName));
			UE_LOG(LogPVRMonitorPlugin, Display, TEXT("COUNTER %i: %s, group: %i"), c, *Fs, counters[c].nGroup);
		}
	}

	//get number of counters, for each of them we need a circular buffer to store values
	graphCounters.resize(numCounter);

	for (uint32_t i = 0; i < numCounter; ++i)
	{
		graphCounters[i].valueCB.SetNum(BUFSIZE, true);
		memset(graphCounters[i].valueCB.GetData(), 0, sizeof(float) * BUFSIZE);
		graphCounters[i].writePosCB = 0;
	}

	SetGroup(0);
#endif
}

int32 UPVRMonitorManager::DeInitializeManager()
{
#if PLATFORM_ANDROID
	if (scopeData)
	{
		PVRScopeDeInitialise(&scopeData, &counters, &reading);
	}
	return 1;
#endif
	return 0;
}

int32 UPVRMonitorManager::Ping()
{
#if PLATFORM_ANDROID
	if (scopeData)
	{
		InitCounters();

		if (isActiveGroupChanged)
		{
			PVRScopeSetGroup(scopeData, activeGroupSelect);

			// When the active group is changed, retrieve new indices
			idxFPS = PVRScopeFindStandardCounter(numCounter, counters, activeGroupSelect, ePVRScopeStandardCounter_FPS);

			isActiveGroupChanged = false;

			//if active group changes, then reset circular buffer write pos to 0
			//and memset circular buffer to 0
			for (int c = 0; c < graphCounters.size(); ++c)
			{
				if (counters[c].nGroup == activeGroup || counters[c].nGroup == 0xffffffff)
				{
					graphCounters[c].writePosCB = 0;
					memset(graphCounters[c].valueCB.GetData(), 0, sizeof(float)*graphCounters[c].valueCB.Num());
				}
			}
		}

		if (PVRScopeReadCounters(scopeData, &reading))
		{
			// Check whether the group has changed
			if (activeGroup != reading.nReadingActiveGroup)
			{
				activeGroup = reading.nReadingActiveGroup;

				// zero the buffers for all the counters becoming enabled
				for (uint32_t i = 0; i < graphCounters.size(); ++i)
				{
					if (counters[i].nGroup == activeGroup || counters[i].nGroup == 0xffffffff)
					{
						graphCounters[i].writePosCB = 0;
						memset(graphCounters[i].valueCB.GetData(), 0, sizeof(float)*graphCounters[i].valueCB.Num());
					}
				}
			}


			//then write value to circular buffer for each counter
			//and update circular buffer write position
			// Write the counter value to the buffer
			uint32_t ui32Index = 0;

			for (uint32_t i = 0; i < numCounter && ui32Index < reading.nValueCnt; ++i)
			{
				if (counters[i].nGroup == activeGroup || counters[i].nGroup == 0xffffffff)
				{
					if (graphCounters[i].writePosCB >= graphCounters[i].valueCB.Num())
					{
						graphCounters[i].writePosCB = 0;
					}

					graphCounters[i].valueCB[graphCounters[i].writePosCB++] = reading.pfValueBuf[ui32Index++];
				}
			}
		}

		//////////////////////////
		//TODO
		//////////////////////////
		//PVRScopeReadTimingData()
	}
	return 1;
#endif
	return 0;
}

int32 UPVRMonitorManager::SetGroup(int32 group)
{
#if PLATFORM_ANDROID
	if (scopeData)
	{
		if (group == activeGroup)
		{
			return 1;
		}

		for (uint32_t i = 0; i < int32(numCounter); ++i)
		{
			// Is it a valid group
			if (counters[i].nGroup != 0xffffffff && counters[i].nGroup >= group)
			{
				activeGroupSelect = group;
				isActiveGroupChanged = true;
				return 1;
			}
		}
	}
	return 1;
#endif
	return 0;
}

FPVRGraphCounter UPVRMonitorManager::GetCounter(int32 index)
{
#if PLATFORM_ANDROID
	if (index < 0 || index >= int32(numCounter))
	{
		UE_LOG(LogPVRMonitorPlugin, Error, TEXT("PVRSCOPE WRONG COUNTER INDEX: %i"), index);
	}

	//median filtering
	float filtering_window[3] = { 0.0f, 0.0f, 0.0f };
	float filtering_window_sorted[3] = { 0.0f, 0.0f, 0.0f };
	int32 filter_idx = -1;

	if (graphCounters[index].valueCB.Num() > 0)
	{
		filtering_window[0] = filtering_window[1] = filtering_window[2] = graphCounters[index].valueCB[0];
	}

	float maximum = 0.0f, minimum = std::numeric_limits <float>::max(), average = 0.0f;

	FPVRGraphCounter ret;
	ret.valueCB.SetNum(graphCounters[index].valueCB.Num(), true);
	for (int c = graphCounters[index].writePosCB, d = 0; d < graphCounters[index].valueCB.Num(); ++d, ++c)
	{
		if (c >= graphCounters[index].valueCB.Num())
		{
			c = 0;
		}

		filter_idx = (filter_idx + 1) % 3;

		//insert new value
		filtering_window[filter_idx] = graphCounters[index].valueCB[c];
		
		///////////////////////////////////
		//insertion sort for 3 items
		///////////////////////////////////
		
		//first item fixed
		filtering_window_sorted[0] = filtering_window[0];
		
		//compare second item to first
		if (filtering_window[1] > filtering_window_sorted[0])
		{
			filtering_window_sorted[1] = filtering_window[1];
		}
		else
		{
			filtering_window_sorted[1] = filtering_window_sorted[0];
			filtering_window_sorted[0] = filtering_window[1];
		}

		//compare last item to second
		if (filtering_window[2] > filtering_window_sorted[1])
		{
			//we only care about the middle item
			filtering_window_sorted[2] = filtering_window[2];
		}
		else if(filtering_window[2] > filtering_window_sorted[0])
		{
			//last item belongs in the middle
			filtering_window_sorted[2] = filtering_window_sorted[1];
			filtering_window_sorted[1] = filtering_window[2];
		}
		else
		{
			//last item belongs in the first place
			filtering_window_sorted[2] = filtering_window_sorted[1];
			filtering_window_sorted[1] = filtering_window_sorted[0];
			filtering_window_sorted[0] = filtering_window[2];
		}

		ret.valueCB[d] = filtering_window_sorted[1];// graphCounters[index].valueCB[c];

		if (filtering_window_sorted[1] > maximum)
		{
			maximum = filtering_window_sorted[1];
		}

		if (filtering_window_sorted[1] < minimum)
		{
			minimum = filtering_window_sorted[1];
		}

		average += filtering_window_sorted[1];
	}

	float scaler = maximum > 0.0f ? 1.0f / maximum : 0.0f;

	average /= ret.valueCB.Num();

	for (int c = 0; c < ret.valueCB.Num(); ++c)
	{
		ret.valueCB[c] *= scaler;
	}

	ret.maximum = maximum;
	ret.minimum = minimum;
	ret.average = average;

	return ret;
#endif
	return FPVRGraphCounter();
}

int32 UPVRMonitorManager::GetCounterIndex(FString str)
{
#if PLATFORM_ANDROID
	FString fpsStr = "Frames per second (FPS)";
	//is FPS counter requested?
	if (str.Compare(fpsStr) == 0) 
	{
		for (int c = 0; c < int32(numCounter); ++c)
		{
			if (counters[c].nGroup == activeGroupSelect || counters[c].nGroup == 0xffffffff)
			{
				//if it starts with a number and it is our counter
				if (counters[c].pszName[0] >= '0' && counters[c].pszName[0] <= '9' && isOurCounter(counters[c].pszName))
				{
					return c;
				}
			}
		}
	}

	for (int c = 0; c < int32(numCounter); ++c)
	{
		if (counters[c].nGroup == activeGroupSelect || counters[c].nGroup == 0xffffffff)
		{
			FString Fs = FString(ANSI_TO_TCHAR(counters[c].pszName));

			if (Fs.Compare(str) == 0)
			{
				return c;
			}
		}
	}
#endif
	return -1;
}

TArray<FString> UPVRMonitorManager::GetCounterNames()
{
	TArray<FString> ret;
#if PLATFORM_ANDROID
	ret.SetNum(numCounter, true);
	int counter = 0;
	for (int c = 0; c < int32(numCounter); ++c)
	{
		if (counters[c].nGroup == activeGroupSelect || counters[c].nGroup == 0xffffffff)
		{
			if (!isOurCounter(counters[c].pszName))
			{
				continue;
			}
			FString Fs = FString(ANSI_TO_TCHAR(counters[c].pszName));
			ret[c] = Fs;
			counter++;
		}
	}
#endif
	return ret;
}

int32 UPVRMonitorManager::GetNumBars()
{
	return BUFSIZE;
}

TArray<int32> UPVRMonitorManager::GetGroups()
{
	TArray<int32> groups;

#if PLATFORM_ANDROID
	for (int c = 0; c < int32(numCounter); ++c)
	{
		bool found = false;
		for (int d = 0; d < groups.Num(); ++d)
		{
			if (counters[c].nGroup == groups[d])
			{
				found = true;
				break;
			}
		}

		if (!found)
		{
			groups.Add(counters[c].nGroup);
		}
	}
#endif

	return groups;
}