// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipWorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UOnsetVoipTalker;
enum class EOnsetAudioRecordingFormat : uint8;
#ifdef ONSETVOIP_OnsetVoipWorldSubsystem_generated_h
#error "OnsetVoipWorldSubsystem.generated.h already included, missing '#pragma once' in OnsetVoipWorldSubsystem.h"
#endif
#define ONSETVOIP_OnsetVoipWorldSubsystem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_55_DELEGATE \
static void FOnVoipTalkerCreatedOrDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkerCreatedOrDestroyed, UOnsetVoipTalker* VoipTalker);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRecordingFile); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execUpdateVoipTalkers); \
	DECLARE_FUNCTION(execGetAllTalkersInVoiceChannel); \
	DECLARE_FUNCTION(execGetAllTalkers); \
	DECLARE_FUNCTION(execGetVoipTalker);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetVoipWorldSubsystem(); \
	friend struct Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UOnsetVoipWorldSubsystem)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnsetVoipWorldSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipWorldSubsystem(UOnsetVoipWorldSubsystem&&); \
	UOnsetVoipWorldSubsystem(const UOnsetVoipWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetVoipWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetVoipWorldSubsystem) \
	NO_API virtual ~UOnsetVoipWorldSubsystem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_27_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
