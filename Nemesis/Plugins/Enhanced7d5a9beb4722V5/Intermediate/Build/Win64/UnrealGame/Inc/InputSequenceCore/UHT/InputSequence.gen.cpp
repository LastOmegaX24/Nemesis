// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSequenceCore/Public/InputSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSequence() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequence();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequence_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceEvent_Base();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceRequestKey();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceRequestKey_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Base();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Base_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Hub();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Hub_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Input();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Input_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Reset();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequenceState_Reset_NoRegister();
INPUTSEQUENCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInfo();
INPUTSEQUENCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceEventRequest();
INPUTSEQUENCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceResetRequest();
INPUTSEQUENCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceStateCollection();
UPackage* Z_Construct_UPackage__Script_InputSequenceCore();
// End Cross Module References

// Begin Class UInputSequenceRequestKey
void UInputSequenceRequestKey::StaticRegisterNativesUInputSequenceRequestKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceRequestKey);
UClass* Z_Construct_UClass_UInputSequenceRequestKey_NoRegister()
{
	return UInputSequenceRequestKey::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceRequestKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceRequestKey\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceRequestKey" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceRequestKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputSequenceRequestKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceRequestKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceRequestKey_Statics::ClassParams = {
	&UInputSequenceRequestKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceRequestKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceRequestKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceRequestKey()
{
	if (!Z_Registration_Info_UClass_UInputSequenceRequestKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceRequestKey.OuterSingleton, Z_Construct_UClass_UInputSequenceRequestKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceRequestKey.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceRequestKey>()
{
	return UInputSequenceRequestKey::StaticClass();
}
UInputSequenceRequestKey::UInputSequenceRequestKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceRequestKey);
UInputSequenceRequestKey::~UInputSequenceRequestKey() {}
// End Class UInputSequenceRequestKey

// Begin ScriptStruct FInputSequenceResetRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputSequenceResetRequest;
class UScriptStruct* FInputSequenceResetRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputSequenceResetRequest, (UObject*)Z_Construct_UPackage__Script_InputSequenceCore(), TEXT("InputSequenceResetRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<FInputSequenceResetRequest>()
{
	return FInputSequenceResetRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//------------------------------------------------------\n// FInputSequenceResetRequest\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "FInputSequenceResetRequest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Reset Request" },
		{ "Comment", "/* Requested by State */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested by State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestKey_MetaData[] = {
		{ "Category", "Reset Request" },
		{ "Comment", "/* Requested with Request Key */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested with Request Key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Event Request" },
		{ "Comment", "/* Requested with Payload Object */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested with Payload Object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetAll_MetaData[] = {
		{ "Category", "Reset Request" },
		{ "Comment", "/* If true, all active states will be reset */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "If true, all active states will be reset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadObject;
	static void NewProp_bResetAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputSequenceResetRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceResetRequest, State), Z_Construct_UClass_UInputSequenceState_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_RequestKey = { "RequestKey", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceResetRequest, RequestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestKey_MetaData), NewProp_RequestKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceResetRequest, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadObject_MetaData), NewProp_PayloadObject_MetaData) };
void Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_bResetAll_SetBit(void* Obj)
{
	((FInputSequenceResetRequest*)Obj)->bResetAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_bResetAll = { "bResetAll", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputSequenceResetRequest), &Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_bResetAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetAll_MetaData), NewProp_bResetAll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_RequestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_PayloadObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewProp_bResetAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
	nullptr,
	&NewStructOps,
	"InputSequenceResetRequest",
	Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::PropPointers),
	sizeof(FInputSequenceResetRequest),
	alignof(FInputSequenceResetRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceResetRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.InnerSingleton, Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceResetRequest.InnerSingleton;
}
// End ScriptStruct FInputSequenceResetRequest

// Begin ScriptStruct FInputSequenceEventRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputSequenceEventRequest;
class UScriptStruct* FInputSequenceEventRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputSequenceEventRequest, (UObject*)Z_Construct_UPackage__Script_InputSequenceCore(), TEXT("InputSequenceEventRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<FInputSequenceEventRequest>()
{
	return FInputSequenceEventRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//------------------------------------------------------\n// FInputSequenceEventRequest\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "FInputSequenceEventRequest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Event Request" },
		{ "Comment", "/* Requested by State */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested by State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestKey_MetaData[] = {
		{ "Category", "Event Request" },
		{ "Comment", "/* Requested with Request Key */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested with Request Key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Event Request" },
		{ "Comment", "/* Requested with Payload Object */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested with Payload Object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "Event Request" },
		{ "Comment", "/* Requested Input Sequence Event */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requested Input Sequence Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputSequenceEventRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceEventRequest, State), Z_Construct_UClass_UInputSequenceState_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_RequestKey = { "RequestKey", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceEventRequest, RequestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestKey_MetaData), NewProp_RequestKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceEventRequest, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadObject_MetaData), NewProp_PayloadObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceEventRequest, Event), Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_RequestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_PayloadObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
	nullptr,
	&NewStructOps,
	"InputSequenceEventRequest",
	Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::PropPointers),
	sizeof(FInputSequenceEventRequest),
	alignof(FInputSequenceEventRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceEventRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.InnerSingleton, Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceEventRequest.InnerSingleton;
}
// End ScriptStruct FInputSequenceEventRequest

// Begin Class UInputSequenceEvent_Base Function Execute
struct InputSequenceEvent_Base_eventExecute_Parms
{
	UInputSequenceState_Base* state;
	UInputSequenceRequestKey* requestKey;
	UObject* payloadObject;
	TArray<FInputSequenceResetRequest> resetRequests;
};
static const FName NAME_UInputSequenceEvent_Base_Execute = FName(TEXT("Execute"));
void UInputSequenceEvent_Base::Execute(UInputSequenceState_Base* state, UInputSequenceRequestKey* requestKey, UObject* payloadObject, TArray<FInputSequenceResetRequest> const& resetRequests)
{
	UFunction* Func = FindFunctionChecked(NAME_UInputSequenceEvent_Base_Execute);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputSequenceEvent_Base_eventExecute_Parms Parms;
		Parms.state=state;
		Parms.requestKey=requestKey;
		Parms.payloadObject=payloadObject;
		Parms.resetRequests=resetRequests;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Execute_Implementation(state, requestKey, payloadObject, resetRequests);
	}
}
struct Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Sequence Event" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resetRequests_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_state;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_requestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_payloadObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_resetRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_resetRequests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequenceEvent_Base_eventExecute_Parms, state), Z_Construct_UClass_UInputSequenceState_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_requestKey = { "requestKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequenceEvent_Base_eventExecute_Parms, requestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_payloadObject = { "payloadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequenceEvent_Base_eventExecute_Parms, payloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_resetRequests_Inner = { "resetRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputSequenceResetRequest, METADATA_PARAMS(0, nullptr) }; // 3005791724
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_resetRequests = { "resetRequests", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequenceEvent_Base_eventExecute_Parms, resetRequests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resetRequests_MetaData), NewProp_resetRequests_MetaData) }; // 3005791724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_requestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_payloadObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_resetRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::NewProp_resetRequests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSequenceEvent_Base, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::PropPointers), sizeof(InputSequenceEvent_Base_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputSequenceEvent_Base_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSequenceEvent_Base_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSequenceEvent_Base_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSequenceEvent_Base::execExecute)
{
	P_GET_OBJECT(UInputSequenceState_Base,Z_Param_state);
	P_GET_OBJECT(UInputSequenceRequestKey,Z_Param_requestKey);
	P_GET_OBJECT(UObject,Z_Param_payloadObject);
	P_GET_TARRAY_REF(FInputSequenceResetRequest,Z_Param_Out_resetRequests);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute_Implementation(Z_Param_state,Z_Param_requestKey,Z_Param_payloadObject,Z_Param_Out_resetRequests);
	P_NATIVE_END;
}
// End Class UInputSequenceEvent_Base Function Execute

// Begin Class UInputSequenceEvent_Base
void UInputSequenceEvent_Base::StaticRegisterNativesUInputSequenceEvent_Base()
{
	UClass* Class = UInputSequenceEvent_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Execute", &UInputSequenceEvent_Base::execExecute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceEvent_Base);
UClass* Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister()
{
	return UInputSequenceEvent_Base::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceEvent_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceEvent_Base\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceEvent_Base" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSequenceEvent_Base_Execute, "Execute" }, // 2677245163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceEvent_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputSequenceEvent_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceEvent_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceEvent_Base_Statics::ClassParams = {
	&UInputSequenceEvent_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceEvent_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceEvent_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceEvent_Base()
{
	if (!Z_Registration_Info_UClass_UInputSequenceEvent_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceEvent_Base.OuterSingleton, Z_Construct_UClass_UInputSequenceEvent_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceEvent_Base.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceEvent_Base>()
{
	return UInputSequenceEvent_Base::StaticClass();
}
UInputSequenceEvent_Base::UInputSequenceEvent_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceEvent_Base);
UInputSequenceEvent_Base::~UInputSequenceEvent_Base() {}
// End Class UInputSequenceEvent_Base

// Begin ScriptStruct FInputActionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionInfo;
class UScriptStruct* FInputActionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionInfo, (UObject*)Z_Construct_UPackage__Script_InputSequenceCore(), TEXT("InputActionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionInfo.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<FInputActionInfo>()
{
	return FInputActionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// FInputActionInfo\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "FInputActionInfo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassed_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireStrongMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequirePreciseMatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static void NewProp_bIsPassed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassed;
	static void NewProp_bRequireStrongMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireStrongMatch;
	static void NewProp_bRequirePreciseMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePreciseMatch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInfo, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
void Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bIsPassed_SetBit(void* Obj)
{
	((FInputActionInfo*)Obj)->bIsPassed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bIsPassed = { "bIsPassed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionInfo), &Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bIsPassed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPassed_MetaData), NewProp_bIsPassed_MetaData) };
void Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequireStrongMatch_SetBit(void* Obj)
{
	((FInputActionInfo*)Obj)->bRequireStrongMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequireStrongMatch = { "bRequireStrongMatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionInfo), &Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequireStrongMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireStrongMatch_MetaData), NewProp_bRequireStrongMatch_MetaData) };
void Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequirePreciseMatch_SetBit(void* Obj)
{
	((FInputActionInfo*)Obj)->bRequirePreciseMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequirePreciseMatch = { "bRequirePreciseMatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FInputActionInfo), &Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequirePreciseMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequirePreciseMatch_MetaData), NewProp_bRequirePreciseMatch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionInfo, WaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitTime_MetaData), NewProp_WaitTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bIsPassed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequireStrongMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_bRequirePreciseMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewProp_WaitTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
	nullptr,
	&NewStructOps,
	"InputActionInfo",
	Z_Construct_UScriptStruct_FInputActionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInfo_Statics::PropPointers),
	sizeof(FInputActionInfo),
	alignof(FInputActionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionInfo.InnerSingleton, Z_Construct_UScriptStruct_FInputActionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionInfo.InnerSingleton;
}
// End ScriptStruct FInputActionInfo

// Begin Class UInputSequenceState_Base
void UInputSequenceState_Base::StaticRegisterNativesUInputSequenceState_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceState_Base);
UClass* Z_Construct_UClass_UInputSequenceState_Base_NoRegister()
{
	return UInputSequenceState_Base::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceState_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceState_Base\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceState_Base" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceState_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputSequenceState_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceState_Base_Statics::ClassParams = {
	&UInputSequenceState_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceState_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceState_Base()
{
	if (!Z_Registration_Info_UClass_UInputSequenceState_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceState_Base.OuterSingleton, Z_Construct_UClass_UInputSequenceState_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceState_Base.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceState_Base>()
{
	return UInputSequenceState_Base::StaticClass();
}
UInputSequenceState_Base::UInputSequenceState_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceState_Base);
UInputSequenceState_Base::~UInputSequenceState_Base() {}
// End Class UInputSequenceState_Base

// Begin Class UInputSequenceState_Hub
void UInputSequenceState_Hub::StaticRegisterNativesUInputSequenceState_Hub()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceState_Hub);
UClass* Z_Construct_UClass_UInputSequenceState_Hub_NoRegister()
{
	return UInputSequenceState_Hub::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceState_Hub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceState_Hub\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceState_Hub" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceState_Hub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputSequenceState_Hub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputSequenceState_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Hub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceState_Hub_Statics::ClassParams = {
	&UInputSequenceState_Hub::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Hub_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceState_Hub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceState_Hub()
{
	if (!Z_Registration_Info_UClass_UInputSequenceState_Hub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceState_Hub.OuterSingleton, Z_Construct_UClass_UInputSequenceState_Hub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceState_Hub.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceState_Hub>()
{
	return UInputSequenceState_Hub::StaticClass();
}
UInputSequenceState_Hub::UInputSequenceState_Hub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceState_Hub);
UInputSequenceState_Hub::~UInputSequenceState_Hub() {}
// End Class UInputSequenceState_Hub

// Begin Class UInputSequenceState_Reset
void UInputSequenceState_Reset::StaticRegisterNativesUInputSequenceState_Reset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceState_Reset);
UClass* Z_Construct_UClass_UInputSequenceState_Reset_NoRegister()
{
	return UInputSequenceState_Reset::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceState_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceState_Reset\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceState_Reset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestKey_MetaData[] = {
		{ "Category", "Context:" },
		{ "Comment", "/* Request Key (used to identify context in Event and Reset Requests) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Request Key (used to identify context in Event and Reset Requests)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Context:" },
		{ "Comment", "/* Payload object (used to customize Event and Reset Requests) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Payload object (used to customize Event and Reset Requests)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceState_Reset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Reset_Statics::NewProp_RequestKey = { "RequestKey", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Reset, RequestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestKey_MetaData), NewProp_RequestKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Reset_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Reset, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadObject_MetaData), NewProp_PayloadObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSequenceState_Reset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Reset_Statics::NewProp_RequestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Reset_Statics::NewProp_PayloadObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Reset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputSequenceState_Reset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputSequenceState_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Reset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceState_Reset_Statics::ClassParams = {
	&UInputSequenceState_Reset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputSequenceState_Reset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Reset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Reset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceState_Reset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceState_Reset()
{
	if (!Z_Registration_Info_UClass_UInputSequenceState_Reset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceState_Reset.OuterSingleton, Z_Construct_UClass_UInputSequenceState_Reset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceState_Reset.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceState_Reset>()
{
	return UInputSequenceState_Reset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceState_Reset);
UInputSequenceState_Reset::~UInputSequenceState_Reset() {}
// End Class UInputSequenceState_Reset

// Begin Class UInputSequenceState_Input
void UInputSequenceState_Input::StaticRegisterNativesUInputSequenceState_Input()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequenceState_Input);
UClass* Z_Construct_UClass_UInputSequenceState_Input_NoRegister()
{
	return UInputSequenceState_Input::StaticClass();
}
struct Z_Construct_UClass_UInputSequenceState_Input_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UInputSequenceState_Input\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequenceState_Input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[] = {
		{ "Category", "Events:" },
		{ "Comment", "/* Collection of Input Sequence Events to execute when state is entered */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Collection of Input Sequence Events to execute when state is entered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassEvents_MetaData[] = {
		{ "Category", "Events:" },
		{ "Comment", "/* Collection of Input Sequence Events to execute when state is passed */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Collection of Input Sequence Events to execute when state is passed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetEvents_MetaData[] = {
		{ "Category", "Events:" },
		{ "Comment", "/* Collection of Input Sequence Events to execute when state is reset */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Collection of Input Sequence Events to execute when state is reset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestKey_MetaData[] = {
		{ "Category", "Context:" },
		{ "Comment", "/* Request Key (used to identify context in Event and Reset Requests) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Request Key (used to identify context in Event and Reset Requests)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadObject_MetaData[] = {
		{ "Category", "Context:" },
		{ "Comment", "/* Payload object (used to customize Event and Reset Requests) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Payload object (used to customize Event and Reset Requests)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireStrongMatch_MetaData[] = {
		{ "Category", "Input:" },
		{ "Comment", "/* If true, state will be reset by any Input Action that is not listed */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "If true, state will be reset by any Input Action that is not listed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResetTime_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "/* Time interval after which this state will be reset (overrides global value) */" },
		{ "EditCondition", "bOverrideResetTime" },
		{ "Max", "10" },
		{ "Min", "0.010000" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Time interval after which this state will be reset (overrides global value)" },
		{ "UIMax", "10" },
		{ "UIMin", "0.010000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionInfos_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionInfos_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PassEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResetEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PayloadObject;
	static void NewProp_bRequireStrongMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireStrongMatch;
	static void NewProp_bOverrideResetTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResetTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequenceState_Input>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos_ValueProp = { "InputActionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputActionInfo, METADATA_PARAMS(0, nullptr) }; // 778948114
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos_Key_KeyProp = { "InputActionInfos_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos = { "InputActionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, InputActionInfos), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionInfos_MetaData), NewProp_InputActionInfos_MetaData) }; // 778948114
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterEvents_MetaData), NewProp_EnterEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PassEvents_Inner = { "PassEvents", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PassEvents = { "PassEvents", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, PassEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassEvents_MetaData), NewProp_PassEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetEvents_Inner = { "ResetEvents", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputSequenceEvent_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetEvents = { "ResetEvents", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, ResetEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetEvents_MetaData), NewProp_ResetEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_RequestKey = { "RequestKey", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, RequestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestKey_MetaData), NewProp_RequestKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PayloadObject = { "PayloadObject", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, PayloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadObject_MetaData), NewProp_PayloadObject_MetaData) };
void Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bRequireStrongMatch_SetBit(void* Obj)
{
	((UInputSequenceState_Input*)Obj)->bRequireStrongMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bRequireStrongMatch = { "bRequireStrongMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSequenceState_Input), &Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bRequireStrongMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireStrongMatch_MetaData), NewProp_bRequireStrongMatch_MetaData) };
void Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bOverrideResetTime_SetBit(void* Obj)
{
	((UInputSequenceState_Input*)Obj)->bOverrideResetTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bOverrideResetTime = { "bOverrideResetTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSequenceState_Input), &Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bOverrideResetTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResetTime_MetaData), NewProp_bOverrideResetTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequenceState_Input, ResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTime_MetaData), NewProp_ResetTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSequenceState_Input_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_InputActionInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_EnterEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_EnterEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PassEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PassEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_RequestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_PayloadObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bRequireStrongMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_bOverrideResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequenceState_Input_Statics::NewProp_ResetTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Input_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputSequenceState_Input_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputSequenceState_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Input_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequenceState_Input_Statics::ClassParams = {
	&UInputSequenceState_Input::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputSequenceState_Input_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Input_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequenceState_Input_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequenceState_Input_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequenceState_Input()
{
	if (!Z_Registration_Info_UClass_UInputSequenceState_Input.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequenceState_Input.OuterSingleton, Z_Construct_UClass_UInputSequenceState_Input_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequenceState_Input.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequenceState_Input>()
{
	return UInputSequenceState_Input::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequenceState_Input);
UInputSequenceState_Input::~UInputSequenceState_Input() {}
// End Class UInputSequenceState_Input

// Begin ScriptStruct FInputSequenceStateCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputSequenceStateCollection;
class UScriptStruct* FInputSequenceStateCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputSequenceStateCollection, (UObject*)Z_Construct_UPackage__Script_InputSequenceCore(), TEXT("InputSequenceStateCollection"));
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<FInputSequenceStateCollection>()
{
	return FInputSequenceStateCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// FInputSequenceStateCollection\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "FInputSequenceStateCollection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_StateIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputSequenceStateCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::NewProp_StateIds_ElementProp = { "StateIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::NewProp_StateIds = { "StateIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputSequenceStateCollection, StateIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateIds_MetaData), NewProp_StateIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::NewProp_StateIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::NewProp_StateIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
	nullptr,
	&NewStructOps,
	"InputSequenceStateCollection",
	Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::PropPointers),
	sizeof(FInputSequenceStateCollection),
	alignof(FInputSequenceStateCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputSequenceStateCollection()
{
	if (!Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.InnerSingleton, Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputSequenceStateCollection.InnerSingleton;
}
// End ScriptStruct FInputSequenceStateCollection

// Begin Class UInputSequence Function OnInput
struct Z_Construct_UFunction_UInputSequence_OnInput_Statics
{
	struct InputSequence_eventOnInput_Parms
	{
		float deltaTime;
		bool bGamePaused;
		TMap<UInputAction*,ETriggerEvent> inputActionEvents;
		TArray<FInputSequenceEventRequest> outEventRequests;
		TArray<FInputSequenceResetRequest> outResetRequests;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* Feed input to Input Sequence and receives the collections of Event Requests and Reset Requests as result\n\x09 * @param deltaTime - the delta time of this tick, in seconds\n\x09 * @param bGamePaused - whether the game is currently paused\n\x09 * @param inputActionEvents - the collection of all Trigger Events happened during this tick\n\x09 * @param outEventRequests - the collection of Event Requests, that will be filled\n\x09 * @param outResetRequests - the collection of Reset Requests, that will be filled\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Feed input to Input Sequence and receives the collections of Event Requests and Reset Requests as result\n       * @param deltaTime - the delta time of this tick, in seconds\n       * @param bGamePaused - whether the game is currently paused\n       * @param inputActionEvents - the collection of all Trigger Events happened during this tick\n       * @param outEventRequests - the collection of Event Requests, that will be filled\n       * @param outResetRequests - the collection of Reset Requests, that will be filled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamePaused_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inputActionEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
	static void NewProp_bGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamePaused;
	static const UECodeGen_Private::FBytePropertyParams NewProp_inputActionEvents_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_inputActionEvents_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inputActionEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_inputActionEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outEventRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outEventRequests;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outResetRequests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outResetRequests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventOnInput_Parms, deltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deltaTime_MetaData), NewProp_deltaTime_MetaData) };
void Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_bGamePaused_SetBit(void* Obj)
{
	((InputSequence_eventOnInput_Parms*)Obj)->bGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_bGamePaused = { "bGamePaused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputSequence_eventOnInput_Parms), &Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_bGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamePaused_MetaData), NewProp_bGamePaused_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_ValueProp = { "inputActionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_Key_KeyProp = { "inputActionEvents_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents = { "inputActionEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventOnInput_Parms, inputActionEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inputActionEvents_MetaData), NewProp_inputActionEvents_MetaData) }; // 3771639830
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outEventRequests_Inner = { "outEventRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputSequenceEventRequest, METADATA_PARAMS(0, nullptr) }; // 1292805502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outEventRequests = { "outEventRequests", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventOnInput_Parms, outEventRequests), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1292805502
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outResetRequests_Inner = { "outResetRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputSequenceResetRequest, METADATA_PARAMS(0, nullptr) }; // 3005791724
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outResetRequests = { "outResetRequests", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventOnInput_Parms, outResetRequests), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3005791724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSequence_OnInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_deltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_bGamePaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_inputActionEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outEventRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outEventRequests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outResetRequests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_OnInput_Statics::NewProp_outResetRequests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_OnInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSequence_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSequence, nullptr, "OnInput", nullptr, nullptr, Z_Construct_UFunction_UInputSequence_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_OnInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSequence_OnInput_Statics::InputSequence_eventOnInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_OnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSequence_OnInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSequence_OnInput_Statics::InputSequence_eventOnInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSequence_OnInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSequence_OnInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSequence::execOnInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
	P_GET_UBOOL(Z_Param_bGamePaused);
	P_GET_TMAP_REF(UInputAction*,ETriggerEvent,Z_Param_Out_inputActionEvents);
	P_GET_TARRAY_REF(FInputSequenceEventRequest,Z_Param_Out_outEventRequests);
	P_GET_TARRAY_REF(FInputSequenceResetRequest,Z_Param_Out_outResetRequests);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInput(Z_Param_deltaTime,Z_Param_bGamePaused,Z_Param_Out_inputActionEvents,Z_Param_Out_outEventRequests,Z_Param_Out_outResetRequests);
	P_NATIVE_END;
}
// End Class UInputSequence Function OnInput

// Begin Class UInputSequence Function RequestReset
struct Z_Construct_UFunction_UInputSequence_RequestReset_Statics
{
	struct InputSequence_eventRequestReset_Parms
	{
		UInputSequenceRequestKey* requestKey;
		UObject* payloadObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* Requests external reset\n\x09 * @param requestKey - Request key to associate with this Reset Request\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Requests external reset\n       * @param requestKey - Request key to associate with this Reset Request" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_requestKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_payloadObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequence_RequestReset_Statics::NewProp_requestKey = { "requestKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventRequestReset_Parms, requestKey), Z_Construct_UClass_UInputSequenceRequestKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequence_RequestReset_Statics::NewProp_payloadObject = { "payloadObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventRequestReset_Parms, payloadObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSequence_RequestReset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_RequestReset_Statics::NewProp_requestKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_RequestReset_Statics::NewProp_payloadObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_RequestReset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSequence_RequestReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSequence, nullptr, "RequestReset", nullptr, nullptr, Z_Construct_UFunction_UInputSequence_RequestReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_RequestReset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSequence_RequestReset_Statics::InputSequence_eventRequestReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_RequestReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSequence_RequestReset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSequence_RequestReset_Statics::InputSequence_eventRequestReset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSequence_RequestReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSequence_RequestReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSequence::execRequestReset)
{
	P_GET_OBJECT(UInputSequenceRequestKey,Z_Param_requestKey);
	P_GET_OBJECT(UObject,Z_Param_payloadObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestReset(Z_Param_requestKey,Z_Param_payloadObject);
	P_NATIVE_END;
}
// End Class UInputSequence Function RequestReset

// Begin Class UInputSequence Function SetWorldContext
struct Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics
{
	struct InputSequence_eventSetWorldContext_Parms
	{
		UObject* worldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* Sets World\n\x09 * @param worldContextObject - object to get World context from\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Sets World\n       * @param worldContextObject - object to get World context from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSequence_eventSetWorldContext_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::NewProp_worldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSequence, nullptr, "SetWorldContext", nullptr, nullptr, Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::InputSequence_eventSetWorldContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::InputSequence_eventSetWorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSequence_SetWorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSequence_SetWorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputSequence::execSetWorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_worldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldContext(Z_Param_worldContextObject);
	P_NATIVE_END;
}
// End Class UInputSequence Function SetWorldContext

// Begin Class UInputSequence
void UInputSequence::StaticRegisterNativesUInputSequence()
{
	UClass* Class = UInputSequence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInput", &UInputSequence::execOnInput },
		{ "RequestReset", &UInputSequence::execRequestReset },
		{ "SetWorldContext", &UInputSequence::execSetWorldContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSequence);
UClass* Z_Construct_UClass_UInputSequence_NoRegister()
{
	return UInputSequence::StaticClass();
}
struct Z_Construct_UClass_UInputSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//------------------------------------------------------\n// UInputSequence\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequence.h" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "UInputSequence" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryStateIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootStateIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStateIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* Time interval after which any state will be reset (global, can be overriden on any state) */" },
		{ "Max", "10" },
		{ "Min", "0.010000" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "Time interval after which any state will be reset (global, can be overriden on any state)" },
		{ "UIMax", "10" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStepWhenGamePaused_MetaData[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* If true, active states will continue to step even if Game is paused (see OnInput method) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "If true, active states will continue to step even if Game is paused (see OnInput method)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickWhenGamePaused_MetaData[] = {
		{ "Category", "Input Sequence" },
		{ "Comment", "/* If true, active states will continue to tick even if Game is paused (see OnInput method) */" },
		{ "ModuleRelativePath", "Public/InputSequence.h" },
		{ "ToolTip", "If true, active states will continue to tick even if Game is paused (see OnInput method)" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_States_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_States_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_States;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryStateIds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EntryStateIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootStateIds_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootStateIds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RootStateIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextStateIds_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextStateIds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NextStateIds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetTime;
	static void NewProp_bStepWhenGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStepWhenGamePaused;
	static void NewProp_bTickWhenGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWhenGamePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSequence_OnInput, "OnInput" }, // 2937995508
		{ &Z_Construct_UFunction_UInputSequence_RequestReset, "RequestReset" }, // 3286523406
		{ &Z_Construct_UFunction_UInputSequence_SetWorldContext, "SetWorldContext" }, // 1901598463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdGraph_MetaData), NewProp_EdGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputSequenceState_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, States), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_States_MetaData), NewProp_States_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_EntryStateIds_ElementProp = { "EntryStateIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_EntryStateIds = { "EntryStateIds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, EntryStateIds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryStateIds_MetaData), NewProp_EntryStateIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds_ValueProp = { "RootStateIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputSequenceStateCollection, METADATA_PARAMS(0, nullptr) }; // 1782533854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds_Key_KeyProp = { "RootStateIds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds = { "RootStateIds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, RootStateIds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootStateIds_MetaData), NewProp_RootStateIds_MetaData) }; // 1782533854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds_ValueProp = { "NextStateIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputSequenceStateCollection, METADATA_PARAMS(0, nullptr) }; // 1782533854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds_Key_KeyProp = { "NextStateIds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds = { "NextStateIds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, NextStateIds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStateIds_MetaData), NewProp_NextStateIds_MetaData) }; // 1782533854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputSequence, ResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetTime_MetaData), NewProp_ResetTime_MetaData) };
void Z_Construct_UClass_UInputSequence_Statics::NewProp_bStepWhenGamePaused_SetBit(void* Obj)
{
	((UInputSequence*)Obj)->bStepWhenGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_bStepWhenGamePaused = { "bStepWhenGamePaused", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSequence), &Z_Construct_UClass_UInputSequence_Statics::NewProp_bStepWhenGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStepWhenGamePaused_MetaData), NewProp_bStepWhenGamePaused_MetaData) };
void Z_Construct_UClass_UInputSequence_Statics::NewProp_bTickWhenGamePaused_SetBit(void* Obj)
{
	((UInputSequence*)Obj)->bTickWhenGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSequence_Statics::NewProp_bTickWhenGamePaused = { "bTickWhenGamePaused", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInputSequence), &Z_Construct_UClass_UInputSequence_Statics::NewProp_bTickWhenGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickWhenGamePaused_MetaData), NewProp_bTickWhenGamePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_States_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_States_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_States,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_EntryStateIds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_EntryStateIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_RootStateIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_NextStateIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_ResetTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_bStepWhenGamePaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSequence_Statics::NewProp_bTickWhenGamePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSequence_Statics::ClassParams = {
	&UInputSequence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequence_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSequence()
{
	if (!Z_Registration_Info_UClass_UInputSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSequence.OuterSingleton, Z_Construct_UClass_UInputSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSequence.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UInputSequence>()
{
	return UInputSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSequence);
UInputSequence::~UInputSequence() {}
// End Class UInputSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputSequenceResetRequest::StaticStruct, Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics::NewStructOps, TEXT("InputSequenceResetRequest"), &Z_Registration_Info_UScriptStruct_InputSequenceResetRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputSequenceResetRequest), 3005791724U) },
		{ FInputSequenceEventRequest::StaticStruct, Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics::NewStructOps, TEXT("InputSequenceEventRequest"), &Z_Registration_Info_UScriptStruct_InputSequenceEventRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputSequenceEventRequest), 1292805502U) },
		{ FInputActionInfo::StaticStruct, Z_Construct_UScriptStruct_FInputActionInfo_Statics::NewStructOps, TEXT("InputActionInfo"), &Z_Registration_Info_UScriptStruct_InputActionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionInfo), 778948114U) },
		{ FInputSequenceStateCollection::StaticStruct, Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics::NewStructOps, TEXT("InputSequenceStateCollection"), &Z_Registration_Info_UScriptStruct_InputSequenceStateCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputSequenceStateCollection), 1782533854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputSequenceRequestKey, UInputSequenceRequestKey::StaticClass, TEXT("UInputSequenceRequestKey"), &Z_Registration_Info_UClass_UInputSequenceRequestKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceRequestKey), 2692473208U) },
		{ Z_Construct_UClass_UInputSequenceEvent_Base, UInputSequenceEvent_Base::StaticClass, TEXT("UInputSequenceEvent_Base"), &Z_Registration_Info_UClass_UInputSequenceEvent_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceEvent_Base), 3260080909U) },
		{ Z_Construct_UClass_UInputSequenceState_Base, UInputSequenceState_Base::StaticClass, TEXT("UInputSequenceState_Base"), &Z_Registration_Info_UClass_UInputSequenceState_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceState_Base), 1023420898U) },
		{ Z_Construct_UClass_UInputSequenceState_Hub, UInputSequenceState_Hub::StaticClass, TEXT("UInputSequenceState_Hub"), &Z_Registration_Info_UClass_UInputSequenceState_Hub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceState_Hub), 1875908371U) },
		{ Z_Construct_UClass_UInputSequenceState_Reset, UInputSequenceState_Reset::StaticClass, TEXT("UInputSequenceState_Reset"), &Z_Registration_Info_UClass_UInputSequenceState_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceState_Reset), 371715272U) },
		{ Z_Construct_UClass_UInputSequenceState_Input, UInputSequenceState_Input::StaticClass, TEXT("UInputSequenceState_Input"), &Z_Registration_Info_UClass_UInputSequenceState_Input, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequenceState_Input), 918568197U) },
		{ Z_Construct_UClass_UInputSequence, UInputSequence::StaticClass, TEXT("UInputSequence"), &Z_Registration_Info_UClass_UInputSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSequence), 1325215747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_270714126(TEXT("/Script/InputSequenceCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
