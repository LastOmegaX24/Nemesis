// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSequenceCore/Public/PlayerController_EIS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_EIS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_APlayerController_EIS();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_APlayerController_EIS_NoRegister();
UPackage* Z_Construct_UPackage__Script_InputSequenceCore();
// End Cross Module References

// Begin Class APlayerController_EIS Function OnPostProcessInput
struct PlayerController_EIS_eventOnPostProcessInput_Parms
{
	float DeltaTime;
	bool bGamePaused;
};
static const FName NAME_APlayerController_EIS_OnPostProcessInput = FName(TEXT("OnPostProcessInput"));
void APlayerController_EIS::OnPostProcessInput(const float DeltaTime, bool bGamePaused)
{
	PlayerController_EIS_eventOnPostProcessInput_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.bGamePaused=bGamePaused ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_APlayerController_EIS_OnPostProcessInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Controller EIS" },
		{ "ModuleRelativePath", "Public/PlayerController_EIS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamePaused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_EIS_eventOnPostProcessInput_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
void Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_bGamePaused_SetBit(void* Obj)
{
	((PlayerController_EIS_eventOnPostProcessInput_Parms*)Obj)->bGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_bGamePaused = { "bGamePaused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_EIS_eventOnPostProcessInput_Parms), &Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_bGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamePaused_MetaData), NewProp_bGamePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::NewProp_bGamePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_EIS, nullptr, "OnPostProcessInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::PropPointers), sizeof(PlayerController_EIS_eventOnPostProcessInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_EIS_eventOnPostProcessInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerController_EIS Function OnPostProcessInput

// Begin Class APlayerController_EIS Function OnPreProcessInput
struct PlayerController_EIS_eventOnPreProcessInput_Parms
{
	float DeltaTime;
	bool bGamePaused;
};
static const FName NAME_APlayerController_EIS_OnPreProcessInput = FName(TEXT("OnPreProcessInput"));
void APlayerController_EIS::OnPreProcessInput(const float DeltaTime, bool bGamePaused)
{
	PlayerController_EIS_eventOnPreProcessInput_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.bGamePaused=bGamePaused ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_APlayerController_EIS_OnPreProcessInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Controller EIS" },
		{ "ModuleRelativePath", "Public/PlayerController_EIS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamePaused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_EIS_eventOnPreProcessInput_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
void Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_bGamePaused_SetBit(void* Obj)
{
	((PlayerController_EIS_eventOnPreProcessInput_Parms*)Obj)->bGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_bGamePaused = { "bGamePaused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_EIS_eventOnPreProcessInput_Parms), &Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_bGamePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamePaused_MetaData), NewProp_bGamePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::NewProp_bGamePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_EIS, nullptr, "OnPreProcessInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::PropPointers), sizeof(PlayerController_EIS_eventOnPreProcessInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_EIS_eventOnPreProcessInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APlayerController_EIS Function OnPreProcessInput

// Begin Class APlayerController_EIS Function RegisterInputActionEvent
struct Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics
{
	struct PlayerController_EIS_eventRegisterInputActionEvent_Parms
	{
		UInputAction* inputAction;
		ETriggerEvent triggerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Controller EIS" },
		{ "ModuleRelativePath", "Public/PlayerController_EIS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inputAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_triggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_triggerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_inputAction = { "inputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_EIS_eventRegisterInputActionEvent_Parms, inputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_triggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_triggerEvent = { "triggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_EIS_eventRegisterInputActionEvent_Parms, triggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_inputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_triggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::NewProp_triggerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController_EIS, nullptr, "RegisterInputActionEvent", nullptr, nullptr, Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PlayerController_EIS_eventRegisterInputActionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::PlayerController_EIS_eventRegisterInputActionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController_EIS::execRegisterInputActionEvent)
{
	P_GET_OBJECT(UInputAction,Z_Param_inputAction);
	P_GET_ENUM(ETriggerEvent,Z_Param_triggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterInputActionEvent(Z_Param_inputAction,ETriggerEvent(Z_Param_triggerEvent));
	P_NATIVE_END;
}
// End Class APlayerController_EIS Function RegisterInputActionEvent

// Begin Class APlayerController_EIS
void APlayerController_EIS::StaticRegisterNativesAPlayerController_EIS()
{
	UClass* Class = APlayerController_EIS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterInputActionEvent", &APlayerController_EIS::execRegisterInputActionEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerController_EIS);
UClass* Z_Construct_UClass_APlayerController_EIS_NoRegister()
{
	return APlayerController_EIS::StaticClass();
}
struct Z_Construct_UClass_APlayerController_EIS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController_EIS.h" },
		{ "ModuleRelativePath", "Public/PlayerController_EIS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionEvents_MetaData[] = {
		{ "Category", "Player Controller EIS" },
		{ "ModuleRelativePath", "Public/PlayerController_EIS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputActionEvents_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputActionEvents_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionEvents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerController_EIS_OnPostProcessInput, "OnPostProcessInput" }, // 2671807306
		{ &Z_Construct_UFunction_APlayerController_EIS_OnPreProcessInput, "OnPreProcessInput" }, // 3171170691
		{ &Z_Construct_UFunction_APlayerController_EIS_RegisterInputActionEvent, "RegisterInputActionEvent" }, // 2524911534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_EIS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_ValueProp = { "InputActionEvents", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_Key_KeyProp = { "InputActionEvents_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents = { "InputActionEvents", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController_EIS, InputActionEvents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionEvents_MetaData), NewProp_InputActionEvents_MetaData) }; // 3771639830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_EIS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_EIS_Statics::NewProp_InputActionEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_EIS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerController_EIS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_EIS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_EIS_Statics::ClassParams = {
	&APlayerController_EIS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerController_EIS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_EIS_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_EIS_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController_EIS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerController_EIS()
{
	if (!Z_Registration_Info_UClass_APlayerController_EIS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController_EIS.OuterSingleton, Z_Construct_UClass_APlayerController_EIS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerController_EIS.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<APlayerController_EIS>()
{
	return APlayerController_EIS::StaticClass();
}
APlayerController_EIS::APlayerController_EIS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_EIS);
APlayerController_EIS::~APlayerController_EIS() {}
// End Class APlayerController_EIS

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController_EIS, APlayerController_EIS::StaticClass, TEXT("APlayerController_EIS"), &Z_Registration_Info_UClass_APlayerController_EIS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController_EIS), 2936975212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_2070856468(TEXT("/Script/InputSequenceCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
