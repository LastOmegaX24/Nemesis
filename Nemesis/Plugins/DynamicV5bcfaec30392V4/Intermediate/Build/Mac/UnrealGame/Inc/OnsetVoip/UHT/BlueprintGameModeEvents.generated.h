// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintGameModeEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AGameModeBase;
class APlayerController;
struct FUniqueNetIdRepl;
#ifdef ONSETVOIP_BlueprintGameModeEvents_generated_h
#error "BlueprintGameModeEvents.generated.h already included, missing '#pragma once' in BlueprintGameModeEvents.h"
#endif
#define ONSETVOIP_BlueprintGameModeEvents_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_11_DELEGATE \
ONSETVOIP_API void FBlueprintGameModePreLoginEvent_DelegateWrapper(const FScriptDelegate& BlueprintGameModePreLoginEvent, AGameModeBase* GameMode, FUniqueNetIdRepl const& NewPlayer, FString& ErrorMessage);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_12_DELEGATE \
ONSETVOIP_API void FBlueprintGameModePostLoginEvent_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGameModePostLoginEvent, AGameModeBase* GameMode, APlayerController* NewPlayer);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_13_DELEGATE \
ONSETVOIP_API void FBlueprintGameModeLogoutEvent_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGameModeLogoutEvent, AGameModeBase* GameMode, AController* Exiting);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameModePreLoginEvent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGameModeEvents(); \
	friend struct Z_Construct_UClass_UBlueprintGameModeEvents_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameModeEvents, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintGameModeEvents)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintGameModeEvents(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintGameModeEvents(UBlueprintGameModeEvents&&); \
	UBlueprintGameModeEvents(const UBlueprintGameModeEvents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintGameModeEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameModeEvents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintGameModeEvents) \
	NO_API virtual ~UBlueprintGameModeEvents();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_18_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UBlueprintGameModeEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
