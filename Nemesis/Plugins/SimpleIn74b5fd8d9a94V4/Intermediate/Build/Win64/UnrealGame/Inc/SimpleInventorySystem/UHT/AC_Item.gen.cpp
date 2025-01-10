// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/AC_Item.h"
#include "SimpleInventorySystem/Public/S_Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_Item() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_Item();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_Item_NoRegister();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_Item();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin Class UAC_Item Function AddToBag
struct Z_Construct_UFunction_UAC_Item_AddToBag_Statics
{
	struct AC_Item_eventAddToBag_Parms
	{
		AActor* Actor;
		bool DestroyActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventary System" },
		{ "DisplayName", "Add To Bag" },
		{ "KeyWords", "Inventory System , Add To Bag" },
		{ "ModuleRelativePath", "Public/AC_Item.h" },
		{ "ToolTip", "Stores an object in the bag. Returns true if the object is stored, otherwise false if the actor has no bag." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_DestroyActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Item_eventAddToBag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_DestroyActor_SetBit(void* Obj)
{
	((AC_Item_eventAddToBag_Parms*)Obj)->DestroyActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_DestroyActor = { "DestroyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Item_eventAddToBag_Parms), &Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_DestroyActor_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_Item_eventAddToBag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Item_eventAddToBag_Parms), &Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_Item_AddToBag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_DestroyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Item_AddToBag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_AddToBag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_Item_AddToBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_Item, nullptr, "AddToBag", nullptr, nullptr, Z_Construct_UFunction_UAC_Item_AddToBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_AddToBag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_Item_AddToBag_Statics::AC_Item_eventAddToBag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_AddToBag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_Item_AddToBag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_Item_AddToBag_Statics::AC_Item_eventAddToBag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_Item_AddToBag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_Item_AddToBag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_Item::execAddToBag)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_DestroyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToBag(Z_Param_Actor,Z_Param_DestroyActor);
	P_NATIVE_END;
}
// End Class UAC_Item Function AddToBag

// Begin Class UAC_Item Function hasSpaceFor
struct Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics
{
	struct AC_Item_eventhasSpaceFor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "DisplayName", "has Space For" },
		{ "KeyWords", "Inventary System, has Space For" },
		{ "ModuleRelativePath", "Public/AC_Item.h" },
		{ "ToolTip", "Returns true if there is room, otherwise false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Item_eventhasSpaceFor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_Item_eventhasSpaceFor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_Item_eventhasSpaceFor_Parms), &Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_Item, nullptr, "hasSpaceFor", nullptr, nullptr, Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::AC_Item_eventhasSpaceFor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::AC_Item_eventhasSpaceFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_Item_hasSpaceFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_Item_hasSpaceFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_Item::exechasSpaceFor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->hasSpaceFor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAC_Item Function hasSpaceFor

// Begin Class UAC_Item
void UAC_Item::StaticRegisterNativesUAC_Item()
{
	UClass* Class = UAC_Item::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToBag", &UAC_Item::execAddToBag },
		{ "hasSpaceFor", &UAC_Item::exechasSpaceFor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_Item);
UClass* Z_Construct_UClass_UAC_Item_NoRegister()
{
	return UAC_Item::StaticClass();
}
struct Z_Construct_UClass_UAC_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_Item.h" },
		{ "ModuleRelativePath", "Public/AC_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Inventary System" },
		{ "ModuleRelativePath", "Public/AC_Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_Item_AddToBag, "AddToBag" }, // 2250978280
		{ &Z_Construct_UFunction_UAC_Item_hasSpaceFor, "hasSpaceFor" }, // 4117660010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_Item>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_Item_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_Item, Item), Z_Construct_UScriptStruct_FS_Item, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 2788994739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_Item_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_Item_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Item_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAC_Item_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Item_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_Item_Statics::ClassParams = {
	&UAC_Item::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_Item_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Item_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_Item_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_Item_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAC_Item()
{
	if (!Z_Registration_Info_UClass_UAC_Item.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_Item.OuterSingleton, Z_Construct_UClass_UAC_Item_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_Item.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UClass* StaticClass<UAC_Item>()
{
	return UAC_Item::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_Item);
UAC_Item::~UAC_Item() {}
// End Class UAC_Item

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_Item, UAC_Item::StaticClass, TEXT("UAC_Item"), &Z_Registration_Info_UClass_UAC_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_Item), 2508591165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Item_h_2856731923(TEXT("/Script/SimpleInventorySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
