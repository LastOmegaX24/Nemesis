// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/Async_WaitForMeleeTraceEvent.h"
#include "MeleeTrace/Public/ActiveMeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsync_WaitForMeleeTraceEvent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
MELEETRACE_API UClass* Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent();
MELEETRACE_API UClass* Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_NoRegister();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceComponent_NoRegister();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature();
MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncMeleeHitInfo();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin ScriptStruct FAsyncMeleeHitInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo;
class UScriptStruct* FAsyncMeleeHitInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncMeleeHitInfo, (UObject*)Z_Construct_UPackage__Script_MeleeTrace(), TEXT("AsyncMeleeHitInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.OuterSingleton;
}
template<> MELEETRACE_API UScriptStruct* StaticStruct<FAsyncMeleeHitInfo>()
{
	return FAsyncMeleeHitInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTraceComponent_MetaData[] = {
		{ "Category", "Melee Trace Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "Category", "Melee Trace Info" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "Melee Trace Info" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "Melee Trace Info" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoneName_MetaData[] = {
		{ "Category", "Melee Trace Info" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTraceComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncMeleeHitInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_OwnerTraceComponent = { "OwnerTraceComponent", nullptr, (EPropertyFlags)0x011400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncMeleeHitInfo, OwnerTraceComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTraceComponent_MetaData), NewProp_OwnerTraceComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncMeleeHitInfo, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncMeleeHitInfo, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncMeleeHitInfo, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncMeleeHitInfo, HitBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoneName_MetaData), NewProp_HitBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_OwnerTraceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewProp_HitBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
	nullptr,
	&NewStructOps,
	"AsyncMeleeHitInfo",
	Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::PropPointers),
	sizeof(FAsyncMeleeHitInfo),
	alignof(FAsyncMeleeHitInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAsyncMeleeHitInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.InnerSingleton, Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo.InnerSingleton;
}
// End ScriptStruct FAsyncMeleeHitInfo

// Begin Delegate FAsyncWaitForMeleeHitDetected
struct Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics
{
	struct Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms
	{
		FAsyncMeleeHitInfo HitInfo;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms, HitInfo), Z_Construct_UScriptStruct_FAsyncMeleeHitInfo, METADATA_PARAMS(0, nullptr) }; // 4142518590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "AsyncWaitForMeleeHitDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsync_WaitForMeleeTraceEvent::FAsyncWaitForMeleeHitDetected_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeHitDetected, FAsyncMeleeHitInfo HitInfo, FMeleeTraceInstanceHandle TraceHandle)
{
	struct Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms
	{
		FAsyncMeleeHitInfo HitInfo;
		FMeleeTraceInstanceHandle TraceHandle;
	};
	Async_WaitForMeleeTraceEvent_eventAsyncWaitForMeleeHitDetected_Parms Parms;
	Parms.HitInfo=HitInfo;
	Parms.TraceHandle=TraceHandle;
	AsyncWaitForMeleeHitDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAsyncWaitForMeleeHitDetected

// Begin Delegate FAsyncWaitForMeleeTraceStarted
struct Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "AsyncWaitForMeleeTraceStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsync_WaitForMeleeTraceEvent::FAsyncWaitForMeleeTraceStarted_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeTraceStarted)
{
	AsyncWaitForMeleeTraceStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAsyncWaitForMeleeTraceStarted

// Begin Delegate FAsyncWaitForMeleeTraceEnded
struct Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "AsyncWaitForMeleeTraceEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsync_WaitForMeleeTraceEvent::FAsyncWaitForMeleeTraceEnded_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitForMeleeTraceEnded)
{
	AsyncWaitForMeleeTraceEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAsyncWaitForMeleeTraceEnded

// Begin Class UAsync_WaitForMeleeTraceEvent Function HandleTraceEnded
struct Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics
{
	struct Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		int32 HitCount;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_HitCount = { "HitCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms, HitCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_HitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "HandleTraceEnded", nullptr, nullptr, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsync_WaitForMeleeTraceEvent::execHandleTraceEnded)
{
	P_GET_OBJECT(UMeleeTraceComponent,Z_Param_ThisComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_HitCount);
	P_GET_STRUCT(FMeleeTraceInstanceHandle,Z_Param_TraceHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTraceEnded(Z_Param_ThisComponent,Z_Param_HitCount,Z_Param_TraceHandle);
	P_NATIVE_END;
}
// End Class UAsync_WaitForMeleeTraceEvent Function HandleTraceEnded

// Begin Class UAsync_WaitForMeleeTraceEvent Function HandleTraceHit
struct Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics
{
	struct Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms
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
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitBoneName = { "HitBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, HitBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_HitBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "HandleTraceHit", nullptr, nullptr, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsync_WaitForMeleeTraceEvent::execHandleTraceHit)
{
	P_GET_OBJECT(UMeleeTraceComponent,Z_Param_ThisComponent);
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBoneName);
	P_GET_STRUCT(FMeleeTraceInstanceHandle,Z_Param_TraceHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTraceHit(Z_Param_ThisComponent,Z_Param_HitActor,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_HitBoneName,Z_Param_TraceHandle);
	P_NATIVE_END;
}
// End Class UAsync_WaitForMeleeTraceEvent Function HandleTraceHit

// Begin Class UAsync_WaitForMeleeTraceEvent Function HandleTraceStarted
struct Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics
{
	struct Async_WaitForMeleeTraceEvent_eventHandleTraceStarted_Parms
	{
		UMeleeTraceComponent* ThisComponent;
		FMeleeTraceInstanceHandle TraceHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceStarted_Parms, ThisComponent), Z_Construct_UClass_UMeleeTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThisComponent_MetaData), NewProp_ThisComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::NewProp_TraceHandle = { "TraceHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventHandleTraceStarted_Parms, TraceHandle), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 521459338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::NewProp_ThisComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::NewProp_TraceHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "HandleTraceStarted", nullptr, nullptr, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::Async_WaitForMeleeTraceEvent_eventHandleTraceStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsync_WaitForMeleeTraceEvent::execHandleTraceStarted)
{
	P_GET_OBJECT(UMeleeTraceComponent,Z_Param_ThisComponent);
	P_GET_STRUCT(FMeleeTraceInstanceHandle,Z_Param_TraceHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTraceStarted(Z_Param_ThisComponent,Z_Param_TraceHandle);
	P_NATIVE_END;
}
// End Class UAsync_WaitForMeleeTraceEvent Function HandleTraceStarted

// Begin Class UAsync_WaitForMeleeTraceEvent Function WaitForMeleeTraceEventHit
struct Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics
{
	struct Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms
	{
		UObject* WorldContextObject;
		AActor* ActorToWatch;
		UAsync_WaitForMeleeTraceEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "True" },
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToWatch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_ActorToWatch = { "ActorToWatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms, ActorToWatch), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms, ReturnValue), Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_ActorToWatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, nullptr, "WaitForMeleeTraceEventHit", nullptr, nullptr, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::Async_WaitForMeleeTraceEvent_eventWaitForMeleeTraceEventHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsync_WaitForMeleeTraceEvent::execWaitForMeleeTraceEventHit)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_ActorToWatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsync_WaitForMeleeTraceEvent**)Z_Param__Result=UAsync_WaitForMeleeTraceEvent::WaitForMeleeTraceEventHit(Z_Param_WorldContextObject,Z_Param_ActorToWatch);
	P_NATIVE_END;
}
// End Class UAsync_WaitForMeleeTraceEvent Function WaitForMeleeTraceEventHit

// Begin Class UAsync_WaitForMeleeTraceEvent
void UAsync_WaitForMeleeTraceEvent::StaticRegisterNativesUAsync_WaitForMeleeTraceEvent()
{
	UClass* Class = UAsync_WaitForMeleeTraceEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTraceEnded", &UAsync_WaitForMeleeTraceEvent::execHandleTraceEnded },
		{ "HandleTraceHit", &UAsync_WaitForMeleeTraceEvent::execHandleTraceHit },
		{ "HandleTraceStarted", &UAsync_WaitForMeleeTraceEvent::execHandleTraceStarted },
		{ "WaitForMeleeTraceEventHit", &UAsync_WaitForMeleeTraceEvent::execWaitForMeleeTraceEventHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsync_WaitForMeleeTraceEvent);
UClass* Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_NoRegister()
{
	return UAsync_WaitForMeleeTraceEvent::StaticClass();
}
struct Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Async_WaitForMeleeTraceEvent.h" },
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Async_WaitForMeleeTraceEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature, "AsyncWaitForMeleeHitDetected__DelegateSignature" }, // 3762756712
		{ &Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature, "AsyncWaitForMeleeTraceEnded__DelegateSignature" }, // 3061204393
		{ &Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature, "AsyncWaitForMeleeTraceStarted__DelegateSignature" }, // 2923042962
		{ &Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceEnded, "HandleTraceEnded" }, // 2779753263
		{ &Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceHit, "HandleTraceHit" }, // 861880056
		{ &Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_HandleTraceStarted, "HandleTraceStarted" }, // 357177624
		{ &Z_Construct_UFunction_UAsync_WaitForMeleeTraceEvent_WaitForMeleeTraceEventHit, "WaitForMeleeTraceEventHit" }, // 1851787131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsync_WaitForMeleeTraceEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsync_WaitForMeleeTraceEvent, OnHit), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 3762756712
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnStarted = { "OnStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsync_WaitForMeleeTraceEvent, OnStarted), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStarted_MetaData), NewProp_OnStarted_MetaData) }; // 2923042962
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnEnded = { "OnEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsync_WaitForMeleeTraceEvent, OnEnded), Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnded_MetaData), NewProp_OnEnded_MetaData) }; // 3061204393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::NewProp_OnEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::ClassParams = {
	&UAsync_WaitForMeleeTraceEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent()
{
	if (!Z_Registration_Info_UClass_UAsync_WaitForMeleeTraceEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsync_WaitForMeleeTraceEvent.OuterSingleton, Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsync_WaitForMeleeTraceEvent.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UAsync_WaitForMeleeTraceEvent>()
{
	return UAsync_WaitForMeleeTraceEvent::StaticClass();
}
UAsync_WaitForMeleeTraceEvent::UAsync_WaitForMeleeTraceEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsync_WaitForMeleeTraceEvent);
UAsync_WaitForMeleeTraceEvent::~UAsync_WaitForMeleeTraceEvent() {}
// End Class UAsync_WaitForMeleeTraceEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAsyncMeleeHitInfo::StaticStruct, Z_Construct_UScriptStruct_FAsyncMeleeHitInfo_Statics::NewStructOps, TEXT("AsyncMeleeHitInfo"), &Z_Registration_Info_UScriptStruct_AsyncMeleeHitInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAsyncMeleeHitInfo), 4142518590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsync_WaitForMeleeTraceEvent, UAsync_WaitForMeleeTraceEvent::StaticClass, TEXT("UAsync_WaitForMeleeTraceEvent"), &Z_Registration_Info_UClass_UAsync_WaitForMeleeTraceEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsync_WaitForMeleeTraceEvent), 2796128969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_3770806435(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_Async_WaitForMeleeTraceEvent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
