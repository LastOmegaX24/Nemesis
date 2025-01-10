// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipLocalPlayerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnsetAudioRecordingFormat : uint8;
#ifdef ONSETVOIP_OnsetVoipLocalPlayerSubsystem_generated_h
#error "OnsetVoipLocalPlayerSubsystem.generated.h already included, missing '#pragma once' in OnsetVoipLocalPlayerSubsystem.h"
#endif
#define ONSETVOIP_OnsetVoipLocalPlayerSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_45_DELEGATE \
static void FOnVoipTalkingStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkingStateChange, bool bIsTalking);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRecordingFile); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execToggleLoopback); \
	DECLARE_FUNCTION(execGetCurrentAmplitude); \
	DECLARE_FUNCTION(execIsTalking); \
	DECLARE_FUNCTION(execIsCapturingVoice); \
	DECLARE_FUNCTION(execToggleVoiceCaptureWithChannels); \
	DECLARE_FUNCTION(execToggleVoiceCaptureWithChannel); \
	DECLARE_FUNCTION(execToggleVoiceCapture); \
	DECLARE_FUNCTION(execChangeVoiceCaptureDevice);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetVoipLocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipLocalPlayerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UOnsetVoipLocalPlayerSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnsetVoipLocalPlayerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipLocalPlayerSubsystem(UOnsetVoipLocalPlayerSubsystem&&); \
	UOnsetVoipLocalPlayerSubsystem(const UOnsetVoipLocalPlayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetVoipLocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipLocalPlayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetVoipLocalPlayerSubsystem) \
	NO_API virtual ~UOnsetVoipLocalPlayerSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_35_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipLocalPlayerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
