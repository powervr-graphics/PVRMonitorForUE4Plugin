// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVRMonitorPlugin/Public/PVRMonitorBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVRMonitorBlueprint() {}
// Cross Module References
	PVRMONITORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPVRGraphCounter();
	UPackage* Z_Construct_UPackage__Script_PVRMonitorPlugin();
	PVRMONITORPLUGIN_API UClass* Z_Construct_UClass_UPVRMonitorManager_NoRegister();
	PVRMONITORPLUGIN_API UClass* Z_Construct_UClass_UPVRMonitorManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounter();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetGroups();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetNumBars();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_InitializeManager();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_Ping();
	PVRMONITORPLUGIN_API UFunction* Z_Construct_UFunction_UPVRMonitorManager_SetGroup();
// End Cross Module References
class UScriptStruct* FPVRGraphCounter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PVRMONITORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPVRGraphCounter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPVRGraphCounter, Z_Construct_UPackage__Script_PVRMonitorPlugin(), TEXT("PVRGraphCounter"), sizeof(FPVRGraphCounter), Get_Z_Construct_UScriptStruct_FPVRGraphCounter_Hash());
	}
	return Singleton;
}
template<> PVRMONITORPLUGIN_API UScriptStruct* StaticStruct<FPVRGraphCounter>()
{
	return FPVRGraphCounter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPVRGraphCounter(FPVRGraphCounter::StaticStruct, TEXT("/Script/PVRMonitorPlugin"), TEXT("PVRGraphCounter"), false, nullptr, nullptr);
static struct FScriptStruct_PVRMonitorPlugin_StaticRegisterNativesFPVRGraphCounter
{
	FScriptStruct_PVRMonitorPlugin_StaticRegisterNativesFPVRGraphCounter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PVRGraphCounter")),new UScriptStruct::TCppStructOps<FPVRGraphCounter>);
	}
} ScriptStruct_PVRMonitorPlugin_StaticRegisterNativesFPVRGraphCounter;
	struct Z_Construct_UScriptStruct_FPVRGraphCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_average_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_average;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minimum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minimum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maximum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maximum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_valueCB_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_valueCB;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_valueCB_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPVRGraphCounter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_average_MetaData[] = {
		{ "Category", "PVRMonitor" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_average = { "average", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPVRGraphCounter, average), METADATA_PARAMS(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_average_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_average_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_minimum_MetaData[] = {
		{ "Category", "PVRMonitor" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_minimum = { "minimum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPVRGraphCounter, minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_minimum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_minimum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_maximum_MetaData[] = {
		{ "Category", "PVRMonitor" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
		{ "ToolTip", "Current write position of circular buffer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_maximum = { "maximum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPVRGraphCounter, maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_maximum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_maximum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB_MetaData[] = {
		{ "Category", "PVRMonitor" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB = { "valueCB", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPVRGraphCounter, valueCB), METADATA_PARAMS(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB_Inner = { "valueCB", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_average,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_minimum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_maximum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::NewProp_valueCB_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PVRMonitorPlugin,
		nullptr,
		&NewStructOps,
		"PVRGraphCounter",
		sizeof(FPVRGraphCounter),
		alignof(FPVRGraphCounter),
		Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPVRGraphCounter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPVRGraphCounter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PVRMonitorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PVRGraphCounter"), sizeof(FPVRGraphCounter), Get_Z_Construct_UScriptStruct_FPVRGraphCounter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPVRGraphCounter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPVRGraphCounter_Hash() { return 1412669509U; }
	void UPVRMonitorManager::StaticRegisterNativesUPVRMonitorManager()
	{
		UClass* Class = UPVRMonitorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeInitializeManager", &UPVRMonitorManager::execDeInitializeManager },
			{ "GetCounter", &UPVRMonitorManager::execGetCounter },
			{ "GetCounterIndex", &UPVRMonitorManager::execGetCounterIndex },
			{ "GetCounterNames", &UPVRMonitorManager::execGetCounterNames },
			{ "GetGroups", &UPVRMonitorManager::execGetGroups },
			{ "GetNumBars", &UPVRMonitorManager::execGetNumBars },
			{ "InitializeManager", &UPVRMonitorManager::execInitializeManager },
			{ "Ping", &UPVRMonitorManager::execPing },
			{ "SetGroup", &UPVRMonitorManager::execSetGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics
	{
		struct PVRMonitorManager_eventDeInitializeManager_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventDeInitializeManager_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "DeInitializeManager", sizeof(PVRMonitorManager_eventDeInitializeManager_Parms), Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics
	{
		struct PVRMonitorManager_eventGetCounter_Parms
		{
			int32 index;
			FPVRGraphCounter ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetCounter_Parms, ReturnValue), Z_Construct_UScriptStruct_FPVRGraphCounter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetCounter_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "GetCounter", sizeof(PVRMonitorManager_eventGetCounter_Parms), Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_GetCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics
	{
		struct PVRMonitorManager_eventGetCounterIndex_Parms
		{
			FString str;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetCounterIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetCounterIndex_Parms, str), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "GetCounterIndex", sizeof(PVRMonitorManager_eventGetCounterIndex_Parms), Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics
	{
		struct PVRMonitorManager_eventGetCounterNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetCounterNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "GetCounterNames", sizeof(PVRMonitorManager_eventGetCounterNames_Parms), Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics
	{
		struct PVRMonitorManager_eventGetGroups_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "GetGroups", sizeof(PVRMonitorManager_eventGetGroups_Parms), Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_GetGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics
	{
		struct PVRMonitorManager_eventGetNumBars_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventGetNumBars_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Access" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "GetNumBars", sizeof(PVRMonitorManager_eventGetNumBars_Parms), Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_GetNumBars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_GetNumBars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics
	{
		struct PVRMonitorManager_eventInitializeManager_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventInitializeManager_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "InitializeManager", sizeof(PVRMonitorManager_eventInitializeManager_Parms), Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_InitializeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_InitializeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics
	{
		struct PVRMonitorManager_eventPing_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "Ping", sizeof(PVRMonitorManager_eventPing_Parms), Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_Ping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_Ping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics
	{
		struct PVRMonitorManager_eventSetGroup_Parms
		{
			int32 group;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventSetGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::NewProp_group = { "group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PVRMonitorManager_eventSetGroup_Parms, group), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::NewProp_group,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPVRMonitorManager, nullptr, "SetGroup", sizeof(PVRMonitorManager_eventSetGroup_Parms), Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPVRMonitorManager_SetGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPVRMonitorManager_SetGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPVRMonitorManager_NoRegister()
	{
		return UPVRMonitorManager::StaticClass();
	}
	struct Z_Construct_UClass_UPVRMonitorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPVRMonitorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PVRMonitorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPVRMonitorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPVRMonitorManager_DeInitializeManager, "DeInitializeManager" }, // 183359392
		{ &Z_Construct_UFunction_UPVRMonitorManager_GetCounter, "GetCounter" }, // 2647910470
		{ &Z_Construct_UFunction_UPVRMonitorManager_GetCounterIndex, "GetCounterIndex" }, // 1901647681
		{ &Z_Construct_UFunction_UPVRMonitorManager_GetCounterNames, "GetCounterNames" }, // 3046062936
		{ &Z_Construct_UFunction_UPVRMonitorManager_GetGroups, "GetGroups" }, // 4125474383
		{ &Z_Construct_UFunction_UPVRMonitorManager_GetNumBars, "GetNumBars" }, // 1968497832
		{ &Z_Construct_UFunction_UPVRMonitorManager_InitializeManager, "InitializeManager" }, // 2658693127
		{ &Z_Construct_UFunction_UPVRMonitorManager_Ping, "Ping" }, // 4092290910
		{ &Z_Construct_UFunction_UPVRMonitorManager_SetGroup, "SetGroup" }, // 2860259141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPVRMonitorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PVRMonitorBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PVRMonitorBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPVRMonitorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPVRMonitorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPVRMonitorManager_Statics::ClassParams = {
		&UPVRMonitorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPVRMonitorManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPVRMonitorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPVRMonitorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPVRMonitorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPVRMonitorManager, 1998167221);
	template<> PVRMONITORPLUGIN_API UClass* StaticClass<UPVRMonitorManager>()
	{
		return UPVRMonitorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPVRMonitorManager(Z_Construct_UClass_UPVRMonitorManager, &UPVRMonitorManager::StaticClass, TEXT("/Script/PVRMonitorPlugin"), TEXT("UPVRMonitorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPVRMonitorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
