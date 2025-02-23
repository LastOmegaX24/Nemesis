// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamPartiesAsyncActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots;
class USteamCoreProSteamPartiesAsyncActionCreateBeacon;
class USteamCoreProSteamPartiesAsyncActionJoinParty;
struct FChangeNumOpenSlotsData;
struct FCreateBeaconData;
struct FJoinPartyData;
struct FPartyBeaconID;
struct FSteamPartyBeaconLocation;
#ifdef STEAMCOREPRO_SteamPartiesAsyncActions_generated_h
#error "SteamPartiesAsyncActions.generated.h already included, missing '#pragma once' in SteamPartiesAsyncActions.h"
#endif
#define STEAMCOREPRO_SteamPartiesAsyncActions_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_16_DELEGATE \
STEAMCOREPRO_API void FOnJoinPartyCallback_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPartyCallback, FJoinPartyData const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_17_DELEGATE \
STEAMCOREPRO_API void FOnCreateBeaconCallback_DelegateWrapper(const FMulticastScriptDelegate& OnCreateBeaconCallback, FCreateBeaconData const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_18_DELEGATE \
STEAMCOREPRO_API void FOnChangeNumOpenSlotsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnChangeNumOpenSlotsCallback, FChangeNumOpenSlotsData const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinPartyAsync);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionJoinParty(); \
	friend struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionJoinParty_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProSteamPartiesAsyncActionJoinParty, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProSteamPartiesAsyncActionJoinParty)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProSteamPartiesAsyncActionJoinParty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProSteamPartiesAsyncActionJoinParty(USteamCoreProSteamPartiesAsyncActionJoinParty&&); \
	USteamCoreProSteamPartiesAsyncActionJoinParty(const USteamCoreProSteamPartiesAsyncActionJoinParty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProSteamPartiesAsyncActionJoinParty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProSteamPartiesAsyncActionJoinParty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProSteamPartiesAsyncActionJoinParty) \
	NO_API virtual ~USteamCoreProSteamPartiesAsyncActionJoinParty();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProSteamPartiesAsyncActionJoinParty>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateBeaconAsync);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionCreateBeacon(); \
	friend struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionCreateBeacon_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProSteamPartiesAsyncActionCreateBeacon, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProSteamPartiesAsyncActionCreateBeacon)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProSteamPartiesAsyncActionCreateBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProSteamPartiesAsyncActionCreateBeacon(USteamCoreProSteamPartiesAsyncActionCreateBeacon&&); \
	USteamCoreProSteamPartiesAsyncActionCreateBeacon(const USteamCoreProSteamPartiesAsyncActionCreateBeacon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProSteamPartiesAsyncActionCreateBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProSteamPartiesAsyncActionCreateBeacon) \
	NO_API virtual ~USteamCoreProSteamPartiesAsyncActionCreateBeacon();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_50_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProSteamPartiesAsyncActionCreateBeacon>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execChangeNumOpenSlotsAsync);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots(); \
	friend struct Z_Construct_UClass_USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots&&); \
	USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots(const USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots) \
	NO_API virtual ~USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_81_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProSteamPartiesAsyncActionChangeNumOpenSlots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamPartiesAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
