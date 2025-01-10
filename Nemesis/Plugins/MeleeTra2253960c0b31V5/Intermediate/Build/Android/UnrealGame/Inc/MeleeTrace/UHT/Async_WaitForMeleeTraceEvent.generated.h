// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async_WaitForMeleeTraceEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsync_WaitForMeleeTraceEvent;
class UMeleeTraceComponent;
class UObject;
struct FAsyncMeleeHitInfo;
struct FMeleeTraceInstanceHandle;
#ifdef MELEETRACE_Async_WaitForMeleeTraceEvent_generated_h
#error "Async_WaitForMeleeTraceEvent.generated.h already included, missing '#pragma once' in Async_WaitForMeleeTraceEvent.h"
#endif
#define MELEETRACE_Async_WaitForMeleeTraceEvent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MELEETRACE_API UScriptStruct* StaticStruct<struct FAsyncMeleeHitInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_47_DELEGATE \
static void FAsyncWaitForMeleeHitDetected_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeHitDetected, FAsyncMeleeHitInfo HitInfo, FMeleeTraceInstanceHandle TraceHandle);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_51_DELEGATE \
static void FAsyncWaitForMeleeTraceStarted_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeTraceStarted);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_55_DELEGATE \
static void FAsyncWaitForMeleeTraceEnded_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeTraceEnded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTraceEnded); \
	DECLARE_FUNCTION(execHandleTraceStarted); \
	DECLARE_FUNCTION(execHandleTraceHit); \
	DECLARE_FUNCTION(execWaitForMeleeTraceEventHit);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsync_WaitForMeleeTraceEvent(); \
	friend struct Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics; \
public: \
	DECLARE_CLASS(UAsync_WaitForMeleeTraceEvent, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UAsync_WaitForMeleeTraceEvent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsync_WaitForMeleeTraceEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsync_WaitForMeleeTraceEvent(UAsync_WaitForMeleeTraceEvent&&); \
	UAsync_WaitForMeleeTraceEvent(const UAsync_WaitForMeleeTraceEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsync_WaitForMeleeTraceEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsync_WaitForMeleeTraceEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsync_WaitForMeleeTraceEvent) \
	NO_API virtual ~UAsync_WaitForMeleeTraceEvent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_33_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UAsync_WaitForMeleeTraceEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
