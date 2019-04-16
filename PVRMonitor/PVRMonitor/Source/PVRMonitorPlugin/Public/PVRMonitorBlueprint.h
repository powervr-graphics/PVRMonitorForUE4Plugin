/*!***********************************************************************

 @file           PVRMonitorBlueprint.h
 @copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved. 2019

**************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "PVRScopeStats.h"
#include <memory>
#include <vector>

//#include "UObject/NoExportTypes.h"

#include "PVRMonitorBlueprint.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogPVRMonitorPlugin, Log, All);

USTRUCT(Blueprintable, BlueprintType)
struct FPVRGraphCounter
{
GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category="PVRMonitor")
	TArray<float> valueCB;	// Circular buffer of counter values

	uint32_t   writePosCB;	// Current write position of circular buffer

	UPROPERTY(BlueprintReadOnly, Category = "PVRMonitor")
		float maximum;

	UPROPERTY(BlueprintReadOnly, Category = "PVRMonitor")
		float minimum;

	UPROPERTY(BlueprintReadOnly, Category = "PVRMonitor")
		float average;

	FPVRGraphCounter() : writePosCB(0), maximum(0.0f), minimum(0.0f), average(0.0f) {}
};

UCLASS(Blueprintable, BlueprintType)
class UPVRMonitorManager : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = Init)
		int32 InitializeManager();
	UFUNCTION(BlueprintCallable, Category = Init)
		int32 DeInitializeManager();

	UFUNCTION(BlueprintCallable, Category = Actions)
		int32 Ping();

	UFUNCTION(BlueprintCallable, Category = Actions)
		int32 SetGroup(int32 group);

	UFUNCTION(BlueprintCallable, Category = Access)
		FPVRGraphCounter GetCounter(int32 index);

	UFUNCTION(BlueprintCallable, Category = Access)
		int32 GetCounterIndex(FString str);

	UFUNCTION(BlueprintCallable, Category = Access)
		TArray<FString> GetCounterNames();

	UFUNCTION(BlueprintCallable, Category = Access)
		int32 GetNumBars();

	UFUNCTION(BlueprintCallable, Category = Access)
		TArray<int32> GetGroups();

	void InitCounters();

	UPVRMonitorManager();
	~UPVRMonitorManager();

private:

	SPVRScopeImplData*	scopeData;

	SPVRScopeCounterReading	reading;

	uint32_t numCounter;
	SPVRScopeCounterDef* counters;

	uint32_t activeGroup; // most recent group seen
	uint32_t activeGroupSelect;	// users desired group
	bool isActiveGroupChanged;

	std::vector<FPVRGraphCounter> graphCounters;

	uint32_t idxFPS;
};