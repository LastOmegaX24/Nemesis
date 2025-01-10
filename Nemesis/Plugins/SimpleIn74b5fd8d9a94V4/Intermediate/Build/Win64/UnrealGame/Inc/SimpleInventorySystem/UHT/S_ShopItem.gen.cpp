// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/S_ShopItem.h"
#include "SimpleInventorySystem/Public/S_Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_ShopItem() {}

// Begin Cross Module References
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_Item();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_ShopItem();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin ScriptStruct FS_ShopItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_ShopItem;
class UScriptStruct* FS_ShopItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_ShopItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_ShopItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ShopItem, (UObject*)Z_Construct_UPackage__Script_SimpleInventorySystem(), TEXT("S_ShopItem"));
	}
	return Z_Registration_Info_UScriptStruct_S_ShopItem.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UScriptStruct* StaticStruct<FS_ShopItem>()
{
	return FS_ShopItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_ShopItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSale_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromoPrice_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currency_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item | Shop" },
		{ "ModuleRelativePath", "Public/S_ShopItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsPurchased_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPurchased;
	static void NewProp_OnSale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnSale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Price;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PromoPrice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_currency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ShopItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_IsPurchased_SetBit(void* Obj)
{
	((FS_ShopItem*)Obj)->IsPurchased = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_ShopItem), &Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPurchased_MetaData), NewProp_IsPurchased_MetaData) };
void Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_OnSale_SetBit(void* Obj)
{
	((FS_ShopItem*)Obj)->OnSale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_OnSale = { "OnSale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_ShopItem), &Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_OnSale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSale_MetaData), NewProp_OnSale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ShopItem, Price), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Price_MetaData), NewProp_Price_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_PromoPrice = { "PromoPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ShopItem, PromoPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromoPrice_MetaData), NewProp_PromoPrice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ShopItem, currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currency_MetaData), NewProp_currency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ShopItem, Item), Z_Construct_UScriptStruct_FS_Item, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2788994739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ShopItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_IsPurchased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_OnSale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_Price,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_PromoPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ShopItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ShopItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
	nullptr,
	&NewStructOps,
	"S_ShopItem",
	Z_Construct_UScriptStruct_FS_ShopItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ShopItem_Statics::PropPointers),
	sizeof(FS_ShopItem),
	alignof(FS_ShopItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ShopItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_ShopItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_ShopItem()
{
	if (!Z_Registration_Info_UScriptStruct_S_ShopItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_ShopItem.InnerSingleton, Z_Construct_UScriptStruct_FS_ShopItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_ShopItem.InnerSingleton;
}
// End ScriptStruct FS_ShopItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ShopItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_ShopItem::StaticStruct, Z_Construct_UScriptStruct_FS_ShopItem_Statics::NewStructOps, TEXT("S_ShopItem"), &Z_Registration_Info_UScriptStruct_S_ShopItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_ShopItem), 720330539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ShopItem_h_847545850(TEXT("/Script/SimpleInventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ShopItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ShopItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
