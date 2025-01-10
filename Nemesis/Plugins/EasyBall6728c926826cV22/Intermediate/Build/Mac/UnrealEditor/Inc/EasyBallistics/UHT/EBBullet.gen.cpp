// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyBallistics/Public/EBBullet.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBBullet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYBALLISTICS_API UClass* Z_Construct_UClass_AEBBullet();
EASYBALLISTICS_API UClass* Z_Construct_UClass_AEBBullet_NoRegister();
EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBMaterialResponseMap_NoRegister();
EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType();
EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EPenTraceType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_EasyBallistics();
// End Cross Module References

// Begin Enum EEBAtmosphereType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEBAtmosphereType;
static UEnum* EEBAtmosphereType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEBAtmosphereType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEBAtmosphereType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType, (UObject*)Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EEBAtmosphereType"));
	}
	return Z_Registration_Info_UEnum_EEBAtmosphereType.OuterSingleton;
}
template<> EASYBALLISTICS_API UEnum* StaticEnum<EEBAtmosphereType>()
{
	return EEBAtmosphereType_StaticEnum();
}
struct Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AT_Constant.DisplayName", "Constant" },
		{ "AT_Constant.Name", "EEBAtmosphereType::AT_Constant" },
		{ "AT_Curve.DisplayName", "Density Curve" },
		{ "AT_Curve.Name", "EEBAtmosphereType::AT_Curve" },
		{ "AT_Earth.DisplayName", "Earth/IGL" },
		{ "AT_Earth.Name", "EEBAtmosphereType::AT_Earth" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEBAtmosphereType::AT_Constant", (int64)EEBAtmosphereType::AT_Constant },
		{ "EEBAtmosphereType::AT_Curve", (int64)EEBAtmosphereType::AT_Curve },
		{ "EEBAtmosphereType::AT_Earth", (int64)EEBAtmosphereType::AT_Earth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyBallistics,
	nullptr,
	"EEBAtmosphereType",
	"EEBAtmosphereType",
	Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType()
{
	if (!Z_Registration_Info_UEnum_EEBAtmosphereType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEBAtmosphereType.InnerSingleton, Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEBAtmosphereType.InnerSingleton;
}
// End Enum EEBAtmosphereType

// Begin Class AEBBullet Function CollisionFilter
struct EBBullet_eventCollisionFilter_Parms
{
	FHitResult HitResult;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	EBBullet_eventCollisionFilter_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AEBBullet_CollisionFilter = FName(TEXT("CollisionFilter"));
bool AEBBullet::CollisionFilter(FHitResult HitResult) const
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_CollisionFilter);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventCollisionFilter_Parms Parms;
		Parms.HitResult=HitResult;
		const_cast<AEBBullet*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<AEBBullet*>(this)->CollisionFilter_Implementation(HitResult);
	}
}
struct Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventCollisionFilter_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EBBullet_eventCollisionFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBullet_eventCollisionFilter_Parms), &Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "CollisionFilter", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::PropPointers), sizeof(EBBullet_eventCollisionFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventCollisionFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_CollisionFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_CollisionFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execCollisionFilter)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CollisionFilter_Implementation(Z_Param_HitResult);
	P_NATIVE_END;
}
// End Class AEBBullet Function CollisionFilter

// Begin Class AEBBullet Function Deactivate
struct Z_Construct_UFunction_AEBBullet_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Pooling" },
		{ "Comment", "//pooling\n" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "pooling" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "Deactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_Deactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEBBullet_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate();
	P_NATIVE_END;
}
// End Class AEBBullet Function Deactivate

// Begin Class AEBBullet Function DeactivationBroadcast
static const FName NAME_AEBBullet_DeactivationBroadcast = FName(TEXT("DeactivationBroadcast"));
void AEBBullet::DeactivationBroadcast()
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_DeactivationBroadcast);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "DeactivationBroadcast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEBBullet_DeactivationBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_DeactivationBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execDeactivationBroadcast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivationBroadcast_Implementation();
	P_NATIVE_END;
}
// End Class AEBBullet Function DeactivationBroadcast

// Begin Class AEBBullet Function GetAirDensity
struct EBBullet_eventGetAirDensity_Parms
{
	UWorld* World;
	FVector Location;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	EBBullet_eventGetAirDensity_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_AEBBullet_GetAirDensity = FName(TEXT("GetAirDensity"));
float AEBBullet::GetAirDensity(UWorld* World, FVector Location) const
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_GetAirDensity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventGetAirDensity_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AEBBullet*>(this)->GetAirDensity_Implementation(World, Location);
	}
}
struct Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetAirDensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetAirDensity", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::PropPointers), sizeof(EBBullet_eventGetAirDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventGetAirDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_GetAirDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_GetAirDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execGetAirDensity)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAirDensity_Implementation(Z_Param_World,Z_Param_Location);
	P_NATIVE_END;
}
// End Class AEBBullet Function GetAirDensity

// Begin Class AEBBullet Function GetSpeedOfSound
struct EBBullet_eventGetSpeedOfSound_Parms
{
	UWorld* World;
	FVector Location;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	EBBullet_eventGetSpeedOfSound_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_AEBBullet_GetSpeedOfSound = FName(TEXT("GetSpeedOfSound"));
float AEBBullet::GetSpeedOfSound(UWorld* World, FVector Location) const
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_GetSpeedOfSound);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventGetSpeedOfSound_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AEBBullet*>(this)->GetSpeedOfSound_Implementation(World, Location);
	}
}
struct Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetSpeedOfSound_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetSpeedOfSound", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::PropPointers), sizeof(EBBullet_eventGetSpeedOfSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventGetSpeedOfSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_GetSpeedOfSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_GetSpeedOfSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execGetSpeedOfSound)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpeedOfSound_Implementation(Z_Param_World,Z_Param_Location);
	P_NATIVE_END;
}
// End Class AEBBullet Function GetSpeedOfSound

