// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/AC_ItemsBag.h"
#include "SimpleInventorySystem/Public/S_Item.h"
#include "SimpleInventorySystem/Public/S_ItemImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_ItemsBag() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_Item_NoRegister();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_ItemsBag();
SIMPLEINVENTORYSYSTEM_API UClass* Z_Construct_UClass_UAC_ItemsBag_NoRegister();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_Item();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_ItemImage();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin Class UAC_ItemsBag Function AddItem
struct Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics
{
	struct AC_ItemsBag_eventAddItem_Parms
	{
		UAC_Item* Item;
		bool DestroyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_DestroyActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventAddItem_Parms, Item), Z_Construct_UClass_UAC_Item_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_DestroyActor_SetBit(void* Obj)
{
	((AC_ItemsBag_eventAddItem_Parms*)Obj)->DestroyActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_DestroyActor = { "DestroyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventAddItem_Parms), &Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_DestroyActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::NewProp_DestroyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::AC_ItemsBag_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::AC_ItemsBag_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execAddItem)
{
	P_GET_OBJECT(UAC_Item,Z_Param_Item);
	P_GET_UBOOL(Z_Param_DestroyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_Item,Z_Param_DestroyActor);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function AddItem

// Begin Class UAC_ItemsBag Function AddNewItem
struct Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics
{
	struct AC_ItemsBag_eventAddNewItem_Parms
	{
		UAC_Item* AC_Item_var;
		bool DestroyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AC_Item_var_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AC_Item_var;
	static void NewProp_DestroyActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_AC_Item_var = { "AC_Item_var", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventAddNewItem_Parms, AC_Item_var), Z_Construct_UClass_UAC_Item_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AC_Item_var_MetaData), NewProp_AC_Item_var_MetaData) };
void Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_DestroyActor_SetBit(void* Obj)
{
	((AC_ItemsBag_eventAddNewItem_Parms*)Obj)->DestroyActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_DestroyActor = { "DestroyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventAddNewItem_Parms), &Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_DestroyActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_AC_Item_var,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::NewProp_DestroyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "AddNewItem", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::AC_ItemsBag_eventAddNewItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::AC_ItemsBag_eventAddNewItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_AddNewItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_AddNewItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execAddNewItem)
{
	P_GET_OBJECT(UAC_Item,Z_Param_AC_Item_var);
	P_GET_UBOOL(Z_Param_DestroyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewItem(Z_Param_AC_Item_var,Z_Param_DestroyActor);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function AddNewItem

// Begin Class UAC_ItemsBag Function RemoveItem
struct Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics
{
	struct AC_ItemsBag_eventRemoveItem_Parms
	{
		FS_Item Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "DisplayName", "Remove Item" },
		{ "KeyWords", "Remove Item" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
		{ "ToolTip", "Return true , if the item have being remove" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventRemoveItem_Parms, Item), Z_Construct_UScriptStruct_FS_Item, METADATA_PARAMS(0, nullptr) }; // 2788994739
void Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_ItemsBag_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventRemoveItem_Parms), &Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::AC_ItemsBag_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::AC_ItemsBag_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execRemoveItem)
{
	P_GET_STRUCT(FS_Item,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function RemoveItem

// Begin Class UAC_ItemsBag Function RemoveItemByIndex
struct Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics
{
	struct AC_ItemsBag_eventRemoveItemByIndex_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "DisplayName", "Remove Item By Index" },
		{ "KeyWords", "Remove Item By Index" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
		{ "ToolTip", "Return true , if the item have being remove" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventRemoveItemByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_ItemsBag_eventRemoveItemByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventRemoveItemByIndex_Parms), &Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "RemoveItemByIndex", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::AC_ItemsBag_eventRemoveItemByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::AC_ItemsBag_eventRemoveItemByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execRemoveItemByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function RemoveItemByIndex

// Begin Class UAC_ItemsBag Function SetItem
struct Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics
{
	struct AC_ItemsBag_eventSetItem_Parms
	{
		int32 index;
		UAC_Item* AC_Item_var;
		bool DestroyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AC_Item_var_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AC_Item_var;
	static void NewProp_DestroyActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItem_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_AC_Item_var = { "AC_Item_var", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItem_Parms, AC_Item_var), Z_Construct_UClass_UAC_Item_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AC_Item_var_MetaData), NewProp_AC_Item_var_MetaData) };
void Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_DestroyActor_SetBit(void* Obj)
{
	((AC_ItemsBag_eventSetItem_Parms*)Obj)->DestroyActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_DestroyActor = { "DestroyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventSetItem_Parms), &Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_DestroyActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_AC_Item_var,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::NewProp_DestroyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::AC_ItemsBag_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::AC_ItemsBag_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execSetItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_OBJECT(UAC_Item,Z_Param_AC_Item_var);
	P_GET_UBOOL(Z_Param_DestroyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_index,Z_Param_AC_Item_var,Z_Param_DestroyActor);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function SetItem

// Begin Class UAC_ItemsBag Function SetItemQuantity
struct Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics
{
	struct AC_ItemsBag_eventSetItemQuantity_Parms
	{
		FS_Item Item;
		int32 RemoveQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "DisplayName", "Set Item Quantity" },
		{ "KeyWords", "Set Item By Index" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
		{ "ToolTip", "Modify the quantity of item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItemQuantity_Parms, Item), Z_Construct_UScriptStruct_FS_Item, METADATA_PARAMS(0, nullptr) }; // 2788994739
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_RemoveQuantity = { "RemoveQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItemQuantity_Parms, RemoveQuantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_ItemsBag_eventSetItemQuantity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventSetItemQuantity_Parms), &Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_RemoveQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "SetItemQuantity", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::AC_ItemsBag_eventSetItemQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::AC_ItemsBag_eventSetItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execSetItemQuantity)
{
	P_GET_STRUCT(FS_Item,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_RemoveQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetItemQuantity(Z_Param_Item,Z_Param_RemoveQuantity);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function SetItemQuantity

// Begin Class UAC_ItemsBag Function SetItemQuantityByIndex
struct Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics
{
	struct AC_ItemsBag_eventSetItemQuantityByIndex_Parms
	{
		int32 Index;
		int32 RemoveQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory System" },
		{ "DisplayName", "Set Item Quantity By Index" },
		{ "KeyWords", "Set Item By Index" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
		{ "ToolTip", "Modify the quantity of item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItemQuantityByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_RemoveQuantity = { "RemoveQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_ItemsBag_eventSetItemQuantityByIndex_Parms, RemoveQuantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_ItemsBag_eventSetItemQuantityByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_ItemsBag_eventSetItemQuantityByIndex_Parms), &Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_RemoveQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_ItemsBag, nullptr, "SetItemQuantityByIndex", nullptr, nullptr, Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::AC_ItemsBag_eventSetItemQuantityByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::AC_ItemsBag_eventSetItemQuantityByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_ItemsBag::execSetItemQuantityByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_RemoveQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetItemQuantityByIndex(Z_Param_Index,Z_Param_RemoveQuantity);
	P_NATIVE_END;
}
// End Class UAC_ItemsBag Function SetItemQuantityByIndex

// Begin Class UAC_ItemsBag
void UAC_ItemsBag::StaticRegisterNativesUAC_ItemsBag()
{
	UClass* Class = UAC_ItemsBag::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UAC_ItemsBag::execAddItem },
		{ "AddNewItem", &UAC_ItemsBag::execAddNewItem },
		{ "RemoveItem", &UAC_ItemsBag::execRemoveItem },
		{ "RemoveItemByIndex", &UAC_ItemsBag::execRemoveItemByIndex },
		{ "SetItem", &UAC_ItemsBag::execSetItem },
		{ "SetItemQuantity", &UAC_ItemsBag::execSetItemQuantity },
		{ "SetItemQuantityByIndex", &UAC_ItemsBag::execSetItemQuantityByIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_ItemsBag);
UClass* Z_Construct_UClass_UAC_ItemsBag_NoRegister()
{
	return UAC_ItemsBag::StaticClass();
}
struct Z_Construct_UClass_UAC_ItemsBag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_ItemsBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BagImage_MetaData[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsBag_MetaData[] = {
		{ "Category", "Inventory System" },
		{ "ModuleRelativePath", "Public/AC_ItemsBag.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BagImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsBag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsBag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_ItemsBag_AddItem, "AddItem" }, // 930355913
		{ &Z_Construct_UFunction_UAC_ItemsBag_AddNewItem, "AddNewItem" }, // 2966264376
		{ &Z_Construct_UFunction_UAC_ItemsBag_RemoveItem, "RemoveItem" }, // 1489723438
		{ &Z_Construct_UFunction_UAC_ItemsBag_RemoveItemByIndex, "RemoveItemByIndex" }, // 142889871
		{ &Z_Construct_UFunction_UAC_ItemsBag_SetItem, "SetItem" }, // 2616853855
		{ &Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantity, "SetItemQuantity" }, // 905734477
		{ &Z_Construct_UFunction_UAC_ItemsBag_SetItemQuantityByIndex, "SetItemQuantityByIndex" }, // 1101089128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_ItemsBag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_BagImage = { "BagImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_ItemsBag, BagImage), Z_Construct_UScriptStruct_FS_ItemImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BagImage_MetaData), NewProp_BagImage_MetaData) }; // 1430944122
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_ItemsBag_Inner = { "ItemsBag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FS_Item, METADATA_PARAMS(0, nullptr) }; // 2788994739
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_ItemsBag = { "ItemsBag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_ItemsBag, ItemsBag), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsBag_MetaData), NewProp_ItemsBag_MetaData) }; // 2788994739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_ItemsBag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_BagImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_ItemsBag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_ItemsBag_Statics::NewProp_ItemsBag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_ItemsBag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAC_ItemsBag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_ItemsBag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_ItemsBag_Statics::ClassParams = {
	&UAC_ItemsBag::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_ItemsBag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_ItemsBag_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_ItemsBag_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_ItemsBag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAC_ItemsBag()
{
	if (!Z_Registration_Info_UClass_UAC_ItemsBag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_ItemsBag.OuterSingleton, Z_Construct_UClass_UAC_ItemsBag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_ItemsBag.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UClass* StaticClass<UAC_ItemsBag>()
{
	return UAC_ItemsBag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_ItemsBag);
UAC_ItemsBag::~UAC_ItemsBag() {}
// End Class UAC_ItemsBag

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_ItemsBag, UAC_ItemsBag::StaticClass, TEXT("UAC_ItemsBag"), &Z_Registration_Info_UClass_UAC_ItemsBag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_ItemsBag), 3327112512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_3509795576(TEXT("/Script/SimpleInventorySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_AC_ItemsBag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
