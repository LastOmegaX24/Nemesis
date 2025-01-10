// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyBallistics/Public/EBMaterialResponseMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBMaterialResponseMap() {}

// Begin Cross Module References
EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap();
EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister();
EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType();
EASYBALLISTICS_API UScriptStruct* Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyBallistics();
// End Cross Module References

// Begin Enum EPenTraceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPenTraceType;
static UEnum* EPenTraceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPenTraceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPenTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyBallistics_EPenTraceType, (UObject*)Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EPenTraceType"));
	}
	return Z_Registration_Info_UEnum_EPenTraceType.OuterSingleton;
}
template<> EASYBALLISTICS_API UEnum* StaticEnum<EPenTraceType>()
{
	return EPenTraceType_StaticEnum();
}
struct Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
		{ "PT_BackTrace.DisplayName", "Back Trace" },
		{ "PT_BackTrace.Name", "EPenTraceType::PT_BackTrace" },
		{ "PT_ByComponent.DisplayName", "By Component" },
		{ "PT_ByComponent.Name", "EPenTraceType::PT_ByComponent" },
		{ "PT_TwoSidedGeometry.DisplayName", "Double Sided Geometry" },
		{ "PT_TwoSidedGeometry.Name", "EPenTraceType::PT_TwoSidedGeometry" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPenTraceType::PT_BackTrace", (int64)EPenTraceType::PT_BackTrace },
		{ "EPenTraceType::PT_ByComponent", (int64)EPenTraceType::PT_ByComponent },
		{ "EPenTraceType::PT_TwoSidedGeometry", (int64)EPenTraceType::PT_TwoSidedGeometry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyBallistics,
	nullptr,
	"EPenTraceType",
	"EPenTraceType",
	Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType()
{
	if (!Z_Registration_Info_UEnum_EPenTraceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPenTraceType.InnerSingleton, Z_Construct_UEnum_EasyBallistics_EPenTraceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPenTraceType.InnerSingleton;
}
// End Enum EPenTraceType

// Begin ScriptStruct FEBMaterialResponseMapEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry;
class UScriptStruct* FEBMaterialResponseMapEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry, (UObject*)Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EBMaterialResponseMapEntry"));
	}
	return Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.OuterSingleton;
}
template<> EASYBALLISTICS_API UScriptStruct* StaticStruct<FEBMaterialResponseMapEntry>()
{
	return FEBMaterialResponseMapEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenTraceType_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeverPenetrate_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepthMultiplier_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalization_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalizationGrazing_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationEntryAngleSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationExitAngleSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeverRicochet_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetProbabilityMultiplier_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitution_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitutionInfluence_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetFriction_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetFrictionInfluence_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetSpread_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PenTraceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PenTraceType;
	static void NewProp_NeverPenetrate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NeverPenetrate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepthMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalizationGrazing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationEntryAngleSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationExitAngleSpread;
	static void NewProp_NeverRicochet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NeverRicochet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetProbabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitutionInfluence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetFrictionInfluence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEBMaterialResponseMapEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType = { "PenTraceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenTraceType), Z_Construct_UEnum_EasyBallistics_EPenTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenTraceType_MetaData), NewProp_PenTraceType_MetaData) }; // 544062370
void Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_SetBit(void* Obj)
{
	((FEBMaterialResponseMapEntry*)Obj)->NeverPenetrate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate = { "NeverPenetrate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEBMaterialResponseMapEntry), &Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeverPenetrate_MetaData), NewProp_NeverPenetrate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier = { "PenetrationDepthMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationDepthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationDepthMultiplier_MetaData), NewProp_PenetrationDepthMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization = { "PenetrationNormalization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationNormalization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationNormalization_MetaData), NewProp_PenetrationNormalization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing = { "PenetrationNormalizationGrazing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationNormalizationGrazing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationNormalizationGrazing_MetaData), NewProp_PenetrationNormalizationGrazing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread = { "PenetrationEntryAngleSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationEntryAngleSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationEntryAngleSpread_MetaData), NewProp_PenetrationEntryAngleSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread = { "PenetrationExitAngleSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, PenetrationExitAngleSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationExitAngleSpread_MetaData), NewProp_PenetrationExitAngleSpread_MetaData) };
void Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_SetBit(void* Obj)
{
	((FEBMaterialResponseMapEntry*)Obj)->NeverRicochet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet = { "NeverRicochet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEBMaterialResponseMapEntry), &Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeverRicochet_MetaData), NewProp_NeverRicochet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier = { "RicochetProbabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetProbabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetProbabilityMultiplier_MetaData), NewProp_RicochetProbabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution = { "RicochetRestitution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetRestitution_MetaData), NewProp_RicochetRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence = { "RicochetRestitutionInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetRestitutionInfluence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetRestitutionInfluence_MetaData), NewProp_RicochetRestitutionInfluence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction = { "RicochetFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetFriction_MetaData), NewProp_RicochetFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence = { "RicochetFrictionInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetFrictionInfluence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetFrictionInfluence_MetaData), NewProp_RicochetFrictionInfluence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread = { "RicochetSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEBMaterialResponseMapEntry, RicochetSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetSpread_MetaData), NewProp_RicochetSpread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenTraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverPenetrate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationDepthMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationNormalizationGrazing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationEntryAngleSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_PenetrationExitAngleSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_NeverRicochet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetProbabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetRestitutionInfluence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetFrictionInfluence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewProp_RicochetSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
	nullptr,
	&NewStructOps,
	"EBMaterialResponseMapEntry",
	Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::PropPointers),
	sizeof(FEBMaterialResponseMapEntry),
	alignof(FEBMaterialResponseMapEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry()
{
	if (!Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.InnerSingleton, Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry.InnerSingleton;
}
// End ScriptStruct FEBMaterialResponseMapEntry

// Begin Class UEBMaterialResponseMap
void UEBMaterialResponseMap::StaticRegisterNativesUEBMaterialResponseMap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEBMaterialResponseMap);
UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister()
{
	return UEBMaterialResponseMap::StaticClass();
}
struct Z_Construct_UClass_UEBMaterialResponseMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EBMaterialResponseMap.h" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "Category", "Responses" },
		{ "ModuleRelativePath", "Public/EBMaterialResponseMap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEBMaterialResponseMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry, METADATA_PARAMS(0, nullptr) }; // 3134950565
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBMaterialResponseMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 3134950565
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBMaterialResponseMap_Statics::NewProp_Map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEBMaterialResponseMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEBMaterialResponseMap_Statics::ClassParams = {
	&UEBMaterialResponseMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEBMaterialResponseMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UEBMaterialResponseMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEBMaterialResponseMap()
{
	if (!Z_Registration_Info_UClass_UEBMaterialResponseMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEBMaterialResponseMap.OuterSingleton, Z_Construct_UClass_UEBMaterialResponseMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEBMaterialResponseMap.OuterSingleton;
}
template<> EASYBALLISTICS_API UClass* StaticClass<UEBMaterialResponseMap>()
{
	return UEBMaterialResponseMap::StaticClass();
}
UEBMaterialResponseMap::UEBMaterialResponseMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEBMaterialResponseMap);
UEBMaterialResponseMap::~UEBMaterialResponseMap() {}
// End Class UEBMaterialResponseMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPenTraceType_StaticEnum, TEXT("EPenTraceType"), &Z_Registration_Info_UEnum_EPenTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 544062370U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEBMaterialResponseMapEntry::StaticStruct, Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics::NewStructOps, TEXT("EBMaterialResponseMapEntry"), &Z_Registration_Info_UScriptStruct_EBMaterialResponseMapEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEBMaterialResponseMapEntry), 3134950565U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEBMaterialResponseMap, UEBMaterialResponseMap::StaticClass, TEXT("UEBMaterialResponseMap"), &Z_Registration_Info_UClass_UEBMaterialResponseMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEBMaterialResponseMap), 2292569667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_1258402209(TEXT("/Script/EasyBallistics"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