// Begin Class AEBBullet Function GetWind
struct EBBullet_eventGetWind_Parms
{
	UWorld* World;
	FVector Location;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	EBBullet_eventGetWind_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_AEBBullet_GetWind = FName(TEXT("GetWind"));
FVector AEBBullet::GetWind(UWorld* World, FVector Location) const
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_GetWind);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventGetWind_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		const_cast<AEBBullet*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AEBBullet*>(this)->GetWind_Implementation(World, Location);
	}
}
struct Z_Construct_UFunction_AEBBullet_GetWind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventGetWind_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_GetWind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_GetWind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "GetWind", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetWind_Statics::PropPointers), sizeof(EBBullet_eventGetWind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_GetWind_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_GetWind_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventGetWind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_GetWind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_GetWind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execGetWind)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWind_Implementation(Z_Param_World,Z_Param_Location);
	P_NATIVE_END;
}
// End Class AEBBullet Function GetWind

// Begin Class AEBBullet Function OnDeactivated
static const FName NAME_AEBBullet_OnDeactivated = FName(TEXT("OnDeactivated"));
void AEBBullet::OnDeactivated()
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_OnDeactivated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDeactivated_Implementation();
	}
}
struct Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Activation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnDeactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEBBullet_OnDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_OnDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execOnDeactivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeactivated_Implementation();
	P_NATIVE_END;
}
// End Class AEBBullet Function OnDeactivated

