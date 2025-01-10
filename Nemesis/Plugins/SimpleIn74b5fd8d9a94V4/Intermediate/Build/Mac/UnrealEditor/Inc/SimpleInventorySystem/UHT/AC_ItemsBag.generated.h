// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_ItemsBag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAC_Item;
struct FS_Item;
#ifdef SIMPLEINVENTORYSYSTEM_AC_ItemsBag_generated_h
#error "AC_ItemsBag.generated.h already included, missing '#pragma once' in AC_ItemsBag.h"
#endif
#define SIMPLEINVENTORYSYSTEM_AC_ItemsBag_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveItemByIndex); \
	DECLARE_FUNCTION(execSetItemQuantity); \
	DECLARE_FUNCTION(execSetItemQuantityByIndex); \
	DECLARE_FUNCTION(execAddNewItem); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_ItemsBag(); \
	friend struct Z_Construct_UClass_UAC_ItemsBag_Statics; \
public: \
	DECLARE_CLASS(UAC_ItemsBag, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleInventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UAC_ItemsBag)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAC_ItemsBag(UAC_ItemsBag&&); \
	UAC_ItemsBag(const UAC_ItemsBag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_ItemsBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_ItemsBag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_ItemsBag) \
	NO_API virtual ~UAC_ItemsBag();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEINVENTORYSYSTEM_API UClass* StaticClass<class UAC_ItemsBag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
