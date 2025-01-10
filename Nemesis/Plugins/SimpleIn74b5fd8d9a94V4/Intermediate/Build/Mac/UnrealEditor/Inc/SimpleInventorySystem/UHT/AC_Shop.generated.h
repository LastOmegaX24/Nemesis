// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_Shop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ShopItem;
#ifdef SIMPLEINVENTORYSYSTEM_AC_Shop_generated_h
#error "AC_Shop.generated.h already included, missing '#pragma once' in AC_Shop.h"
#endif
#define SIMPLEINVENTORYSYSTEM_AC_Shop_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveItemFromShopByIndex); \
	DECLARE_FUNCTION(execRemoveItemFromShop); \
	DECLARE_FUNCTION(execAddItemToShop);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_Shop(); \
	friend struct Z_Construct_UClass_UAC_Shop_Statics; \
public: \
	DECLARE_CLASS(UAC_Shop, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleInventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UAC_Shop)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAC_Shop(UAC_Shop&&); \
	UAC_Shop(const UAC_Shop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_Shop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_Shop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_Shop) \
	NO_API virtual ~UAC_Shop();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEINVENTORYSYSTEM_API UClass* StaticClass<class UAC_Shop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