// Begin Class AEBBullet Function OnImpact
struct EBBullet_eventOnImpact_Parms
{
	bool Ricochet;
	bool PassedThrough;
	FVector Location;
	FVector IncomingVelocity;
	FVector Normal;
	FVector ExitLocation;
	FVector ExitVelocity;
	FVector Impulse;
	float PenetrationDepth;
	AActor* Actor;
	USceneComponent* Component;
	FName BoneName;
	UPhysicalMaterial* PhysMaterial;
	FHitResult HitResult;
};
static const FName NAME_AEBBullet_OnImpact = FName(TEXT("OnImpact"));
void AEBBullet::OnImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult)
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_OnImpact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventOnImpact_Parms Parms;
		Parms.Ricochet=Ricochet ? true : false;
		Parms.PassedThrough=PassedThrough ? true : false;
		Parms.Location=Location;
		Parms.IncomingVelocity=IncomingVelocity;
		Parms.Normal=Normal;
		Parms.ExitLocation=ExitLocation;
		Parms.ExitVelocity=ExitVelocity;
		Parms.Impulse=Impulse;
		Parms.PenetrationDepth=PenetrationDepth;
		Parms.Actor=Actor;
		Parms.Component=Component;
		Parms.BoneName=BoneName;
		Parms.PhysMaterial=PhysMaterial;
		Parms.HitResult=HitResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnImpact_Implementation(Ricochet, PassedThrough, Location, IncomingVelocity, Normal, ExitLocation, ExitVelocity, Impulse, PenetrationDepth, Actor, Component, BoneName, PhysMaterial, HitResult);
	}
}
struct Z_Construct_UFunction_AEBBullet_OnImpact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Ricochet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ricochet;
	static void NewProp_PassedThrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PassedThrough;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet_SetBit(void* Obj)
{
	((EBBullet_eventOnImpact_Parms*)Obj)->Ricochet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet = { "Ricochet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBullet_eventOnImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough_SetBit(void* Obj)
{
	((EBBullet_eventOnImpact_Parms*)Obj)->PassedThrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough = { "PassedThrough", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBullet_eventOnImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitVelocity = { "ExitVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, ExitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, PenetrationDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Ricochet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PassedThrough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_IncomingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_ExitVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnImpact_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnImpact", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::PropPointers), sizeof(EBBullet_eventOnImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_OnImpact_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventOnImpact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_OnImpact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_OnImpact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execOnImpact)
{
	P_GET_UBOOL(Z_Param_Ricochet);
	P_GET_UBOOL(Z_Param_PassedThrough);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_IncomingVelocity);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_STRUCT(FVector,Z_Param_ExitLocation);
	P_GET_STRUCT(FVector,Z_Param_ExitVelocity);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PenetrationDepth);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnImpact_Implementation(Z_Param_Ricochet,Z_Param_PassedThrough,Z_Param_Location,Z_Param_IncomingVelocity,Z_Param_Normal,Z_Param_ExitLocation,Z_Param_ExitVelocity,Z_Param_Impulse,Z_Param_PenetrationDepth,Z_Param_Actor,Z_Param_Component,Z_Param_BoneName,Z_Param_PhysMaterial,Z_Param_HitResult);
	P_NATIVE_END;
}
// End Class AEBBullet Function OnImpact

// Begin Class AEBBullet Function OnNetPredictedImpact
struct EBBullet_eventOnNetPredictedImpact_Parms
{
	bool Ricochet;
	bool PassedThrough;
	FVector Location;
	FVector IncomingVelocity;
	FVector Normal;
	FVector ExitLocation;
	FVector ExitVelocity;
	FVector Impulse;
	float PenetrationDepth;
	AActor* Actor;
	USceneComponent* Component;
	FName BoneName;
	UPhysicalMaterial* PhysMaterial;
	FHitResult HitResult;
};
static const FName NAME_AEBBullet_OnNetPredictedImpact = FName(TEXT("OnNetPredictedImpact"));
void AEBBullet::OnNetPredictedImpact(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult)
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_OnNetPredictedImpact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventOnNetPredictedImpact_Parms Parms;
		Parms.Ricochet=Ricochet ? true : false;
		Parms.PassedThrough=PassedThrough ? true : false;
		Parms.Location=Location;
		Parms.IncomingVelocity=IncomingVelocity;
		Parms.Normal=Normal;
		Parms.ExitLocation=ExitLocation;
		Parms.ExitVelocity=ExitVelocity;
		Parms.Impulse=Impulse;
		Parms.PenetrationDepth=PenetrationDepth;
		Parms.Actor=Actor;
		Parms.Component=Component;
		Parms.BoneName=BoneName;
		Parms.PhysMaterial=PhysMaterial;
		Parms.HitResult=HitResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnNetPredictedImpact_Implementation(Ricochet, PassedThrough, Location, IncomingVelocity, Normal, ExitLocation, ExitVelocity, Impulse, PenetrationDepth, Actor, Component, BoneName, PhysMaterial, HitResult);
	}
}
struct Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Ricochet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ricochet;
	static void NewProp_PassedThrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PassedThrough;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExitVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet_SetBit(void* Obj)
{
	((EBBullet_eventOnNetPredictedImpact_Parms*)Obj)->Ricochet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet = { "Ricochet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBullet_eventOnNetPredictedImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough_SetBit(void* Obj)
{
	((EBBullet_eventOnNetPredictedImpact_Parms*)Obj)->PassedThrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough = { "PassedThrough", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBullet_eventOnNetPredictedImpact_Parms), &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_IncomingVelocity = { "IncomingVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, IncomingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitVelocity = { "ExitVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, ExitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, PenetrationDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnNetPredictedImpact_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Ricochet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PassedThrough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_IncomingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_ExitVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnNetPredictedImpact", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::PropPointers), sizeof(EBBullet_eventOnNetPredictedImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventOnNetPredictedImpact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execOnNetPredictedImpact)
{
	P_GET_UBOOL(Z_Param_Ricochet);
	P_GET_UBOOL(Z_Param_PassedThrough);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_IncomingVelocity);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_STRUCT(FVector,Z_Param_ExitLocation);
	P_GET_STRUCT(FVector,Z_Param_ExitVelocity);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PenetrationDepth);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
	P_GET_STRUCT(FHitResult,Z_Param_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNetPredictedImpact_Implementation(Z_Param_Ricochet,Z_Param_PassedThrough,Z_Param_Location,Z_Param_IncomingVelocity,Z_Param_Normal,Z_Param_ExitLocation,Z_Param_ExitVelocity,Z_Param_Impulse,Z_Param_PenetrationDepth,Z_Param_Actor,Z_Param_Component,Z_Param_BoneName,Z_Param_PhysMaterial,Z_Param_HitResult);
	P_NATIVE_END;
}
// End Class AEBBullet Function OnNetPredictedImpact

// Begin Class AEBBullet Function OnTrace
struct EBBullet_eventOnTrace_Parms
{
	FVector StartLocation;
	FVector EndLocation;
};
static const FName NAME_AEBBullet_OnTrace = FName(TEXT("OnTrace"));
void AEBBullet::OnTrace(FVector StartLocation, FVector EndLocation)
{
	EBBullet_eventOnTrace_Parms Parms;
	Parms.StartLocation=StartLocation;
	Parms.EndLocation=EndLocation;
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_OnTrace);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AEBBullet_OnTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnTrace_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnTrace_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrace_Statics::NewProp_EndLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnTrace", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::PropPointers), sizeof(EBBullet_eventOnTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_OnTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventOnTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_OnTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_OnTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AEBBullet Function OnTrace

// Begin Class AEBBullet Function OnTrajectoryUpdateReceived
struct EBBullet_eventOnTrajectoryUpdateReceived_Parms
{
	FVector Location;
	FVector OldVelocity;
	FVector NewVelocity;
};
static const FName NAME_AEBBullet_OnTrajectoryUpdateReceived = FName(TEXT("OnTrajectoryUpdateReceived"));
void AEBBullet::OnTrajectoryUpdateReceived(FVector Location, FVector OldVelocity, FVector NewVelocity)
{
	EBBullet_eventOnTrajectoryUpdateReceived_Parms Parms;
	Parms.Location=Location;
	Parms.OldVelocity=OldVelocity;
	Parms.NewVelocity=NewVelocity;
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_OnTrajectoryUpdateReceived);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Remote" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventOnTrajectoryUpdateReceived_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_OldVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "OnTrajectoryUpdateReceived", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::PropPointers), sizeof(EBBullet_eventOnTrajectoryUpdateReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventOnTrajectoryUpdateReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AEBBullet Function OnTrajectoryUpdateReceived

// Begin Class AEBBullet Function ReactivationBroadcast
struct EBBullet_eventReactivationBroadcast_Parms
{
	FVector_NetQuantize NewLocation;
	FVector NewVelocity;
	AActor* BulletOwner;
	APawn* BulletInstigator;
};
static const FName NAME_AEBBullet_ReactivationBroadcast = FName(TEXT("ReactivationBroadcast"));
void AEBBullet::ReactivationBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator)
{
	EBBullet_eventReactivationBroadcast_Parms Parms;
	Parms.NewLocation=NewLocation;
	Parms.NewVelocity=NewVelocity;
	Parms.BulletOwner=BulletOwner;
	Parms.BulletInstigator=BulletInstigator;
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_ReactivationBroadcast);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventReactivationBroadcast_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_NewVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::NewProp_BulletInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "ReactivationBroadcast", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::PropPointers), sizeof(EBBullet_eventReactivationBroadcast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventReactivationBroadcast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_ReactivationBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_ReactivationBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execReactivationBroadcast)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_GET_OBJECT(AActor,Z_Param_BulletOwner);
	P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReactivationBroadcast_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity,Z_Param_BulletOwner,Z_Param_BulletInstigator);
	P_NATIVE_END;
}
// End Class AEBBullet Function ReactivationBroadcast

