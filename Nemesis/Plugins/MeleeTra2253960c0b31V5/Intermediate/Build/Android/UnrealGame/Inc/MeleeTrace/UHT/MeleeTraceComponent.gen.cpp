// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/MeleeTraceComponent.h"
#include "MeleeTrace/Public/ActiveMeleeTraceInfo.h"
#include "MeleeTrace/Public/MeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTraceComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceComponent();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceComponent_NoRegister();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInfo();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin Delegate FMeleeTraceStart
struct Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics
{
	struct _Script_MeleeTrace_eventMeleeTraceStart_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceStart_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceStart_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MeleeTrace, nullptr, "MeleeTraceStart__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMeleeTraceStart_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceStart, UMeleeTraceComponent* ThisComponent, FMeleeTraceInstanceHandle TraceHandle)
{
	struct _Script_MeleeTrace_eventMeleeTraceStart_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		FMeleeTraceInstanceHandle TraceHandle;
	};
	_Script_MeleeTrace_eventMeleeTraceStart_Parms Parms;
	Parms.ThisComponent=ThisComponent;
	Parms.TraceHandle=TraceHandle;
	MeleeTraceStart.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMeleeTraceStart

// Begin Delegate FMeleeTraceEnd
struct Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics
{
	struct _Script_MeleeTrace_eventMeleeTraceEnd_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		int32 HitCount;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceEnd_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_HitCount = { "HitCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceEnd_Parms, HitCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceEnd_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_HitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MeleeTrace, nullptr, "MeleeTraceEnd__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMeleeTraceEnd_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceEnd, UMeleeTraceComponent* ThisComponent, int32 HitCount, FMeleeTraceInstanceHandle TraceHandle)
{
	struct _Script_MeleeTrace_eventMeleeTraceEnd_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		int32 HitCount;
		FMeleeTraceInstanceHandle TraceHandle;
	};
	_Script_MeleeTrace_eventMeleeTraceEnd_Parms Parms;
	Parms.ThisComponent=ThisComponent;
	Parms.HitCount=HitCount;
	Parms.TraceHandle=TraceHandle;
	MeleeTraceEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMeleeTraceEnd

// Begin Delegate FMeleeTraceHit
struct Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics
{
	struct _Script_MeleeTrace_eventMeleeTraceHit_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		AActor* HitActor;
		FVector HitLocation;
		FVector HitNormal;
		FName HitBoneName;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, HitBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MeleeTrace_eventMeleeTraceHit_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_HitBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MeleeTrace, nullptr, "MeleeTraceHit__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::_Script_MeleeTrace_eventMeleeTraceHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMeleeTraceHit_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceHit, UMeleeTraceComponent* ThisComponent, AActor* HitActor, FVector const& HitLocation, FVector const& HitNormal, FName HitBoneName, FMeleeTraceInstanceHandle TraceHandle)
{
	struct _Script_MeleeTrace_eventMeleeTraceHit_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		AActor* HitActor;
		FVector HitLocation;
		FVector HitNormal;
		FName HitBoneName;
		FMeleeTraceInstanceHandle TraceHandle;
	};
	_Script_MeleeTrace_eventMeleeTraceHit_Parms Parms;
	Parms.ThisComponent=ThisComponent;
	Parms.HitActor=HitActor;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.HitBoneName=HitBoneName;
	Parms.TraceHandle=TraceHandle;
	MeleeTraceHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMeleeTraceHit

// Begin Class UMeleeTraceComponent Function EndTrace
struct Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics
{
	struct MeleeTraceComponent_eventEndTrace_Parms
	{
		FMeleeTraceInstanceHandle MeleeTraceInstanceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeTraceInstanceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::NewProp_MeleeTraceInstanceHandle = { "MeleeTraceInstanceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventEndTrace_Parms, MeleeTraceInstanceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::NewProp_MeleeTraceInstanceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "EndTrace", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::MeleeTraceComponent_eventEndTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::MeleeTraceComponent_eventEndTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_EndTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_EndTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execEndTrace)
{
	P_GET_STRUCT(FMeleeTraceInstanceHandle,Z_Param_MeleeTraceInstanceHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTrace(Z_Param_MeleeTraceInstanceHandle);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function EndTrace

// Begin Class UMeleeTraceComponent Function EndTraceWithContext
struct Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics
{
	struct MeleeTraceComponent_eventEndTraceWithContext_Parms
	{
		const UObject* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventEndTraceWithContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "EndTraceWithContext", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::MeleeTraceComponent_eventEndTraceWithContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::MeleeTraceComponent_eventEndTraceWithContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execEndTraceWithContext)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTraceWithContext(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function EndTraceWithContext

// Begin Class UMeleeTraceComponent Function ForceEndAllTraces
struct Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "ForceEndAllTraces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execForceEndAllTraces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceEndAllTraces();
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function ForceEndAllTraces

// Begin Class UMeleeTraceComponent Function GetActorsHitByTrace
struct Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics
{
	struct MeleeTraceComponent_eventGetActorsHitByTrace_Parms
	{
		FMeleeTraceInstanceHandle Handle;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventGetActorsHitByTrace_Parms, Handle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 521459338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventGetActorsHitByTrace_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "GetActorsHitByTrace", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::MeleeTraceComponent_eventGetActorsHitByTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::MeleeTraceComponent_eventGetActorsHitByTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execGetActorsHitByTrace)
{
	P_GET_STRUCT_REF(FMeleeTraceInstanceHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsHitByTrace(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function GetActorsHitByTrace

// Begin Class UMeleeTraceComponent Function GetActorsHitByTraceWithContext
struct Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics
{
	struct MeleeTraceComponent_eventGetActorsHitByTraceWithContext_Parms
	{
		const UObject* Context;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventGetActorsHitByTraceWithContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventGetActorsHitByTraceWithContext_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "GetActorsHitByTraceWithContext", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::MeleeTraceComponent_eventGetActorsHitByTraceWithContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::MeleeTraceComponent_eventGetActorsHitByTraceWithContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execGetActorsHitByTraceWithContext)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsHitByTraceWithContext(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function GetActorsHitByTraceWithContext

// Begin Class UMeleeTraceComponent Function GetTraceChannel
struct Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics
{
	struct MeleeTraceComponent_eventGetTraceChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "GetTraceChannel", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::MeleeTraceComponent_eventGetTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::MeleeTraceComponent_eventGetTraceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execGetTraceChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetTraceChannel();
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function GetTraceChannel

// Begin Class UMeleeTraceComponent Function InvalidateMeleeTraceHandle
struct Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics
{
	struct MeleeTraceComponent_eventInvalidateMeleeTraceHandle_Parms
	{
		FMeleeTraceInstanceHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventInvalidateMeleeTraceHandle_Parms, Handle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "InvalidateMeleeTraceHandle", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::MeleeTraceComponent_eventInvalidateMeleeTraceHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::MeleeTraceComponent_eventInvalidateMeleeTraceHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execInvalidateMeleeTraceHandle)
{
	P_GET_STRUCT_REF(FMeleeTraceInstanceHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMeleeTraceComponent::InvalidateMeleeTraceHandle(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function InvalidateMeleeTraceHandle

// Begin Class UMeleeTraceComponent Function IsAnyTraceActive
struct Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics
{
	struct MeleeTraceComponent_eventIsAnyTraceActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeleeTraceComponent_eventIsAnyTraceActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeleeTraceComponent_eventIsAnyTraceActive_Parms), &Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "IsAnyTraceActive", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::MeleeTraceComponent_eventIsAnyTraceActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::MeleeTraceComponent_eventIsAnyTraceActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execIsAnyTraceActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAnyTraceActive();
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function IsAnyTraceActive

// Begin Class UMeleeTraceComponent Function IsMeleeTraceHandleValid
struct Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics
{
	struct MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms
	{
		FMeleeTraceInstanceHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 521459338
void Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms), &Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "IsMeleeTraceHandleValid", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::MeleeTraceComponent_eventIsMeleeTraceHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execIsMeleeTraceHandleValid)
{
	P_GET_STRUCT_REF(FMeleeTraceInstanceHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMeleeTraceComponent::IsMeleeTraceHandleValid(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function IsMeleeTraceHandleValid

// Begin Class UMeleeTraceComponent Function SetTraceChannel
struct Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics
{
	struct MeleeTraceComponent_eventSetTraceChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> NewTraceChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::NewProp_NewTraceChannel = { "NewTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventSetTraceChannel_Parms, NewTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::NewProp_NewTraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "SetTraceChannel", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::MeleeTraceComponent_eventSetTraceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::MeleeTraceComponent_eventSetTraceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execSetTraceChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewTraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTraceChannel(ECollisionChannel(Z_Param_NewTraceChannel));
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function SetTraceChannel

// Begin Class UMeleeTraceComponent Function StartTrace
struct Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics
{
	struct MeleeTraceComponent_eventStartTrace_Parms
	{
		FMeleeTraceInfo MeleeTraceInfo;
		FMeleeTraceInstanceHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "Comment", "// Starts trace and returns a unique handle for this given trace. To stop it, EndTrace must be called with\n// the same handle structure. Owner is responsible for storing the handle.\n" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
		{ "ToolTip", "Starts trace and returns a unique handle for this given trace. To stop it, EndTrace must be called with\nthe same handle structure. Owner is responsible for storing the handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTraceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeTraceInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::NewProp_MeleeTraceInfo = { "MeleeTraceInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventStartTrace_Parms, MeleeTraceInfo), Z_Construct_UScriptStruct_FMeleeTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTraceInfo_MetaData), NewProp_MeleeTraceInfo_MetaData) }; // 3124408688
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventStartTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::NewProp_MeleeTraceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "StartTrace", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::MeleeTraceComponent_eventStartTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::MeleeTraceComponent_eventStartTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_StartTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_StartTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execStartTrace)
{
	P_GET_STRUCT_REF(FMeleeTraceInfo,Z_Param_Out_MeleeTraceInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMeleeTraceInstanceHandle*)Z_Param__Result=P_THIS->StartTrace(Z_Param_Out_MeleeTraceInfo);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function StartTrace

// Begin Class UMeleeTraceComponent Function StartTraceWithContext
struct Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics
{
	struct MeleeTraceComponent_eventStartTraceWithContext_Parms
	{
		FMeleeTraceInfo MeleeTraceInfo;
		const UObject* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "Comment", "// Starts trace and uses Context object to generate and later retrieve unique handle for the trace that has been\n// started. Using this has a known limitation of only one trace being active per Context object. This is fine\n// in most cases as for example each anim notify state is a unique object and it can only control one trace.\n" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
		{ "ToolTip", "Starts trace and uses Context object to generate and later retrieve unique handle for the trace that has been\nstarted. Using this has a known limitation of only one trace being active per Context object. This is fine\nin most cases as for example each anim notify state is a unique object and it can only control one trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTraceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeTraceInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::NewProp_MeleeTraceInfo = { "MeleeTraceInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventStartTraceWithContext_Parms, MeleeTraceInfo), Z_Construct_UScriptStruct_FMeleeTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTraceInfo_MetaData), NewProp_MeleeTraceInfo_MetaData) }; // 3124408688
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceComponent_eventStartTraceWithContext_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::NewProp_MeleeTraceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceComponent, nullptr, "StartTraceWithContext", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::MeleeTraceComponent_eventStartTraceWithContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::MeleeTraceComponent_eventStartTraceWithContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceComponent::execStartTraceWithContext)
{
	P_GET_STRUCT_REF(FMeleeTraceInfo,Z_Param_Out_MeleeTraceInfo);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTraceWithContext(Z_Param_Out_MeleeTraceInfo,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMeleeTraceComponent Function StartTraceWithContext

// Begin Class UMeleeTraceComponent
void UMeleeTraceComponent::StaticRegisterNativesUMeleeTraceComponent()
{
	UClass* Class = UMeleeTraceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndTrace", &UMeleeTraceComponent::execEndTrace },
		{ "EndTraceWithContext", &UMeleeTraceComponent::execEndTraceWithContext },
		{ "ForceEndAllTraces", &UMeleeTraceComponent::execForceEndAllTraces },
		{ "GetActorsHitByTrace", &UMeleeTraceComponent::execGetActorsHitByTrace },
		{ "GetActorsHitByTraceWithContext", &UMeleeTraceComponent::execGetActorsHitByTraceWithContext },
		{ "GetTraceChannel", &UMeleeTraceComponent::execGetTraceChannel },
		{ "InvalidateMeleeTraceHandle", &UMeleeTraceComponent::execInvalidateMeleeTraceHandle },
		{ "IsAnyTraceActive", &UMeleeTraceComponent::execIsAnyTraceActive },
		{ "IsMeleeTraceHandleValid", &UMeleeTraceComponent::execIsMeleeTraceHandleValid },
		{ "SetTraceChannel", &UMeleeTraceComponent::execSetTraceChannel },
		{ "StartTrace", &UMeleeTraceComponent::execStartTrace },
		{ "StartTraceWithContext", &UMeleeTraceComponent::execStartTraceWithContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceComponent);
UClass* Z_Construct_UClass_UMeleeTraceComponent_NoRegister()
{
	return UMeleeTraceComponent::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MeleeTraceComponent.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTraceStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTraceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTraceHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceStart;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceHit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeTraceComponent_EndTrace, "EndTrace" }, // 3309004808
		{ &Z_Construct_UFunction_UMeleeTraceComponent_EndTraceWithContext, "EndTraceWithContext" }, // 502512370
		{ &Z_Construct_UFunction_UMeleeTraceComponent_ForceEndAllTraces, "ForceEndAllTraces" }, // 2328143451
		{ &Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTrace, "GetActorsHitByTrace" }, // 2472386756
		{ &Z_Construct_UFunction_UMeleeTraceComponent_GetActorsHitByTraceWithContext, "GetActorsHitByTraceWithContext" }, // 1290941984
		{ &Z_Construct_UFunction_UMeleeTraceComponent_GetTraceChannel, "GetTraceChannel" }, // 99028657
		{ &Z_Construct_UFunction_UMeleeTraceComponent_InvalidateMeleeTraceHandle, "InvalidateMeleeTraceHandle" }, // 4045096890
		{ &Z_Construct_UFunction_UMeleeTraceComponent_IsAnyTraceActive, "IsAnyTraceActive" }, // 1300976135
		{ &Z_Construct_UFunction_UMeleeTraceComponent_IsMeleeTraceHandleValid, "IsMeleeTraceHandleValid" }, // 2914309985
		{ &Z_Construct_UFunction_UMeleeTraceComponent_SetTraceChannel, "SetTraceChannel" }, // 1989597107
		{ &Z_Construct_UFunction_UMeleeTraceComponent_StartTrace, "StartTrace" }, // 1667740526
		{ &Z_Construct_UFunction_UMeleeTraceComponent_StartTraceWithContext, "StartTraceWithContext" }, // 461268865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceStart = { "OnTraceStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceComponent, OnTraceStart), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTraceStart_MetaData), NewProp_OnTraceStart_MetaData) }; // 960605537
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceEnd = { "OnTraceEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceComponent, OnTraceEnd), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTraceEnd_MetaData), NewProp_OnTraceEnd_MetaData) }; // 2090961771
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceHit = { "OnTraceHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceComponent, OnTraceHit), Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTraceHit_MetaData), NewProp_OnTraceHit_MetaData) }; // 2567577938
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_OnTraceHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceComponent_Statics::NewProp_TraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceComponent_Statics::ClassParams = {
	&UMeleeTraceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeleeTraceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceComponent()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceComponent.OuterSingleton, Z_Construct_UClass_UMeleeTraceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceComponent.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceComponent>()
{
	return UMeleeTraceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceComponent);
UMeleeTraceComponent::~UMeleeTraceComponent() {}
// End Class UMeleeTraceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeTraceComponent, UMeleeTraceComponent::StaticClass, TEXT("UMeleeTraceComponent"), &Z_Registration_Info_UClass_UMeleeTraceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceComponent), 2551420252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_2630790928(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
