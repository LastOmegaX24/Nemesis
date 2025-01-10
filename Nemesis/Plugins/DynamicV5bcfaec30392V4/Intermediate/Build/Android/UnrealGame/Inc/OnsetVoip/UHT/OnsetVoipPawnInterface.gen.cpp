// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipPawnInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipPawnInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipPawnInterface();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipPawnInterface_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Interface UOnsetVoipPawnInterface Function OnNewPlayerState
struct OnsetVoipPawnInterface_eventOnNewPlayerState_Parms
{
	APlayerState* PlayerState;
	UOnsetVoipTalker* OnsetVoipTalker;
};
void IOnsetVoipPawnInterface::OnNewPlayerState(APlayerState* PlayerState, UOnsetVoipTalker* OnsetVoipTalker)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNewPlayerState instead.");
}
static FName NAME_UOnsetVoipPawnInterface_OnNewPlayerState = FName(TEXT("OnNewPlayerState"));
void IOnsetVoipPawnInterface::Execute_OnNewPlayerState(UObject* O, APlayerState* PlayerState, UOnsetVoipTalker* OnsetVoipTalker)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipPawnInterface::StaticClass()));
	OnsetVoipPawnInterface_eventOnNewPlayerState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipPawnInterface_OnNewPlayerState);
	if (Func)
	{
		Parms.PlayerState=PlayerState;
		Parms.OnsetVoipTalker=OnsetVoipTalker;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Called on a pawn/character when another player state is assigned and therefore the voip talker changes. Basically a new possession.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipPawnInterface.h" },
		{ "ToolTip", "Called on a pawn/character when another player state is assigned and therefore the voip talker changes. Basically a new possession." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnsetVoipTalker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipPawnInterface_eventOnNewPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::NewProp_OnsetVoipTalker = { "OnsetVoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipPawnInterface_eventOnNewPlayerState_Parms, OnsetVoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::NewProp_OnsetVoipTalker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipPawnInterface, nullptr, "OnNewPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::PropPointers), sizeof(OnsetVoipPawnInterface_eventOnNewPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipPawnInterface_eventOnNewPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipPawnInterface Function OnNewPlayerState

// Begin Interface UOnsetVoipPawnInterface Function OnTalkingStateChange
struct OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms
{
	bool bIsTalking;
	bool bIs2D;
};
void IOnsetVoipPawnInterface::OnTalkingStateChange(bool bIsTalking, bool bIs2D)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTalkingStateChange instead.");
}
static FName NAME_UOnsetVoipPawnInterface_OnTalkingStateChange = FName(TEXT("OnTalkingStateChange"));
void IOnsetVoipPawnInterface::Execute_OnTalkingStateChange(UObject* O, bool bIsTalking, bool bIs2D)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipPawnInterface::StaticClass()));
	OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipPawnInterface_OnTalkingStateChange);
	if (Func)
	{
		Parms.bIsTalking=bIsTalking;
		Parms.bIs2D=bIs2D;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Called on a pawn/character if the owning voip stats or stops talking.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipPawnInterface.h" },
		{ "ToolTip", "Called on a pawn/character if the owning voip stats or stops talking." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
	static void NewProp_bIs2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIsTalking_SetBit(void* Obj)
{
	((OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms*)Obj)->bIsTalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms), &Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIs2D_SetBit(void* Obj)
{
	((OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms*)Obj)->bIs2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIs2D = { "bIs2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms), &Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIs2D_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIsTalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::NewProp_bIs2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipPawnInterface, nullptr, "OnTalkingStateChange", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::PropPointers), sizeof(OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipPawnInterface_eventOnTalkingStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipPawnInterface Function OnTalkingStateChange

// Begin Interface UOnsetVoipPawnInterface Function OnVoipAudioComponentCreated
struct OnsetVoipPawnInterface_eventOnVoipAudioComponentCreated_Parms
{
	UOnsetVoipAudioComponent* VoipAudioComponent;
};
void IOnsetVoipPawnInterface::OnVoipAudioComponentCreated(UOnsetVoipAudioComponent* VoipAudioComponent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnVoipAudioComponentCreated instead.");
}
static FName NAME_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated = FName(TEXT("OnVoipAudioComponentCreated"));
void IOnsetVoipPawnInterface::Execute_OnVoipAudioComponentCreated(UObject* O, UOnsetVoipAudioComponent* VoipAudioComponent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipPawnInterface::StaticClass()));
	OnsetVoipPawnInterface_eventOnVoipAudioComponentCreated_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated);
	if (Func)
	{
		Parms.VoipAudioComponent=VoipAudioComponent;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Called on a pawn/character when an audio component was dynamically created for 2D/3D voice. Can be used to customize settings like SourceEffectChain or AttenuationSettings.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipPawnInterface.h" },
		{ "ToolTip", "Called on a pawn/character when an audio component was dynamically created for 2D/3D voice. Can be used to customize settings like SourceEffectChain or AttenuationSettings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoipAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::NewProp_VoipAudioComponent = { "VoipAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipPawnInterface_eventOnVoipAudioComponentCreated_Parms, VoipAudioComponent), Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoipAudioComponent_MetaData), NewProp_VoipAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::NewProp_VoipAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipPawnInterface, nullptr, "OnVoipAudioComponentCreated", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::PropPointers), sizeof(OnsetVoipPawnInterface_eventOnVoipAudioComponentCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipPawnInterface_eventOnVoipAudioComponentCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipPawnInterface Function OnVoipAudioComponentCreated

// Begin Interface UOnsetVoipPawnInterface
void UOnsetVoipPawnInterface::StaticRegisterNativesUOnsetVoipPawnInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipPawnInterface);
UClass* Z_Construct_UClass_UOnsetVoipPawnInterface_NoRegister()
{
	return UOnsetVoipPawnInterface::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipPawnInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipPawnInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipPawnInterface_OnNewPlayerState, "OnNewPlayerState" }, // 3077961375
		{ &Z_Construct_UFunction_UOnsetVoipPawnInterface_OnTalkingStateChange, "OnTalkingStateChange" }, // 2615848712
		{ &Z_Construct_UFunction_UOnsetVoipPawnInterface_OnVoipAudioComponentCreated, "OnVoipAudioComponentCreated" }, // 2578534581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnsetVoipPawnInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::ClassParams = {
	&UOnsetVoipPawnInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipPawnInterface()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipPawnInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipPawnInterface.OuterSingleton, Z_Construct_UClass_UOnsetVoipPawnInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipPawnInterface.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipPawnInterface>()
{
	return UOnsetVoipPawnInterface::StaticClass();
}
UOnsetVoipPawnInterface::UOnsetVoipPawnInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipPawnInterface);
UOnsetVoipPawnInterface::~UOnsetVoipPawnInterface() {}
// End Interface UOnsetVoipPawnInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipPawnInterface, UOnsetVoipPawnInterface::StaticClass, TEXT("UOnsetVoipPawnInterface"), &Z_Registration_Info_UClass_UOnsetVoipPawnInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipPawnInterface), 417258403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_2174921333(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