// Begin Class AEBBullet Function Spawn
struct Z_Construct_UFunction_AEBBullet_Spawn_Statics
{
	struct EBBullet_eventSpawn_Parms
	{
		TSubclassOf<AEBBullet> BulletClass;
		AActor* BulletOwner;
		APawn* BulletInstigator;
		FVector BulletLocation;
		FVector BulletVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Spawn" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletLocation = { "BulletLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletVelocity = { "BulletVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawn_Parms, BulletVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_Spawn_Statics::NewProp_BulletVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "Spawn", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Spawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEBBullet_Spawn_Statics::EBBullet_eventSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_Spawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEBBullet_Spawn_Statics::EBBullet_eventSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execSpawn)
{
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_OBJECT(AActor,Z_Param_BulletOwner);
	P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
	P_GET_STRUCT(FVector,Z_Param_BulletLocation);
	P_GET_STRUCT(FVector,Z_Param_BulletVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	AEBBullet::Spawn(Z_Param_BulletClass,Z_Param_BulletOwner,Z_Param_BulletInstigator,Z_Param_BulletLocation,Z_Param_BulletVelocity);
	P_NATIVE_END;
}
// End Class AEBBullet Function Spawn

// Begin Class AEBBullet Function SpawnWithExactVelocity
struct Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics
{
	struct EBBullet_eventSpawnWithExactVelocity_Parms
	{
		TSubclassOf<AEBBullet> BulletClass;
		AActor* BulletOwner;
		APawn* BulletInstigator;
		FVector BulletLocation;
		FVector BulletVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Spawn" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletInstigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BulletVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletOwner = { "BulletOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletInstigator = { "BulletInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletLocation = { "BulletLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletVelocity = { "BulletVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventSpawnWithExactVelocity_Parms, BulletVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::NewProp_BulletVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "SpawnWithExactVelocity", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::EBBullet_eventSpawnWithExactVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::EBBullet_eventSpawnWithExactVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execSpawnWithExactVelocity)
{
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_OBJECT(AActor,Z_Param_BulletOwner);
	P_GET_OBJECT(APawn,Z_Param_BulletInstigator);
	P_GET_STRUCT(FVector,Z_Param_BulletLocation);
	P_GET_STRUCT(FVector,Z_Param_BulletVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	AEBBullet::SpawnWithExactVelocity(Z_Param_BulletClass,Z_Param_BulletOwner,Z_Param_BulletInstigator,Z_Param_BulletLocation,Z_Param_BulletVelocity);
	P_NATIVE_END;
}
// End Class AEBBullet Function SpawnWithExactVelocity

// Begin Class AEBBullet Function UpdateVelocity
struct EBBullet_eventUpdateVelocity_Parms
{
	UWorld* World;
	FVector Location;
	FVector PreviousVelocity;
	float DeltaTime;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	EBBullet_eventUpdateVelocity_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_AEBBullet_UpdateVelocity = FName(TEXT("UpdateVelocity"));
FVector AEBBullet::UpdateVelocity(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const
{
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_UpdateVelocity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBullet_eventUpdateVelocity_Parms Parms;
		Parms.World=World;
		Parms.Location=Location;
		Parms.PreviousVelocity=PreviousVelocity;
		Parms.DeltaTime=DeltaTime;
		const_cast<AEBBullet*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AEBBullet*>(this)->UpdateVelocity_Implementation(World, Location, PreviousVelocity, DeltaTime);
	}
}
struct Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EBBullet|Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_PreviousVelocity = { "PreviousVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, PreviousVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventUpdateVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_PreviousVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "UpdateVelocity", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::PropPointers), sizeof(EBBullet_eventUpdateVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventUpdateVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_UpdateVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_UpdateVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execUpdateVelocity)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_PreviousVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->UpdateVelocity_Implementation(Z_Param_World,Z_Param_Location,Z_Param_PreviousVelocity,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AEBBullet Function UpdateVelocity

// Begin Class AEBBullet Function VelocityChangeBroadcast
struct EBBullet_eventVelocityChangeBroadcast_Parms
{
	FVector_NetQuantize NewLocation;
	FVector NewVelocity;
};
static const FName NAME_AEBBullet_VelocityChangeBroadcast = FName(TEXT("VelocityChangeBroadcast"));
void AEBBullet::VelocityChangeBroadcast(FVector_NetQuantize NewLocation, FVector NewVelocity)
{
	EBBullet_eventVelocityChangeBroadcast_Parms Parms;
	Parms.NewLocation=NewLocation;
	Parms.NewVelocity=NewVelocity;
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_VelocityChangeBroadcast);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcast_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcast_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "VelocityChangeBroadcast", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::PropPointers), sizeof(EBBullet_eventVelocityChangeBroadcast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventVelocityChangeBroadcast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execVelocityChangeBroadcast)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VelocityChangeBroadcast_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class AEBBullet Function VelocityChangeBroadcast

// Begin Class AEBBullet Function VelocityChangeBroadcastReliable
struct EBBullet_eventVelocityChangeBroadcastReliable_Parms
{
	FVector_NetQuantize NewLocation;
	FVector NewVelocity;
};
static const FName NAME_AEBBullet_VelocityChangeBroadcastReliable = FName(TEXT("VelocityChangeBroadcastReliable"));
void AEBBullet::VelocityChangeBroadcastReliable(FVector_NetQuantize NewLocation, FVector NewVelocity)
{
	EBBullet_eventVelocityChangeBroadcastReliable_Parms Parms;
	Parms.NewLocation=NewLocation;
	Parms.NewVelocity=NewVelocity;
	UFunction* Func = FindFunctionChecked(NAME_AEBBullet_VelocityChangeBroadcastReliable);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcastReliable_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBullet_eventVelocityChangeBroadcastReliable_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEBBullet, nullptr, "VelocityChangeBroadcastReliable", nullptr, nullptr, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::PropPointers), sizeof(EBBullet_eventVelocityChangeBroadcastReliable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBullet_eventVelocityChangeBroadcastReliable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEBBullet::execVelocityChangeBroadcastReliable)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VelocityChangeBroadcastReliable_Implementation(Z_Param_NewLocation,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class AEBBullet Function VelocityChangeBroadcastReliable

// Begin Class AEBBullet
void AEBBullet::StaticRegisterNativesAEBBullet()
{
	UClass* Class = AEBBullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CollisionFilter", &AEBBullet::execCollisionFilter },
		{ "Deactivate", &AEBBullet::execDeactivate },
		{ "DeactivationBroadcast", &AEBBullet::execDeactivationBroadcast },
		{ "GetAirDensity", &AEBBullet::execGetAirDensity },
		{ "GetSpeedOfSound", &AEBBullet::execGetSpeedOfSound },
		{ "GetWind", &AEBBullet::execGetWind },
		{ "OnDeactivated", &AEBBullet::execOnDeactivated },
		{ "OnImpact", &AEBBullet::execOnImpact },
		{ "OnNetPredictedImpact", &AEBBullet::execOnNetPredictedImpact },
		{ "ReactivationBroadcast", &AEBBullet::execReactivationBroadcast },
		{ "Spawn", &AEBBullet::execSpawn },
		{ "SpawnWithExactVelocity", &AEBBullet::execSpawnWithExactVelocity },
		{ "UpdateVelocity", &AEBBullet::execUpdateVelocity },
		{ "VelocityChangeBroadcast", &AEBBullet::execVelocityChangeBroadcast },
		{ "VelocityChangeBroadcastReliable", &AEBBullet::execVelocityChangeBroadcastReliable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEBBullet);
UClass* Z_Construct_UClass_AEBBullet_NoRegister()
{
	return AEBBullet::StaticClass();
}
struct Z_Construct_UClass_AEBBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EBBullet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSafe_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTrailTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTrailWidth_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTrailColorFast_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTrailColorSlow_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPooling_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wind_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereType_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Select atmosphere model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirDensity_MetaData[] = {
		{ "Category", "World" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Air Density at sea level - in KG/m^3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelSpeedOfSound_MetaData[] = {
		{ "Category", "World" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "in cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDensityCurve_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Used for Density Curve atmosphere model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundVariesWithAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundCurve_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirPressure_MetaData[] = {
		{ "Category", "World" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Atmosphere pressure at 0,0,0 - in millibars" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelAirTemperature_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Atmosphere Temperature at 0,0,0 - in degrees C" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureLapseRate_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Temperature Decrease With Altitude, degrees per meter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TropopauseAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Altitude at which temperature stops decreasing, in meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificGasConstant_MetaData[] = {
		{ "Category", "World" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Specific Gas Constant, dry air = 287.058" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCenterLocation_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "World Origin Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphericalAltitude_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Use spherical planet model to get altitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelRadius_MetaData[] = {
		{ "Category", "World" },
		{ "ClampMin", "0" },
		{ "EditCondition", "SphericalAltitude" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Planet radius, in Unreal units" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGravity_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLaunch_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoreAttachParent_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoreAllAttached_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunchIgnoreAttachParent" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeDelay_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "ClampMin", "0" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeLaunchIgnoredActors_MetaData[] = {
		{ "Category", "Safe launch" },
		{ "EditCondition", "SafeLaunch" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shotgun_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotCount_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotSpread_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotVelocitySpread_MetaData[] = {
		{ "Category", "Shotgun" },
		{ "EditCondition", "Shotgun" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMin_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMax_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "Flight" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Maximum bullet spread, in radians" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadBias_MetaData[] = {
		{ "Category", "Flight" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Spread bias, higher is more accurate on average" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diameter_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormFactor_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachDragCurve_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrazingAngleExponent_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPenetration_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPenetration_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalization_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationNormalizationGrazing_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationEntryAngleSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationExitAngleSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetProbability_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetProbabilityGrazing_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetRestitution_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetFriction_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RicochetSpread_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedControlsRicochetProbability_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddImpulse_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseMultiplier_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPenTraceType_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialResponseMap_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDensityControlsPenetrationDepth_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRestitutionControlsRicochet_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReliableReplication_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowComponentCollisions_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Allow components to collide, intended for use with trigger volumes. Do not use for actual collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMargin_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DespawnVelocity_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Bullets with lower velocity will automatically despawn on impact, never despawn if set to zero or negative" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoFirstStepImmediately_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
		{ "ToolTip", "Spawned bullet performs first trace immediately, instead of waiting for next simulation step" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomFirstStepDelta_MetaData[] = {
		{ "Category", "Simulation" },
		{ "EditCondition", "DoFirstStepImmediately" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedStep_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedStepSeconds_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0" },
		{ "EditCondition", "FixedStep" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerStep_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Retrace_MetaData[] = {
		{ "Category", "Retrace" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetraceOnAnotherChannel_MetaData[] = {
		{ "Category", "Retrace" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetraceChannel_MetaData[] = {
		{ "Category", "Retrace" },
		{ "EditCondition", "RetraceOnAnotherChannel" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateActor_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateRandomRoll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePooling_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "EditCondition", "EnablePooling" },
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pooled_MetaData[] = {
		{ "ModuleRelativePath", "Public/EBBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static void NewProp_OwnerSafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OwnerSafe;
	static void NewProp_DebugEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTrailTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTrailWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugTrailColorFast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugTrailColorSlow;
	static void NewProp_DebugPooling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugPooling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wind;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AtmosphereType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AtmosphereType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelSpeedOfSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AirDensityCurve;
	static void NewProp_SpeedOfSoundVariesWithAltitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpeedOfSoundVariesWithAltitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedOfSoundCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirPressure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelAirTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureLapseRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TropopauseAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecificGasConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldCenterLocation;
	static void NewProp_SphericalAltitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SphericalAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelRadius;
	static void NewProp_OverrideGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideGravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static void NewProp_SafeLaunch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SafeLaunch;
	static void NewProp_SafeLaunchIgnoreAttachParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SafeLaunchIgnoreAttachParent;
	static void NewProp_SafeLaunchIgnoreAllAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SafeLaunchIgnoreAllAttached;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SafeDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SafeLaunchIgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SafeLaunchIgnoredActors;
	static void NewProp_Shotgun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shotgun;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotVelocitySpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Diameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FormFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MachDragCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrazingAngleExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPenetration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPenetration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationNormalizationGrazing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationEntryAngleSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationExitAngleSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetProbabilityGrazing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RicochetSpread;
	static void NewProp_SpeedControlsRicochetProbability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpeedControlsRicochetProbability;
	static void NewProp_AddImpulse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPenTraceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPenTraceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialResponseMap;
	static void NewProp_MaterialDensityControlsPenetrationDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaterialDensityControlsPenetrationDepth;
	static void NewProp_MaterialRestitutionControlsRicochet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaterialRestitutionControlsRicochet;
	static void NewProp_ReliableReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReliableReplication;
	static void NewProp_AllowComponentCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowComponentCollisions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_TraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMargin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DespawnVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
	static void NewProp_DoFirstStepImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoFirstStepImmediately;
	static void NewProp_RandomFirstStepDelta_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomFirstStepDelta;
	static void NewProp_FixedStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FixedStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedStepSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerStep;
	static void NewProp_Retrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Retrace;
	static void NewProp_RetraceOnAnotherChannel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RetraceOnAnotherChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RetraceChannel;
	static void NewProp_RotateActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateActor;
	static void NewProp_RotateRandomRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateRandomRoll;
	static void NewProp_EnablePooling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePooling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPoolSize;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Pooled_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pooled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEBBullet_CollisionFilter, "CollisionFilter" }, // 3524941392
		{ &Z_Construct_UFunction_AEBBullet_Deactivate, "Deactivate" }, // 3615531328
		{ &Z_Construct_UFunction_AEBBullet_DeactivationBroadcast, "DeactivationBroadcast" }, // 3341867382
		{ &Z_Construct_UFunction_AEBBullet_GetAirDensity, "GetAirDensity" }, // 2755493900
		{ &Z_Construct_UFunction_AEBBullet_GetSpeedOfSound, "GetSpeedOfSound" }, // 3941381910
		{ &Z_Construct_UFunction_AEBBullet_GetWind, "GetWind" }, // 810603287
		{ &Z_Construct_UFunction_AEBBullet_OnDeactivated, "OnDeactivated" }, // 383562500
		{ &Z_Construct_UFunction_AEBBullet_OnImpact, "OnImpact" }, // 1086235313
		{ &Z_Construct_UFunction_AEBBullet_OnNetPredictedImpact, "OnNetPredictedImpact" }, // 714385546
		{ &Z_Construct_UFunction_AEBBullet_OnTrace, "OnTrace" }, // 3937471601
		{ &Z_Construct_UFunction_AEBBullet_OnTrajectoryUpdateReceived, "OnTrajectoryUpdateReceived" }, // 1692419340
		{ &Z_Construct_UFunction_AEBBullet_ReactivationBroadcast, "ReactivationBroadcast" }, // 698305989
		{ &Z_Construct_UFunction_AEBBullet_Spawn, "Spawn" }, // 894226464
		{ &Z_Construct_UFunction_AEBBullet_SpawnWithExactVelocity, "SpawnWithExactVelocity" }, // 983163420
		{ &Z_Construct_UFunction_AEBBullet_UpdateVelocity, "UpdateVelocity" }, // 566223291
		{ &Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcast, "VelocityChangeBroadcast" }, // 1234263771
		{ &Z_Construct_UFunction_AEBBullet_VelocityChangeBroadcastReliable, "VelocityChangeBroadcastReliable" }, // 3902526741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEBBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->OwnerSafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe = { "OwnerSafe", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSafe_MetaData), NewProp_OwnerSafe_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->DebugEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled = { "DebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugEnabled_MetaData), NewProp_DebugEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime = { "DebugTrailTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DebugTrailTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTrailTime_MetaData), NewProp_DebugTrailTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth = { "DebugTrailWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DebugTrailWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTrailWidth_MetaData), NewProp_DebugTrailWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast = { "DebugTrailColorFast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DebugTrailColorFast), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTrailColorFast_MetaData), NewProp_DebugTrailColorFast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow = { "DebugTrailColorSlow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DebugTrailColorSlow), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTrailColorSlow_MetaData), NewProp_DebugTrailColorSlow_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->DebugPooling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling = { "DebugPooling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPooling_MetaData), NewProp_DebugPooling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind = { "Wind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Wind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wind_MetaData), NewProp_Wind_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType = { "AtmosphereType", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, AtmosphereType), Z_Construct_UEnum_EasyBallistics_EEBAtmosphereType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphereType_MetaData), NewProp_AtmosphereType_MetaData) }; // 3241501745
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity = { "SeaLevelAirDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelAirDensity_MetaData), NewProp_SeaLevelAirDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound = { "SeaLevelSpeedOfSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SeaLevelSpeedOfSound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelSpeedOfSound_MetaData), NewProp_SeaLevelSpeedOfSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve = { "AirDensityCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, AirDensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDensityCurve_MetaData), NewProp_AirDensityCurve_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SpeedOfSoundVariesWithAltitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude = { "SpeedOfSoundVariesWithAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSoundVariesWithAltitude_MetaData), NewProp_SpeedOfSoundVariesWithAltitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve = { "SpeedOfSoundCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SpeedOfSoundCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSoundCurve_MetaData), NewProp_SpeedOfSoundCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale = { "WorldScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, WorldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldScale_MetaData), NewProp_WorldScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure = { "SeaLevelAirPressure", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirPressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelAirPressure_MetaData), NewProp_SeaLevelAirPressure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature = { "SeaLevelAirTemperature", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SeaLevelAirTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelAirTemperature_MetaData), NewProp_SeaLevelAirTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate = { "TemperatureLapseRate", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, TemperatureLapseRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureLapseRate_MetaData), NewProp_TemperatureLapseRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude = { "TropopauseAltitude", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, TropopauseAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TropopauseAltitude_MetaData), NewProp_TropopauseAltitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant = { "SpecificGasConstant", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SpecificGasConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificGasConstant_MetaData), NewProp_SpecificGasConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation = { "WorldCenterLocation", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, WorldCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCenterLocation_MetaData), NewProp_WorldCenterLocation_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SphericalAltitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude = { "SphericalAltitude", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphericalAltitude_MetaData), NewProp_SphericalAltitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius = { "SeaLevelRadius", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SeaLevelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelRadius_MetaData), NewProp_SeaLevelRadius_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->OverrideGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity = { "OverrideGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGravity_MetaData), NewProp_OverrideGravity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SafeLaunch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch = { "SafeLaunch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLaunch_MetaData), NewProp_SafeLaunch_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SafeLaunchIgnoreAttachParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent = { "SafeLaunchIgnoreAttachParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLaunchIgnoreAttachParent_MetaData), NewProp_SafeLaunchIgnoreAttachParent_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SafeLaunchIgnoreAllAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached = { "SafeLaunchIgnoreAllAttached", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLaunchIgnoreAllAttached_MetaData), NewProp_SafeLaunchIgnoreAllAttached_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay = { "SafeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SafeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeDelay_MetaData), NewProp_SafeDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_Inner = { "SafeLaunchIgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors = { "SafeLaunchIgnoredActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SafeLaunchIgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeLaunchIgnoredActors_MetaData), NewProp_SafeLaunchIgnoredActors_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->Shotgun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun = { "Shotgun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shotgun_MetaData), NewProp_Shotgun_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount = { "ShotCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, ShotCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotCount_MetaData), NewProp_ShotCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread = { "ShotSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, ShotSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotSpread_MetaData), NewProp_ShotSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread = { "ShotVelocitySpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, ShotVelocitySpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotVelocitySpread_MetaData), NewProp_ShotVelocitySpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin = { "MuzzleVelocityMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MuzzleVelocityMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityMin_MetaData), NewProp_MuzzleVelocityMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax = { "MuzzleVelocityMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MuzzleVelocityMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityMax_MetaData), NewProp_MuzzleVelocityMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpreadBias = { "SpreadBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, SpreadBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadBias_MetaData), NewProp_SpreadBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter = { "Diameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Diameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diameter_MetaData), NewProp_Diameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor = { "FormFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, FormFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormFactor_MetaData), NewProp_FormFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve = { "MachDragCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MachDragCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachDragCurve_MetaData), NewProp_MachDragCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent = { "GrazingAngleExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, GrazingAngleExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrazingAngleExponent_MetaData), NewProp_GrazingAngleExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration = { "MinPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MinPenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPenetration_MetaData), NewProp_MinPenetration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration = { "MaxPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MaxPenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPenetration_MetaData), NewProp_MaxPenetration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization = { "PenetrationNormalization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, PenetrationNormalization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationNormalization_MetaData), NewProp_PenetrationNormalization_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing = { "PenetrationNormalizationGrazing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, PenetrationNormalizationGrazing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationNormalizationGrazing_MetaData), NewProp_PenetrationNormalizationGrazing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread = { "PenetrationEntryAngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, PenetrationEntryAngleSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationEntryAngleSpread_MetaData), NewProp_PenetrationEntryAngleSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread = { "PenetrationExitAngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, PenetrationExitAngleSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationExitAngleSpread_MetaData), NewProp_PenetrationExitAngleSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability = { "RicochetProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RicochetProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetProbability_MetaData), NewProp_RicochetProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing = { "RicochetProbabilityGrazing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RicochetProbabilityGrazing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetProbabilityGrazing_MetaData), NewProp_RicochetProbabilityGrazing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution = { "RicochetRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RicochetRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetRestitution_MetaData), NewProp_RicochetRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction = { "RicochetFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RicochetFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetFriction_MetaData), NewProp_RicochetFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread = { "RicochetSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RicochetSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RicochetSpread_MetaData), NewProp_RicochetSpread_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->SpeedControlsRicochetProbability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability = { "SpeedControlsRicochetProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedControlsRicochetProbability_MetaData), NewProp_SpeedControlsRicochetProbability_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->AddImpulse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse = { "AddImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddImpulse_MetaData), NewProp_AddImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier = { "ImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, ImpulseMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseMultiplier_MetaData), NewProp_ImpulseMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType = { "DefaultPenTraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DefaultPenTraceType), Z_Construct_UEnum_EasyBallistics_EPenTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPenTraceType_MetaData), NewProp_DefaultPenTraceType_MetaData) }; // 544062370
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap = { "MaterialResponseMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MaterialResponseMap), Z_Construct_UClass_UEBMaterialResponseMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialResponseMap_MetaData), NewProp_MaterialResponseMap_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->MaterialDensityControlsPenetrationDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth = { "MaterialDensityControlsPenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDensityControlsPenetrationDepth_MetaData), NewProp_MaterialDensityControlsPenetrationDepth_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->MaterialRestitutionControlsRicochet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet = { "MaterialRestitutionControlsRicochet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialRestitutionControlsRicochet_MetaData), NewProp_MaterialRestitutionControlsRicochet_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->ReliableReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication = { "ReliableReplication", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReliableReplication_MetaData), NewProp_ReliableReplication_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->AllowComponentCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions = { "AllowComponentCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowComponentCollisions_MetaData), NewProp_AllowComponentCollisions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->TraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComplex_MetaData), NewProp_TraceComplex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin = { "CollisionMargin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, CollisionMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMargin_MetaData), NewProp_CollisionMargin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity = { "DespawnVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, DespawnVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DespawnVelocity_MetaData), NewProp_DespawnVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredActors_MetaData), NewProp_IgnoredActors_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->DoFirstStepImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately = { "DoFirstStepImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoFirstStepImmediately_MetaData), NewProp_DoFirstStepImmediately_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->RandomFirstStepDelta = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta = { "RandomFirstStepDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomFirstStepDelta_MetaData), NewProp_RandomFirstStepDelta_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->FixedStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep = { "FixedStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedStep_MetaData), NewProp_FixedStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds = { "FixedStepSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, FixedStepSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedStepSeconds_MetaData), NewProp_FixedStepSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep = { "MaxTracesPerStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MaxTracesPerStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTracesPerStep_MetaData), NewProp_MaxTracesPerStep_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->Retrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace = { "Retrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Retrace_MetaData), NewProp_Retrace_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->RetraceOnAnotherChannel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel = { "RetraceOnAnotherChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetraceOnAnotherChannel_MetaData), NewProp_RetraceOnAnotherChannel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel = { "RetraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, RetraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetraceChannel_MetaData), NewProp_RetraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->RotateActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor = { "RotateActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateActor_MetaData), NewProp_RotateActor_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->RotateRandomRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll = { "RotateRandomRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateRandomRoll_MetaData), NewProp_RotateRandomRoll_MetaData) };
void Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_SetBit(void* Obj)
{
	((AEBBullet*)Obj)->EnablePooling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling = { "EnablePooling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEBBullet), &Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePooling_MetaData), NewProp_EnablePooling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, MaxPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPoolSize_MetaData), NewProp_MaxPoolSize_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_Inner = { "Pooled", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled = { "Pooled", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEBBullet, Pooled), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pooled_MetaData), NewProp_Pooled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEBBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_OwnerSafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorFast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugTrailColorSlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DebugPooling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Wind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AtmosphereType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelSpeedOfSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AirDensityCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundVariesWithAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedOfSoundCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirPressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelAirTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TemperatureLapseRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TropopauseAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpecificGasConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_WorldCenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SphericalAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SeaLevelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_OverrideGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAttachParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoreAllAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SafeLaunchIgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Shotgun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ShotVelocitySpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MuzzleVelocityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpreadBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Diameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FormFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MachDragCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_GrazingAngleExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MinPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationNormalizationGrazing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationEntryAngleSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_PenetrationExitAngleSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetProbabilityGrazing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RicochetSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_SpeedControlsRicochetProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AddImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ImpulseMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DefaultPenTraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialResponseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialDensityControlsPenetrationDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaterialRestitutionControlsRicochet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_ReliableReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_AllowComponentCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_TraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_CollisionMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DespawnVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_IgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_DoFirstStepImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RandomFirstStepDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_FixedStepSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxTracesPerStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Retrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceOnAnotherChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RetraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_RotateRandomRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_EnablePooling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_MaxPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEBBullet_Statics::NewProp_Pooled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEBBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEBBullet_Statics::ClassParams = {
	&AEBBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEBBullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEBBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AEBBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEBBullet()
{
	if (!Z_Registration_Info_UClass_AEBBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEBBullet.OuterSingleton, Z_Construct_UClass_AEBBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEBBullet.OuterSingleton;
}
template<> EASYBALLISTICS_API UClass* StaticClass<AEBBullet>()
{
	return AEBBullet::StaticClass();
}
void AEBBullet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Velocity(TEXT("Velocity"));
	static const FName Name_RandomStream(TEXT("RandomStream"));
	const bool bIsValid = true
		&& Name_Velocity == ClassReps[(int32)ENetFields_Private::Velocity].Property->GetFName()
		&& Name_RandomStream == ClassReps[(int32)ENetFields_Private::RandomStream].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AEBBullet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEBBullet);
AEBBullet::~AEBBullet() {}
// End Class AEBBullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEBAtmosphereType_StaticEnum, TEXT("EEBAtmosphereType"), &Z_Registration_Info_UEnum_EEBAtmosphereType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3241501745U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEBBullet, AEBBullet::StaticClass, TEXT("AEBBullet"), &Z_Registration_Info_UClass_AEBBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEBBullet), 2558814240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_3543293560(TEXT("/Script/EasyBallistics"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
