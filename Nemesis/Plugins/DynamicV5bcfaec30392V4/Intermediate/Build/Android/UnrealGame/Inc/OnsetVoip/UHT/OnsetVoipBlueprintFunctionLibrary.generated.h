// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UObject;
class UOnsetVoipTalker;
#ifdef ONSETVOIP_OnsetVoipBlueprintFunctionLibrary_generated_h
#error "OnsetVoipBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OnsetVoipBlueprintFunctionLibrary.h"
#endif
#define ONSETVOIP_OnsetVoipBlueprintFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTalkerMutedOnVoiceChannel); \
	DECLARE_FUNCTION(execSetTalkerMutedOnVoiceChannel); \
	DECLARE_FUNCTION(execIsTalkerMutedForPlayerState); \
	DECLARE_FUNCTION(execIsTalkerMutedForVoipTalker); \
	DECLARE_FUNCTION(execSetTalkerMutedForVoipTalker); \
	DECLARE_FUNCTION(execSetTalkerMutedForPlayerState); \
	DECLARE_FUNCTION(execGetAllTalkersInVoiceChannel); \
	DECLARE_FUNCTION(execGetAllTalkers); \
	DECLARE_FUNCTION(execGetTalkerByPlayerState); \
	DECLARE_FUNCTION(execIsTalkerInVoiceChannel); \
	DECLARE_FUNCTION(execSetTalkerVoiceChannel);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetVoipBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UOnsetVoipBlueprintLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnsetVoipBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipBlueprintLibrary(UOnsetVoipBlueprintLibrary&&); \
	UOnsetVoipBlueprintLibrary(const UOnsetVoipBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetVoipBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnsetVoipBlueprintLibrary) \
	NO_API virtual ~UOnsetVoipBlueprintLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
