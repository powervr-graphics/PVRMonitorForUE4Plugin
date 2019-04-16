// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPVRGraphCounter;
#ifdef PVRMONITORPLUGIN_PVRMonitorBlueprint_generated_h
#error "PVRMonitorBlueprint.generated.h already included, missing '#pragma once' in PVRMonitorBlueprint.h"
#endif
#define PVRMONITORPLUGIN_PVRMonitorBlueprint_generated_h

#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPVRGraphCounter_Statics; \
	PVRMONITORPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PVRMONITORPLUGIN_API UScriptStruct* StaticStruct<struct FPVRGraphCounter>();

#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumBars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumBars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounterNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCounterNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounterIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCounterIndex(Z_Param_str); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPVRGraphCounter*)Z_Param__Result=P_THIS->GetCounter(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetGroup(Z_Param_group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Ping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->DeInitializeManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->InitializeManager(); \
		P_NATIVE_END; \
	}


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumBars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumBars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounterNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCounterNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounterIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCounterIndex(Z_Param_str); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCounter) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPVRGraphCounter*)Z_Param__Result=P_THIS->GetCounter(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_group); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetGroup(Z_Param_group); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->Ping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->DeInitializeManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->InitializeManager(); \
		P_NATIVE_END; \
	}


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPVRMonitorManager(); \
	friend struct Z_Construct_UClass_UPVRMonitorManager_Statics; \
public: \
	DECLARE_CLASS(UPVRMonitorManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PVRMonitorPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPVRMonitorManager)


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUPVRMonitorManager(); \
	friend struct Z_Construct_UClass_UPVRMonitorManager_Statics; \
public: \
	DECLARE_CLASS(UPVRMonitorManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PVRMonitorPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPVRMonitorManager)


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPVRMonitorManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPVRMonitorManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVRMonitorManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVRMonitorManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPVRMonitorManager(UPVRMonitorManager&&); \
	NO_API UPVRMonitorManager(const UPVRMonitorManager&); \
public:


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPVRMonitorManager(UPVRMonitorManager&&); \
	NO_API UPVRMonitorManager(const UPVRMonitorManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPVRMonitorManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPVRMonitorManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPVRMonitorManager)


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_PRIVATE_PROPERTY_OFFSET
#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_44_PROLOG
#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_PRIVATE_PROPERTY_OFFSET \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_RPC_WRAPPERS \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_INCLASS \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_PRIVATE_PROPERTY_OFFSET \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_INCLASS_NO_PURE_DECLS \
	plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVRMONITORPLUGIN_API UClass* StaticClass<class UPVRMonitorManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID plugin_package_PVRMonitor_HostProject_Plugins_PVRMonitor_Source_PVRMonitorPlugin_Public_PVRMonitorBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
