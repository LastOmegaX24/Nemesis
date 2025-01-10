// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyBallistics/Public/EBBarrel.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBBarrel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
EASYBALLISTICS_API UClass* Z_Construct_UClass_AEBBullet_NoRegister();
EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBBarrel();
EASYBALLISTICS_API UClass* Z_Construct_UClass_UEBBarrel_NoRegister();
EASYBALLISTICS_API UEnum* Z_Construct_UEnum_EasyBallistics_EFireMode();
EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature();
EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature();
EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature();
EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
UPackage* Z_Construct_UPackage__Script_EasyBallistics();
// End Cross Module References

// Begin Enum EFireMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFireMode;
static UEnum* EFireMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFireMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFireMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyBallistics_EFireMode, (UObject*)Z_Construct_UPackage__Script_EasyBallistics(), TEXT("EFireMode"));
	}
	return Z_Registration_Info_UEnum_EFireMode.OuterSingleton;
}
template<> EASYBALLISTICS_API UEnum* StaticEnum<EFireMode>()
{
	return EFireMode_StaticEnum();
}
struct Z_Construct_UEnum_EasyBallistics_EFireMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FM_Auto.DisplayName", "Full Auto" },
		{ "FM_Auto.Name", "EFireMode::FM_Auto" },
		{ "FM_Burst.DisplayName", "Burst" },
		{ "FM_Burst.Name", "EFireMode::FM_Burst" },
		{ "FM_Gatling.DisplayName", "Gatling" },
		{ "FM_Gatling.Name", "EFireMode::FM_Gatling" },
		{ "FM_InterBurst.DisplayName", "Interruptible Burst" },
		{ "FM_InterBurst.Name", "EFireMode::FM_InterBurst" },
		{ "FM_Manual.DisplayName", "Manual" },
		{ "FM_Manual.Name", "EFireMode::FM_Manual" },
		{ "FM_Semiauto.DisplayName", "Semiauto" },
		{ "FM_Semiauto.Name", "EFireMode::FM_Semiauto" },
		{ "FM_Slamfire.DisplayName", "Slam Fire" },
		{ "FM_Slamfire.Name", "EFireMode::FM_Slamfire" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFireMode::FM_Auto", (int64)EFireMode::FM_Auto },
		{ "EFireMode::FM_Semiauto", (int64)EFireMode::FM_Semiauto },
		{ "EFireMode::FM_Burst", (int64)EFireMode::FM_Burst },
		{ "EFireMode::FM_InterBurst", (int64)EFireMode::FM_InterBurst },
		{ "EFireMode::FM_Manual", (int64)EFireMode::FM_Manual },
		{ "EFireMode::FM_Slamfire", (int64)EFireMode::FM_Slamfire },
		{ "EFireMode::FM_Gatling", (int64)EFireMode::FM_Gatling },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EasyBallistics,
	nullptr,
	"EFireMode",
	"EFireMode",
	Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EasyBallistics_EFireMode()
{
	if (!Z_Registration_Info_UEnum_EFireMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFireMode.InnerSingleton, Z_Construct_UEnum_EasyBallistics_EFireMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFireMode.InnerSingleton;
}
// End Enum EFireMode

// Begin Delegate FBeforeShotFired
struct Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "BeforeShotFired__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEBBarrel::FBeforeShotFired_DelegateWrapper(const FMulticastScriptDelegate& BeforeShotFired)
{
	BeforeShotFired.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FBeforeShotFired

// Begin Delegate FShotFired
struct Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ShotFired__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEBBarrel::FShotFired_DelegateWrapper(const FMulticastScriptDelegate& ShotFired)
{
	ShotFired.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FShotFired

// Begin Delegate FAmmoDepleted
struct Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "AmmoDepleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEBBarrel::FAmmoDepleted_DelegateWrapper(const FMulticastScriptDelegate& AmmoDepleted)
{
	AmmoDepleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAmmoDepleted

// Begin Delegate FReadyToShoot
struct Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ReadyToShoot__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEBBarrel::FReadyToShoot_DelegateWrapper(const FMulticastScriptDelegate& ReadyToShoot)
{
	ReadyToShoot.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FReadyToShoot

// Begin Class UEBBarrel Function ApplyRecoil
struct EBBarrel_eventApplyRecoil_Parms
{
	UPrimitiveComponent* Component;
	FVector InLocation;
	FVector Impulse;
};
static const FName NAME_UEBBarrel_ApplyRecoil = FName(TEXT("ApplyRecoil"));
void UEBBarrel::ApplyRecoil(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse)
{
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_ApplyRecoil);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBarrel_eventApplyRecoil_Parms Parms;
		Parms.Component=Component;
		Parms.InLocation=InLocation;
		Parms.Impulse=Impulse;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ApplyRecoil_Implementation(Component, InLocation, Impulse);
	}
}
struct Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventApplyRecoil_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventApplyRecoil_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventApplyRecoil_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ApplyRecoil", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::PropPointers), sizeof(EBBarrel_eventApplyRecoil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventApplyRecoil_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_ApplyRecoil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_ApplyRecoil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execApplyRecoil)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_InLocation);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRecoil_Implementation(Z_Param_Component,Z_Param_InLocation,Z_Param_Impulse);
	P_NATIVE_END;
}
// End Class UEBBarrel Function ApplyRecoil

// Begin Class UEBBarrel Function CalculateAimDirection
struct Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics
{
	struct EBBarrel_eventCalculateAimDirection_Parms
	{
		TSubclassOf<AEBBullet> BulletClass;
		FVector TargetLocation;
		FVector TargetVelocity;
		FVector AimDirection;
		FVector PredictedTargetLocation;
		FVector PredictedIntersectionLocation;
		float PredictedFlightTime;
		float Error;
		float MaxTime;
		float Step;
		int32 NumIterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Prediction" },
		{ "CPP_Default_MaxTime", "10.000000" },
		{ "CPP_Default_NumIterations", "4" },
		{ "CPP_Default_Step", "0.100000" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedIntersectionLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictedFlightTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Error;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_AimDirection = { "AimDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, AimDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedTargetLocation = { "PredictedTargetLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, PredictedTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedIntersectionLocation = { "PredictedIntersectionLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, PredictedIntersectionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedFlightTime = { "PredictedFlightTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, PredictedFlightTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, Step), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirection_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_TargetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_AimDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedIntersectionLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_PredictedFlightTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_MaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::NewProp_NumIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "CalculateAimDirection", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::EBBarrel_eventCalculateAimDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::EBBarrel_eventCalculateAimDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_CalculateAimDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_CalculateAimDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execCalculateAimDirection)
{
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FVector,Z_Param_TargetVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AimDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PredictedTargetLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PredictedIntersectionLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PredictedFlightTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Error);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateAimDirection(Z_Param_BulletClass,Z_Param_TargetLocation,Z_Param_TargetVelocity,Z_Param_Out_AimDirection,Z_Param_Out_PredictedTargetLocation,Z_Param_Out_PredictedIntersectionLocation,Z_Param_Out_PredictedFlightTime,Z_Param_Out_Error,Z_Param_MaxTime,Z_Param_Step,Z_Param_NumIterations);
	P_NATIVE_END;
}
// End Class UEBBarrel Function CalculateAimDirection

// Begin Class UEBBarrel Function CalculateAimDirectionFromLocation
struct Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics
{
	struct EBBarrel_eventCalculateAimDirectionFromLocation_Parms
	{
		TSubclassOf<AEBBullet> BulletClass;
		FVector StartLocation;
		FVector TargetLocation;
		FVector TargetVelocity;
		FVector AimDirection;
		FVector PredictedTargetLocation;
		FVector PredictedIntersectionLocation;
		float PredictedFlightTime;
		float Error;
		float MaxTime;
		float Step;
		int32 NumIterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Prediction" },
		{ "CPP_Default_MaxTime", "10.000000" },
		{ "CPP_Default_NumIterations", "4" },
		{ "CPP_Default_Step", "0.100000" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedTargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedIntersectionLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictedFlightTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Error;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_AimDirection = { "AimDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, AimDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedTargetLocation = { "PredictedTargetLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, PredictedTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedIntersectionLocation = { "PredictedIntersectionLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, PredictedIntersectionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedFlightTime = { "PredictedFlightTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, PredictedFlightTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, Step), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventCalculateAimDirectionFromLocation_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_TargetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_AimDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedIntersectionLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_PredictedFlightTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_MaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::NewProp_NumIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "CalculateAimDirectionFromLocation", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::EBBarrel_eventCalculateAimDirectionFromLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::EBBarrel_eventCalculateAimDirectionFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execCalculateAimDirectionFromLocation)
{
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_STRUCT(FVector,Z_Param_TargetVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AimDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PredictedTargetLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PredictedIntersectionLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PredictedFlightTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Error);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateAimDirectionFromLocation(Z_Param_BulletClass,Z_Param_StartLocation,Z_Param_TargetLocation,Z_Param_TargetVelocity,Z_Param_Out_AimDirection,Z_Param_Out_PredictedTargetLocation,Z_Param_Out_PredictedIntersectionLocation,Z_Param_Out_PredictedFlightTime,Z_Param_Out_Error,Z_Param_MaxTime,Z_Param_Step,Z_Param_NumIterations);
	P_NATIVE_END;
}
// End Class UEBBarrel Function CalculateAimDirectionFromLocation

// Begin Class UEBBarrel Function Charge
static const FName NAME_UEBBarrel_Charge = FName(TEXT("Charge"));
void UEBBarrel::Charge()
{
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_Charge);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UEBBarrel_Charge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_Charge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "Charge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_Charge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_Charge_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEBBarrel_Charge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_Charge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execCharge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Charge_Validate())
	{
		RPC_ValidateFailed(TEXT("Charge_Validate"));
		return;
	}
	P_THIS->Charge_Implementation();
	P_NATIVE_END;
}
// End Class UEBBarrel Function Charge

// Begin Class UEBBarrel Function ClientAim
struct EBBarrel_eventClientAim_Parms
{
	FVector_NetQuantize NewLocation;
	FVector_NetQuantizeNormal NewAim;
};
static const FName NAME_UEBBarrel_ClientAim = FName(TEXT("ClientAim"));
void UEBBarrel::ClientAim(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim)
{
	EBBarrel_eventClientAim_Parms Parms;
	Parms.NewLocation=NewLocation;
	Parms.NewAim=NewAim;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_ClientAim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_ClientAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventClientAim_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::NewProp_NewAim = { "NewAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventClientAim_Parms, NewAim), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // 1520846145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::NewProp_NewAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ClientAim", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::PropPointers), sizeof(EBBarrel_eventClientAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventClientAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_ClientAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_ClientAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execClientAim)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_NewAim);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ClientAim_Validate(Z_Param_NewLocation,Z_Param_NewAim))
	{
		RPC_ValidateFailed(TEXT("ClientAim_Validate"));
		return;
	}
	P_THIS->ClientAim_Implementation(Z_Param_NewLocation,Z_Param_NewAim);
	P_NATIVE_END;
}
// End Class UEBBarrel Function ClientAim

// Begin Class UEBBarrel Function GatlingSpool
struct EBBarrel_eventGatlingSpool_Parms
{
	bool Spool;
};
static const FName NAME_UEBBarrel_GatlingSpool = FName(TEXT("GatlingSpool"));
void UEBBarrel::GatlingSpool(bool Spool)
{
	EBBarrel_eventGatlingSpool_Parms Parms;
	Parms.Spool=Spool ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_GatlingSpool);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Spool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Spool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::NewProp_Spool_SetBit(void* Obj)
{
	((EBBarrel_eventGatlingSpool_Parms*)Obj)->Spool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::NewProp_Spool = { "Spool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventGatlingSpool_Parms), &Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::NewProp_Spool_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::NewProp_Spool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "GatlingSpool", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::PropPointers), sizeof(EBBarrel_eventGatlingSpool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventGatlingSpool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_GatlingSpool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_GatlingSpool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execGatlingSpool)
{
	P_GET_UBOOL(Z_Param_Spool);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->GatlingSpool_Validate(Z_Param_Spool))
	{
		RPC_ValidateFailed(TEXT("GatlingSpool_Validate"));
		return;
	}
	P_THIS->GatlingSpool_Implementation(Z_Param_Spool);
	P_NATIVE_END;
}
// End Class UEBBarrel Function GatlingSpool

// Begin Class UEBBarrel Function GetAmmo
struct Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics
{
	struct EBBarrel_eventGetAmmo_Parms
	{
		bool CountChambered;
		TArray<TSubclassOf<AEBBullet> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CountChambered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CountChambered;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_CountChambered_SetBit(void* Obj)
{
	((EBBarrel_eventGetAmmo_Parms*)Obj)->CountChambered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_CountChambered = { "CountChambered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventGetAmmo_Parms), &Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_CountChambered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventGetAmmo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_CountChambered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "GetAmmo", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::EBBarrel_eventGetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::EBBarrel_eventGetAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_GetAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_GetAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execGetAmmo)
{
	P_GET_UBOOL(Z_Param_CountChambered);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<AEBBullet> >*)Z_Param__Result=P_THIS->GetAmmo(Z_Param_CountChambered);
	P_NATIVE_END;
}
// End Class UEBBarrel Function GetAmmo

// Begin Class UEBBarrel Function GetAmmoCount
struct Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics
{
	struct EBBarrel_eventGetAmmoCount_Parms
	{
		bool CountChambered;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CountChambered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CountChambered;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_CountChambered_SetBit(void* Obj)
{
	((EBBarrel_eventGetAmmoCount_Parms*)Obj)->CountChambered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_CountChambered = { "CountChambered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventGetAmmoCount_Parms), &Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_CountChambered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventGetAmmoCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_CountChambered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "GetAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::EBBarrel_eventGetAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::EBBarrel_eventGetAmmoCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_GetAmmoCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_GetAmmoCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execGetAmmoCount)
{
	P_GET_UBOOL(Z_Param_CountChambered);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmmoCount(Z_Param_CountChambered);
	P_NATIVE_END;
}
// End Class UEBBarrel Function GetAmmoCount

// Begin Class UEBBarrel Function InitialBulletTransform
struct EBBarrel_eventInitialBulletTransform_Parms
{
	FVector InLocation;
	FVector InDirection;
	FVector OutLocation;
	FVector OutDirection;
};
static const FName NAME_UEBBarrel_InitialBulletTransform = FName(TEXT("InitialBulletTransform"));
void UEBBarrel::InitialBulletTransform(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection)
{
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_InitialBulletTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		EBBarrel_eventInitialBulletTransform_Parms Parms;
		Parms.InLocation=InLocation;
		Parms.InDirection=InDirection;
		Parms.OutLocation=OutLocation;
		Parms.OutDirection=OutDirection;
	ProcessEvent(Func,&Parms);
		OutLocation=Parms.OutLocation;
		OutDirection=Parms.OutDirection;
	}
	else
	{
		InitialBulletTransform_Implementation(InLocation, InDirection, OutLocation, OutDirection);
	}
}
struct Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventInitialBulletTransform_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventInitialBulletTransform_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventInitialBulletTransform_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventInitialBulletTransform_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_InLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_InDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "InitialBulletTransform", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::PropPointers), sizeof(EBBarrel_eventInitialBulletTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventInitialBulletTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_InitialBulletTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_InitialBulletTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execInitialBulletTransform)
{
	P_GET_STRUCT(FVector,Z_Param_InLocation);
	P_GET_STRUCT(FVector,Z_Param_InDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitialBulletTransform_Implementation(Z_Param_InLocation,Z_Param_InDirection,Z_Param_Out_OutLocation,Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// End Class UEBBarrel Function InitialBulletTransform

// Begin Class UEBBarrel Function NextBullet
struct Z_Construct_UFunction_UEBBarrel_NextBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_NextBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "NextBullet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_NextBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_NextBullet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEBBarrel_NextBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_NextBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execNextBullet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextBullet();
	P_NATIVE_END;
}
// End Class UEBBarrel Function NextBullet

// Begin Class UEBBarrel Function PredictHit
struct Z_Construct_UFunction_UEBBarrel_PredictHit_Statics
{
	struct EBBarrel_eventPredictHit_Parms
	{
		bool Hit;
		FHitResult TraceResult;
		FVector HitLocation;
		float HitTime;
		AActor* HitActor;
		TArray<FVector> Trajectory;
		TSubclassOf<AEBBullet> BulletClass;
		TArray<AActor*> IgnoredActors;
		float MaxTime;
		float Step;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IgnoredActors" },
		{ "Category", "Prediction" },
		{ "CPP_Default_MaxTime", "10.000000" },
		{ "CPP_Default_Step", "0.100000" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Trajectory;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Hit_SetBit(void* Obj)
{
	((EBBarrel_eventPredictHit_Parms*)Obj)->Hit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventPredictHit_Parms), &Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, TraceResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, HitTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Trajectory_Inner = { "Trajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, Trajectory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHit_Parms, Step), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_TraceResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Trajectory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Trajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_IgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_IgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_MaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "PredictHit", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::EBBarrel_eventPredictHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::EBBarrel_eventPredictHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_PredictHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_PredictHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execPredictHit)
{
	P_GET_UBOOL_REF(Z_Param_Out_Hit);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_TraceResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HitTime);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_HitActor);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Trajectory);
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PredictHit(Z_Param_Out_Hit,Z_Param_Out_TraceResult,Z_Param_Out_HitLocation,Z_Param_Out_HitTime,P_ARG_GC_BARRIER(Z_Param_Out_HitActor),Z_Param_Out_Trajectory,Z_Param_BulletClass,Z_Param_IgnoredActors,Z_Param_MaxTime,Z_Param_Step);
	P_NATIVE_END;
}
// End Class UEBBarrel Function PredictHit

// Begin Class UEBBarrel Function PredictHitFromLocation
struct Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics
{
	struct EBBarrel_eventPredictHitFromLocation_Parms
	{
		bool Hit;
		FHitResult TraceResult;
		FVector HitLocation;
		float HitTime;
		AActor* HitActor;
		TArray<FVector> Trajectory;
		TSubclassOf<AEBBullet> BulletClass;
		FVector StartLocation;
		FVector AimDirection;
		TArray<AActor*> IgnoredActors;
		float MaxTime;
		float Step;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "IgnoredActors" },
		{ "Category", "Prediction" },
		{ "CPP_Default_MaxTime", "10.000000" },
		{ "CPP_Default_Step", "0.100000" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Trajectory;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Hit_SetBit(void* Obj)
{
	((EBBarrel_eventPredictHitFromLocation_Parms*)Obj)->Hit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventPredictHitFromLocation_Parms), &Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, TraceResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, HitTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Trajectory_Inner = { "Trajectory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, Trajectory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_AimDirection = { "AimDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, AimDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventPredictHitFromLocation_Parms, Step), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_TraceResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Trajectory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Trajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_AimDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_IgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_IgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_MaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "PredictHitFromLocation", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::EBBarrel_eventPredictHitFromLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::EBBarrel_eventPredictHitFromLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execPredictHitFromLocation)
{
	P_GET_UBOOL_REF(Z_Param_Out_Hit);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_TraceResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HitTime);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_HitActor);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Trajectory);
	P_GET_OBJECT(UClass,Z_Param_BulletClass);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_AimDirection);
	P_GET_TARRAY(AActor*,Z_Param_IgnoredActors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PredictHitFromLocation(Z_Param_Out_Hit,Z_Param_Out_TraceResult,Z_Param_Out_HitLocation,Z_Param_Out_HitTime,P_ARG_GC_BARRIER(Z_Param_Out_HitActor),Z_Param_Out_Trajectory,Z_Param_BulletClass,Z_Param_StartLocation,Z_Param_AimDirection,Z_Param_IgnoredActors,Z_Param_MaxTime,Z_Param_Step);
	P_NATIVE_END;
}
// End Class UEBBarrel Function PredictHitFromLocation

// Begin Class UEBBarrel Function SetAmmo
struct Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics
{
	struct EBBarrel_eventSetAmmo_Parms
	{
		int32 count;
		bool UnloadChambered;
		bool CancelShooting;
		bool ManualCharge;
		TArray<TSubclassOf<AEBBullet> > NewAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_count;
	static void NewProp_UnloadChambered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UnloadChambered;
	static void NewProp_CancelShooting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CancelShooting;
	static void NewProp_ManualCharge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ManualCharge;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAmmo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventSetAmmo_Parms, count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_UnloadChambered_SetBit(void* Obj)
{
	((EBBarrel_eventSetAmmo_Parms*)Obj)->UnloadChambered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_UnloadChambered = { "UnloadChambered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventSetAmmo_Parms), &Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_UnloadChambered_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_CancelShooting_SetBit(void* Obj)
{
	((EBBarrel_eventSetAmmo_Parms*)Obj)->CancelShooting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_CancelShooting = { "CancelShooting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventSetAmmo_Parms), &Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_CancelShooting_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_ManualCharge_SetBit(void* Obj)
{
	((EBBarrel_eventSetAmmo_Parms*)Obj)->ManualCharge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_ManualCharge = { "ManualCharge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventSetAmmo_Parms), &Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_ManualCharge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_NewAmmo_Inner = { "NewAmmo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventSetAmmo_Parms, NewAmmo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAmmo_MetaData), NewProp_NewAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_UnloadChambered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_CancelShooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_ManualCharge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_NewAmmo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::NewProp_NewAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "SetAmmo", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::EBBarrel_eventSetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::EBBarrel_eventSetAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_SetAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_SetAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execSetAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_count);
	P_GET_UBOOL(Z_Param_UnloadChambered);
	P_GET_UBOOL(Z_Param_CancelShooting);
	P_GET_UBOOL(Z_Param_ManualCharge);
	P_GET_TARRAY_REF(TSubclassOf<AEBBullet>,Z_Param_Out_NewAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmmo(Z_Param_count,Z_Param_UnloadChambered,Z_Param_CancelShooting,Z_Param_ManualCharge,Z_Param_Out_NewAmmo);
	P_NATIVE_END;
}
// End Class UEBBarrel Function SetAmmo

// Begin Class UEBBarrel Function Shoot
struct Z_Construct_UFunction_UEBBarrel_Shoot_Statics
{
	struct EBBarrel_eventShoot_Parms
	{
		bool Trigger;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Trigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_Shoot_Statics::NewProp_Trigger_SetBit(void* Obj)
{
	((EBBarrel_eventShoot_Parms*)Obj)->Trigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_Shoot_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventShoot_Parms), &Z_Construct_UFunction_UEBBarrel_Shoot_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_Shoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_Shoot_Statics::NewProp_Trigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_Shoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "Shoot", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_Shoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEBBarrel_Shoot_Statics::EBBarrel_eventShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_Shoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEBBarrel_Shoot_Statics::EBBarrel_eventShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execShoot)
{
	P_GET_UBOOL(Z_Param_Trigger);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shoot(Z_Param_Trigger);
	P_NATIVE_END;
}
// End Class UEBBarrel Function Shoot

// Begin Class UEBBarrel Function ShootRep
struct EBBarrel_eventShootRep_Parms
{
	bool Trigger;
};
static const FName NAME_UEBBarrel_ShootRep = FName(TEXT("ShootRep"));
void UEBBarrel::ShootRep(bool Trigger)
{
	EBBarrel_eventShootRep_Parms Parms;
	Parms.Trigger=Trigger ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_ShootRep);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_ShootRep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Trigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::NewProp_Trigger_SetBit(void* Obj)
{
	((EBBarrel_eventShootRep_Parms*)Obj)->Trigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventShootRep_Parms), &Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::NewProp_Trigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ShootRep", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::PropPointers), sizeof(EBBarrel_eventShootRep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventShootRep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_ShootRep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_ShootRep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execShootRep)
{
	P_GET_UBOOL(Z_Param_Trigger);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ShootRep_Validate(Z_Param_Trigger))
	{
		RPC_ValidateFailed(TEXT("ShootRep_Validate"));
		return;
	}
	P_THIS->ShootRep_Implementation(Z_Param_Trigger);
	P_NATIVE_END;
}
// End Class UEBBarrel Function ShootRep

// Begin Class UEBBarrel Function ShootRepCSA
struct EBBarrel_eventShootRepCSA_Parms
{
	bool Trigger;
	FVector_NetQuantize NewLocation;
	FVector_NetQuantizeNormal NewAim;
};
static const FName NAME_UEBBarrel_ShootRepCSA = FName(TEXT("ShootRepCSA"));
void UEBBarrel::ShootRepCSA(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim)
{
	EBBarrel_eventShootRepCSA_Parms Parms;
	Parms.Trigger=Trigger ? true : false;
	Parms.NewLocation=NewLocation;
	Parms.NewAim=NewAim;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_ShootRepCSA);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Trigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_Trigger_SetBit(void* Obj)
{
	((EBBarrel_eventShootRepCSA_Parms*)Obj)->Trigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventShootRepCSA_Parms), &Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventShootRepCSA_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_NewAim = { "NewAim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventShootRepCSA_Parms, NewAim), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(0, nullptr) }; // 1520846145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_Trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::NewProp_NewAim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ShootRepCSA", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::PropPointers), sizeof(EBBarrel_eventShootRepCSA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventShootRepCSA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_ShootRepCSA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_ShootRepCSA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execShootRepCSA)
{
	P_GET_UBOOL(Z_Param_Trigger);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_NewAim);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ShootRepCSA_Validate(Z_Param_Trigger,Z_Param_NewLocation,Z_Param_NewAim))
	{
		RPC_ValidateFailed(TEXT("ShootRepCSA_Validate"));
		return;
	}
	P_THIS->ShootRepCSA_Implementation(Z_Param_Trigger,Z_Param_NewLocation,Z_Param_NewAim);
	P_NATIVE_END;
}
// End Class UEBBarrel Function ShootRepCSA

// Begin Class UEBBarrel Function ShotFiredMulticast
static const FName NAME_UEBBarrel_ShotFiredMulticast = FName(TEXT("ShotFiredMulticast"));
void UEBBarrel::ShotFiredMulticast()
{
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_ShotFiredMulticast);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "ShotFiredMulticast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execShotFiredMulticast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShotFiredMulticast_Implementation();
	P_NATIVE_END;
}
// End Class UEBBarrel Function ShotFiredMulticast

// Begin Class UEBBarrel Function SwitchFireMode
struct EBBarrel_eventSwitchFireMode_Parms
{
	EFireMode NewFireMode;
};
static const FName NAME_UEBBarrel_SwitchFireMode = FName(TEXT("SwitchFireMode"));
void UEBBarrel::SwitchFireMode(EFireMode NewFireMode)
{
	EBBarrel_eventSwitchFireMode_Parms Parms;
	Parms.NewFireMode=NewFireMode;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_SwitchFireMode);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewFireMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewFireMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::NewProp_NewFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::NewProp_NewFireMode = { "NewFireMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EBBarrel_eventSwitchFireMode_Parms, NewFireMode), Z_Construct_UEnum_EasyBallistics_EFireMode, METADATA_PARAMS(0, nullptr) }; // 3817187530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::NewProp_NewFireMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::NewProp_NewFireMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "SwitchFireMode", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::PropPointers), sizeof(EBBarrel_eventSwitchFireMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventSwitchFireMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_SwitchFireMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_SwitchFireMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execSwitchFireMode)
{
	P_GET_ENUM(EFireMode,Z_Param_NewFireMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SwitchFireMode_Validate(EFireMode(Z_Param_NewFireMode)))
	{
		RPC_ValidateFailed(TEXT("SwitchFireMode_Validate"));
		return;
	}
	P_THIS->SwitchFireMode_Implementation(EFireMode(Z_Param_NewFireMode));
	P_NATIVE_END;
}
// End Class UEBBarrel Function SwitchFireMode

// Begin Class UEBBarrel Function UnloadChambered
struct EBBarrel_eventUnloadChambered_Parms
{
	bool ManualCharge;
};
static const FName NAME_UEBBarrel_UnloadChambered = FName(TEXT("UnloadChambered"));
void UEBBarrel::UnloadChambered(bool ManualCharge)
{
	EBBarrel_eventUnloadChambered_Parms Parms;
	Parms.ManualCharge=ManualCharge ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UEBBarrel_UnloadChambered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ManualCharge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ManualCharge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::NewProp_ManualCharge_SetBit(void* Obj)
{
	((EBBarrel_eventUnloadChambered_Parms*)Obj)->ManualCharge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::NewProp_ManualCharge = { "ManualCharge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EBBarrel_eventUnloadChambered_Parms), &Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::NewProp_ManualCharge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::NewProp_ManualCharge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEBBarrel, nullptr, "UnloadChambered", nullptr, nullptr, Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::PropPointers), sizeof(EBBarrel_eventUnloadChambered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::Function_MetaDataParams) };
static_assert(sizeof(EBBarrel_eventUnloadChambered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEBBarrel_UnloadChambered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEBBarrel_UnloadChambered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEBBarrel::execUnloadChambered)
{
	P_GET_UBOOL(Z_Param_ManualCharge);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->UnloadChambered_Validate(Z_Param_ManualCharge))
	{
		RPC_ValidateFailed(TEXT("UnloadChambered_Validate"));
		return;
	}
	P_THIS->UnloadChambered_Implementation(Z_Param_ManualCharge);
	P_NATIVE_END;
}
// End Class UEBBarrel Function UnloadChambered

// Begin Class UEBBarrel
void UEBBarrel::StaticRegisterNativesUEBBarrel()
{
	UClass* Class = UEBBarrel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRecoil", &UEBBarrel::execApplyRecoil },
		{ "CalculateAimDirection", &UEBBarrel::execCalculateAimDirection },
		{ "CalculateAimDirectionFromLocation", &UEBBarrel::execCalculateAimDirectionFromLocation },
		{ "Charge", &UEBBarrel::execCharge },
		{ "ClientAim", &UEBBarrel::execClientAim },
		{ "GatlingSpool", &UEBBarrel::execGatlingSpool },
		{ "GetAmmo", &UEBBarrel::execGetAmmo },
		{ "GetAmmoCount", &UEBBarrel::execGetAmmoCount },
		{ "InitialBulletTransform", &UEBBarrel::execInitialBulletTransform },
		{ "NextBullet", &UEBBarrel::execNextBullet },
		{ "PredictHit", &UEBBarrel::execPredictHit },
		{ "PredictHitFromLocation", &UEBBarrel::execPredictHitFromLocation },
		{ "SetAmmo", &UEBBarrel::execSetAmmo },
		{ "Shoot", &UEBBarrel::execShoot },
		{ "ShootRep", &UEBBarrel::execShootRep },
		{ "ShootRepCSA", &UEBBarrel::execShootRepCSA },
		{ "ShotFiredMulticast", &UEBBarrel::execShotFiredMulticast },
		{ "SwitchFireMode", &UEBBarrel::execSwitchFireMode },
		{ "UnloadChambered", &UEBBarrel::execUnloadChambered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEBBarrel);
UClass* Z_Construct_UClass_UEBBarrel_NoRegister()
{
	return UEBBarrel::StaticClass();
}
struct Z_Construct_UClass_UEBBarrel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Collision HLOD Mobile VirtualTexture ComponentReplication Mobility VirtualTexture Trigger" },
		{ "IncludePath", "EBBarrel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugArrowSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Bullet inherits barrel velocity, only works with physics enabled or with additional velocity set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Amount of recoil applied to the barrel, only works with physics enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Additional velocity, for use with InheritVelocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Additional maximum spread, in radians, applied on top of bullet spread" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadBias_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Additional Spread bias, higher is more accurate on average" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMultiplierMin_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Minimum of random multiplier applied to bullet muzzle velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleVelocityMultiplierMax_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Maximum of random multiplier applied to bullet muzzle velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRateMin_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Minimum fire rate, rounds per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRateMax_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Maximum fire rate, rounds per second, set to same number as FireRateMin to disable randomization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMode_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingBlocked_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Number of rounds auto fired in burst mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstCooldown_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Minimum time between bursts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatlingAutoSpool_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
		{ "ToolTip", "Automatically spin up gatling when trigger is being held down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatlingSpoolUpTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatlingSpoolDownTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatlingPhase_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleAmmoUnlimited_MetaData[] = {
		{ "Category", "Ammo" },
		{ "EditCondition", "CycleAmmo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleAmmoCount_MetaData[] = {
		{ "Category", "Ammo" },
		{ "EditCondition", "CycleAmmo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleAmmoPos_MetaData[] = {
		{ "Category", "Ammo" },
		{ "EditCondition", "CycleAmmo" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChamberedBullet_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shooting_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spooling_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GatlingRPS_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadNext_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurstRemaining_MetaData[] = {
		{ "Category", "WeaponState" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateVariables_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateShotFiredEvents_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientSideAim_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientAimUpdateFrequency_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientAimDistanceLimit_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeforeShotFired_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotFired_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoDepleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyToShoot_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/EBBarrel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugArrowSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMultiplierMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MuzzleVelocityMultiplierMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRateMax;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FireMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FireMode;
	static void NewProp_ShootingBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShootingBlocked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BurstCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstCooldown;
	static void NewProp_GatlingAutoSpool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GatlingAutoSpool;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GatlingSpoolUpTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GatlingSpoolDownTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GatlingPhase;
	static void NewProp_CycleAmmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CycleAmmo;
	static void NewProp_CycleAmmoUnlimited_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CycleAmmoUnlimited;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ammo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CycleAmmoCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CycleAmmoPos;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChamberedBullet;
	static void NewProp_Shooting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shooting;
	static void NewProp_Spooling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Spooling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GatlingRPS;
	static void NewProp_LoadNext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadNext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BurstRemaining;
	static void NewProp_ReplicateVariables_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateVariables;
	static void NewProp_ReplicateShotFiredEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateShotFiredEvents;
	static void NewProp_ClientSideAim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClientSideAim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientAimUpdateFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientAimDistanceLimit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeforeShotFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShotFired;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AmmoDepleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReadyToShoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature, "AmmoDepleted__DelegateSignature" }, // 1193410353
		{ &Z_Construct_UFunction_UEBBarrel_ApplyRecoil, "ApplyRecoil" }, // 928568939
		{ &Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature, "BeforeShotFired__DelegateSignature" }, // 3998762617
		{ &Z_Construct_UFunction_UEBBarrel_CalculateAimDirection, "CalculateAimDirection" }, // 1610242228
		{ &Z_Construct_UFunction_UEBBarrel_CalculateAimDirectionFromLocation, "CalculateAimDirectionFromLocation" }, // 545307247
		{ &Z_Construct_UFunction_UEBBarrel_Charge, "Charge" }, // 1063524959
		{ &Z_Construct_UFunction_UEBBarrel_ClientAim, "ClientAim" }, // 356488765
		{ &Z_Construct_UFunction_UEBBarrel_GatlingSpool, "GatlingSpool" }, // 179293528
		{ &Z_Construct_UFunction_UEBBarrel_GetAmmo, "GetAmmo" }, // 32498348
		{ &Z_Construct_UFunction_UEBBarrel_GetAmmoCount, "GetAmmoCount" }, // 36508661
		{ &Z_Construct_UFunction_UEBBarrel_InitialBulletTransform, "InitialBulletTransform" }, // 3470164046
		{ &Z_Construct_UFunction_UEBBarrel_NextBullet, "NextBullet" }, // 1392521529
		{ &Z_Construct_UFunction_UEBBarrel_PredictHit, "PredictHit" }, // 3773478276
		{ &Z_Construct_UFunction_UEBBarrel_PredictHitFromLocation, "PredictHitFromLocation" }, // 3021741144
		{ &Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature, "ReadyToShoot__DelegateSignature" }, // 1122793026
		{ &Z_Construct_UFunction_UEBBarrel_SetAmmo, "SetAmmo" }, // 1116683622
		{ &Z_Construct_UFunction_UEBBarrel_Shoot, "Shoot" }, // 2421595512
		{ &Z_Construct_UFunction_UEBBarrel_ShootRep, "ShootRep" }, // 1765676923
		{ &Z_Construct_UFunction_UEBBarrel_ShootRepCSA, "ShootRepCSA" }, // 1755503254
		{ &Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature, "ShotFired__DelegateSignature" }, // 308140578
		{ &Z_Construct_UFunction_UEBBarrel_ShotFiredMulticast, "ShotFiredMulticast" }, // 3048046736
		{ &Z_Construct_UFunction_UEBBarrel_SwitchFireMode, "SwitchFireMode" }, // 985903360
		{ &Z_Construct_UFunction_UEBBarrel_UnloadChambered, "UnloadChambered" }, // 2855787811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEBBarrel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_DebugArrowSize = { "DebugArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, DebugArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugArrowSize_MetaData), NewProp_DebugArrowSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_InheritVelocity = { "InheritVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, InheritVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritVelocity_MetaData), NewProp_InheritVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, RecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilMultiplier_MetaData), NewProp_RecoilMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_AdditionalVelocity = { "AdditionalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, AdditionalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalVelocity_MetaData), NewProp_AdditionalVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, Spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spread_MetaData), NewProp_Spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_SpreadBias = { "SpreadBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, SpreadBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadBias_MetaData), NewProp_SpreadBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_MuzzleVelocityMultiplierMin = { "MuzzleVelocityMultiplierMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, MuzzleVelocityMultiplierMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityMultiplierMin_MetaData), NewProp_MuzzleVelocityMultiplierMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_MuzzleVelocityMultiplierMax = { "MuzzleVelocityMultiplierMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, MuzzleVelocityMultiplierMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleVelocityMultiplierMax_MetaData), NewProp_MuzzleVelocityMultiplierMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireRateMin = { "FireRateMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, FireRateMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRateMin_MetaData), NewProp_FireRateMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireRateMax = { "FireRateMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, FireRateMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRateMax_MetaData), NewProp_FireRateMax_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireMode = { "FireMode", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, FireMode), Z_Construct_UEnum_EasyBallistics_EFireMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMode_MetaData), NewProp_FireMode_MetaData) }; // 3817187530
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShootingBlocked_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->ShootingBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShootingBlocked = { "ShootingBlocked", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShootingBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingBlocked_MetaData), NewProp_ShootingBlocked_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstCount = { "BurstCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, BurstCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstCount_MetaData), NewProp_BurstCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstCooldown = { "BurstCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, BurstCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstCooldown_MetaData), NewProp_BurstCooldown_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingAutoSpool_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->GatlingAutoSpool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingAutoSpool = { "GatlingAutoSpool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingAutoSpool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatlingAutoSpool_MetaData), NewProp_GatlingAutoSpool_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingSpoolUpTime = { "GatlingSpoolUpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, GatlingSpoolUpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatlingSpoolUpTime_MetaData), NewProp_GatlingSpoolUpTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingSpoolDownTime = { "GatlingSpoolDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, GatlingSpoolDownTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatlingSpoolDownTime_MetaData), NewProp_GatlingSpoolDownTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingPhase = { "GatlingPhase", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, GatlingPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatlingPhase_MetaData), NewProp_GatlingPhase_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmo_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->CycleAmmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmo = { "CycleAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleAmmo_MetaData), NewProp_CycleAmmo_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoUnlimited_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->CycleAmmoUnlimited = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoUnlimited = { "CycleAmmoUnlimited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoUnlimited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleAmmoUnlimited_MetaData), NewProp_CycleAmmoUnlimited_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Ammo_Inner = { "Ammo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, Ammo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoCount = { "CycleAmmoCount", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, CycleAmmoCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleAmmoCount_MetaData), NewProp_CycleAmmoCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoPos = { "CycleAmmoPos", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, CycleAmmoPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleAmmoPos_MetaData), NewProp_CycleAmmoPos_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ChamberedBullet = { "ChamberedBullet", nullptr, (EPropertyFlags)0x0014000000000024, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, ChamberedBullet), Z_Construct_UClass_UClass, Z_Construct_UClass_AEBBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChamberedBullet_MetaData), NewProp_ChamberedBullet_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_Shooting_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->Shooting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Shooting = { "Shooting", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_Shooting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shooting_MetaData), NewProp_Shooting_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spooling_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->Spooling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spooling = { "Spooling", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spooling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spooling_MetaData), NewProp_Spooling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingRPS = { "GatlingRPS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, GatlingRPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GatlingRPS_MetaData), NewProp_GatlingRPS_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_LoadNext_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->LoadNext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_LoadNext = { "LoadNext", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_LoadNext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadNext_MetaData), NewProp_LoadNext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstRemaining = { "BurstRemaining", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, BurstRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurstRemaining_MetaData), NewProp_BurstRemaining_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateVariables_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->ReplicateVariables = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateVariables = { "ReplicateVariables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateVariables_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateVariables_MetaData), NewProp_ReplicateVariables_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateShotFiredEvents_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->ReplicateShotFiredEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateShotFiredEvents = { "ReplicateShotFiredEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateShotFiredEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateShotFiredEvents_MetaData), NewProp_ReplicateShotFiredEvents_MetaData) };
void Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientSideAim_SetBit(void* Obj)
{
	((UEBBarrel*)Obj)->ClientSideAim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientSideAim = { "ClientSideAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEBBarrel), &Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientSideAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientSideAim_MetaData), NewProp_ClientSideAim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientAimUpdateFrequency = { "ClientAimUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, ClientAimUpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientAimUpdateFrequency_MetaData), NewProp_ClientAimUpdateFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientAimDistanceLimit = { "ClientAimDistanceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, ClientAimDistanceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientAimDistanceLimit_MetaData), NewProp_ClientAimDistanceLimit_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_BeforeShotFired = { "BeforeShotFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, BeforeShotFired), Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeforeShotFired_MetaData), NewProp_BeforeShotFired_MetaData) }; // 3998762617
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShotFired = { "ShotFired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, ShotFired), Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotFired_MetaData), NewProp_ShotFired_MetaData) }; // 308140578
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_AmmoDepleted = { "AmmoDepleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, AmmoDepleted), Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoDepleted_MetaData), NewProp_AmmoDepleted_MetaData) }; // 1193410353
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReadyToShoot = { "ReadyToShoot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEBBarrel, ReadyToShoot), Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyToShoot_MetaData), NewProp_ReadyToShoot_MetaData) }; // 1122793026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEBBarrel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_DebugArrowSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_InheritVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_RecoilMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_AdditionalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_SpreadBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_MuzzleVelocityMultiplierMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_MuzzleVelocityMultiplierMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireRateMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireRateMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_FireMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShootingBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingAutoSpool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingSpoolUpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingSpoolDownTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoUnlimited,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Ammo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_CycleAmmoPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ChamberedBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Shooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Spooling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_GatlingRPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_LoadNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_BurstRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReplicateShotFiredEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientSideAim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientAimUpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ClientAimDistanceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_BeforeShotFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ShotFired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_AmmoDepleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEBBarrel_Statics::NewProp_ReadyToShoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEBBarrel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEBBarrel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EasyBallistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEBBarrel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEBBarrel_Statics::ClassParams = {
	&UEBBarrel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEBBarrel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEBBarrel_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEBBarrel_Statics::Class_MetaDataParams), Z_Construct_UClass_UEBBarrel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEBBarrel()
{
	if (!Z_Registration_Info_UClass_UEBBarrel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEBBarrel.OuterSingleton, Z_Construct_UClass_UEBBarrel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEBBarrel.OuterSingleton;
}
template<> EASYBALLISTICS_API UClass* StaticClass<UEBBarrel>()
{
	return UEBBarrel::StaticClass();
}
void UEBBarrel::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_FireMode(TEXT("FireMode"));
	static const FName Name_ShootingBlocked(TEXT("ShootingBlocked"));
	static const FName Name_Ammo(TEXT("Ammo"));
	static const FName Name_CycleAmmoCount(TEXT("CycleAmmoCount"));
	static const FName Name_CycleAmmoPos(TEXT("CycleAmmoPos"));
	static const FName Name_ChamberedBullet(TEXT("ChamberedBullet"));
	static const FName Name_Shooting(TEXT("Shooting"));
	static const FName Name_Spooling(TEXT("Spooling"));
	const bool bIsValid = true
		&& Name_FireMode == ClassReps[(int32)ENetFields_Private::FireMode].Property->GetFName()
		&& Name_ShootingBlocked == ClassReps[(int32)ENetFields_Private::ShootingBlocked].Property->GetFName()
		&& Name_Ammo == ClassReps[(int32)ENetFields_Private::Ammo].Property->GetFName()
		&& Name_CycleAmmoCount == ClassReps[(int32)ENetFields_Private::CycleAmmoCount].Property->GetFName()
		&& Name_CycleAmmoPos == ClassReps[(int32)ENetFields_Private::CycleAmmoPos].Property->GetFName()
		&& Name_ChamberedBullet == ClassReps[(int32)ENetFields_Private::ChamberedBullet].Property->GetFName()
		&& Name_Shooting == ClassReps[(int32)ENetFields_Private::Shooting].Property->GetFName()
		&& Name_Spooling == ClassReps[(int32)ENetFields_Private::Spooling].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEBBarrel"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEBBarrel);
UEBBarrel::~UEBBarrel() {}
// End Class UEBBarrel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFireMode_StaticEnum, TEXT("EFireMode"), &Z_Registration_Info_UEnum_EFireMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3817187530U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEBBarrel, UEBBarrel::StaticClass, TEXT("UEBBarrel"), &Z_Registration_Info_UClass_UEBBarrel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEBBarrel), 3673177128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_1588269982(TEXT("/Script/EasyBallistics"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
