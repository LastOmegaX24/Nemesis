// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipTalker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerState;
class UOnsetVoipAudioComponent;
class UOnsetVoipTalker;
#ifdef ONSETVOIP_OnsetVoipTalker_generated_h
#error "OnsetVoipTalker.generated.h already included, missing '#pragma once' in OnsetVoipTalker.h"
#endif
#define ONSETVOIP_OnsetVoipTalker_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_29_DELEGATE \
static void FOnVoipTalkingStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkingStateChange, UOnsetVoipTalker* VoipTalker, bool bIsTalking, bool bIs2D);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_30_DELEGATE \
static void FOnVoipAudioDataReceived_DelegateWrapper(const FMulticastScriptDelegate& OnVoipAudioDataReceived, UOnsetVoipTalker* VoipTalker, TArray<uint8> const& AudioData, bool bIs2D);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerStatePawnSet); \
	DECLARE_FUNCTION(execGetVoiceAudioComponent); \
	DECLARE_FUNCTION(execIsMutedOnVoiceChannel); \
	DECLARE_FUNCTION(execSetMutedOnVoiceChannel); \
	DECLARE_FUNCTION(execIsInVoiceChannel); \
	DECLARE_FUNCTION(execSetVoiceChannel); \
	DECLARE_FUNCTION(execIsVoipEnabled); \
	DECLARE_FUNCTION(execSetVoipEnabled); \
	DECLARE_FUNCTION(execIsMutedForPlayerState); \
	DECLARE_FUNCTION(execIsMutedForVoipTalker); \
	DECLARE_FUNCTION(execSetMutedForVoipTalker); \
	DECLARE_FUNCTION(execSetMutedForPlayerState); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execSetMuted); \
	DECLARE_FUNCTION(execCancelReceivedAudioData); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execGetCurrentAmplitude); \
	DECLARE_FUNCTION(execIsLastReceivedTalkingState2D); \
	DECLARE_FUNCTION(execIsTalking);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetVoipTalker(); \
	friend struct Z_Construct_UClass_UOnsetVoipTalker_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipTalker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UOnsetVoipTalker)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnsetVoipTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipTalker(UOnsetVoipTalker&&); \
	UOnsetVoipTalker(const UOnsetVoipTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetVoipTalker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnsetVoipTalker) \
	NO_API virtual ~UOnsetVoipTalker();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_19_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipTalker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
