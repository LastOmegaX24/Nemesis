// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/AC_Shop.h"
#include "SimpleInventorySystem/Public/S_ShopItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_Shop() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_Shop();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_Shop_NoRegister();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_ShopItem();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin Class UAC_Shop Function AddItemToShop
struct Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics
{
	struct AC_Shop_eventAddItemToShop_Parms
	{
		FS_ShopItem Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System | Shop" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Shop_eventAddItemToShop_Parms, Item), Z_Construct_UScriptStruct_FS_ShopItem, METADATA_PARAMS(0, nullptr) }; // 720330539
void Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_Shop_eventAddItemToShop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Shop_eventAddItemToShop_Parms), &Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_Shop, nullptr, "AddItemToShop", nullptr, nullptr, Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::AC_Shop_eventAddItemToShop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::AC_Shop_eventAddItemToShop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_Shop_AddItemToShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_Shop_AddItemToShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_Shop::execAddItemToShop)
{
	P_GET_STRUCT(FS_ShopItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToShop(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UAC_Shop Function AddItemToShop

// Begin Class UAC_Shop Function RemoveItemFromShop
struct Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics
{
	struct AC_Shop_eventRemoveItemFromShop_Parms
	{
		FS_ShopItem Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System | Shop" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Shop_eventRemoveItemFromShop_Parms, Item), Z_Construct_UScriptStruct_FS_ShopItem, METADATA_PARAMS(0, nullptr) }; // 720330539
void Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_Shop_eventRemoveItemFromShop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Shop_eventRemoveItemFromShop_Parms), &Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_Shop, nullptr, "RemoveItemFromShop", nullptr, nullptr, Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::AC_Shop_eventRemoveItemFromShop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::AC_Shop_eventRemoveItemFromShop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_Shop::execRemoveItemFromShop)
{
	P_GET_STRUCT(FS_ShopItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemFromShop(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UAC_Shop Function RemoveItemFromShop

// Begin Class UAC_Shop Function RemoveItemFromShopByIndex
struct Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics
{
	struct AC_Shop_eventRemoveItemFromShopByIndex_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System | Shop" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Shop_eventRemoveItemFromShopByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_Shop_eventRemoveItemFromShopByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Shop_eventRemoveItemFromShopByIndex_Parms), &Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_Shop, nullptr, "RemoveItemFromShopByIndex", nullptr, nullptr, Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::AC_Shop_eventRemoveItemFromShopByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::AC_Shop_eventRemoveItemFromShopByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_Shop::execRemoveItemFromShopByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemFromShopByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UAC_Shop Function RemoveItemFromShopByIndex

// Begin Class UAC_Shop
void UAC_Shop::StaticRegisterNativesUAC_Shop()
{
	UClass* Class = UAC_Shop::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToShop", &UAC_Shop::execAddItemToShop },
		{ "RemoveItemFromShop", &UAC_Shop::execRemoveItemFromShop },
		{ "RemoveItemFromShopByIndex", &UAC_Shop::execRemoveItemFromShopByIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_Shop);
UClass* Z_Construct_UClass_UAC_Shop_NoRegister()
{
	return UAC_Shop::StaticClass();
}
struct Z_Construct_UClass_UAC_Shop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_Shop.h" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Inventory System | Shop" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsShop_MetaData[] = {
		{ "Category", "Inventory System | Shop" },
		{ "ModuleRelativePath", "Public/AC_Shop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsShop_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsShop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_Shop_AddItemToShop, "AddItemToShop" }, // 885599078
		{ &Z_Construct_UFunction_UAC_Shop_RemoveItemFromShop, "RemoveItemFromShop" }, // 51957305
		{ &Z_Construct_UFunction_UAC_Shop_RemoveItemFromShopByIndex, "RemoveItemFromShopByIndex" }, // 637173324
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_Shop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAC_Shop_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_Shop, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_Shop_Statics::NewProp_ItemsShop_Inner = { "ItemsShop", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FS_ShopItem, METADATA_PARAMS(0, nullptr) }; // 720330539
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_Shop_Statics::NewProp_ItemsShop = { "ItemsShop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_Shop, ItemsShop), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsShop_MetaData), NewProp_ItemsShop_MetaData) }; // 720330539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_Shop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_Shop_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_Shop_Statics::NewProp_ItemsShop_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_Shop_Statics::NewProp_ItemsShop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Shop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAC_Shop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Shop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_Shop_Statics::ClassParams = {
	&UAC_Shop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_Shop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Shop_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Shop_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_Shop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAC_Shop()
{
	if (!Z_Registration_Info_UClass_UAC_Shop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_Shop.OuterSingleton, Z_Construct_UClass_UAC_Shop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_Shop.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UClass* StaticClass<UAC_Shop>()
{
	return UAC_Shop::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_Shop);
UAC_Shop::~UAC_Shop() {}
// End Class UAC_Shop

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_Shop, UAC_Shop::StaticClass, TEXT("UAC_Shop"), &Z_Registration_Info_UClass_UAC_Shop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_Shop), 457634229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_1022378410(TEXT("/Script/SimpleInventorySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Shop_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
