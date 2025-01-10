// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipNameWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipNameWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipNameWidgetInterface();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipNameWidgetInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Interface UOnsetVoipNameWidgetInterface Function SetNameplatePlayerName
struct OnsetVoipNameWidgetInterface_eventSetNameplatePlayerName_Parms
{
	FString PlayerName;
};
void IOnsetVoipNameWidgetInterface::SetNameplatePlayerName(const FString& PlayerName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNameplatePlayerName instead.");
}
static FName NAME_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName = FName(TEXT("SetNameplatePlayerName"));
void IOnsetVoipNameWidgetInterface::Execute_SetNameplatePlayerName(UObject* O, const FString& PlayerName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipNameWidgetInterface::StaticClass()));
	OnsetVoipNameWidgetInterface_eventSetNameplatePlayerName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName);
	if (Func)
	{
		Parms.PlayerName=PlayerName;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "ModuleRelativePath", "Public/OnsetVoipNameWidgetInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipNameWidgetInterface_eventSetNameplatePlayerName_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipNameWidgetInterface, nullptr, "SetNameplatePlayerName", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::PropPointers), sizeof(OnsetVoipNameWidgetInterface_eventSetNameplatePlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipNameWidgetInterface_eventSetNameplatePlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipNameWidgetInterface Function SetNameplatePlayerName

// Begin Interface UOnsetVoipNameWidgetInterface Function SetNameplateSpeaking
struct OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms
{
	bool bIsSpeaking;
};
void IOnsetVoipNameWidgetInterface::SetNameplateSpeaking(bool bIsSpeaking)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNameplateSpeaking instead.");
}
static FName NAME_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking = FName(TEXT("SetNameplateSpeaking"));
void IOnsetVoipNameWidgetInterface::Execute_SetNameplateSpeaking(UObject* O, bool bIsSpeaking)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipNameWidgetInterface::StaticClass()));
	OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking);
	if (Func)
	{
		Parms.bIsSpeaking=bIsSpeaking;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "ModuleRelativePath", "Public/OnsetVoipNameWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSpeaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::NewProp_bIsSpeaking_SetBit(void* Obj)
{
	((OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms*)Obj)->bIsSpeaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::NewProp_bIsSpeaking = { "bIsSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms), &Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::NewProp_bIsSpeaking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::NewProp_bIsSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipNameWidgetInterface, nullptr, "SetNameplateSpeaking", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::PropPointers), sizeof(OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipNameWidgetInterface_eventSetNameplateSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipNameWidgetInterface Function SetNameplateSpeaking

// Begin Interface UOnsetVoipNameWidgetInterface Function SetOwningPlayerState
struct OnsetVoipNameWidgetInterface_eventSetOwningPlayerState_Parms
{
	APlayerState* PlayerState;
};
void IOnsetVoipNameWidgetInterface::SetOwningPlayerState(APlayerState* PlayerState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetOwningPlayerState instead.");
}
static FName NAME_UOnsetVoipNameWidgetInterface_SetOwningPlayerState = FName(TEXT("SetOwningPlayerState"));
void IOnsetVoipNameWidgetInterface::Execute_SetOwningPlayerState(UObject* O, APlayerState* PlayerState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOnsetVoipNameWidgetInterface::StaticClass()));
	OnsetVoipNameWidgetInterface_eventSetOwningPlayerState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOnsetVoipNameWidgetInterface_SetOwningPlayerState);
	if (Func)
	{
		Parms.PlayerState=PlayerState;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "ModuleRelativePath", "Public/OnsetVoipNameWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipNameWidgetInterface_eventSetOwningPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipNameWidgetInterface, nullptr, "SetOwningPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::PropPointers), sizeof(OnsetVoipNameWidgetInterface_eventSetOwningPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(OnsetVoipNameWidgetInterface_eventSetOwningPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UOnsetVoipNameWidgetInterface Function SetOwningPlayerState

// Begin Interface UOnsetVoipNameWidgetInterface
void UOnsetVoipNameWidgetInterface::StaticRegisterNativesUOnsetVoipNameWidgetInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipNameWidgetInterface);
UClass* Z_Construct_UClass_UOnsetVoipNameWidgetInterface_NoRegister()
{
	return UOnsetVoipNameWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipNameWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplatePlayerName, "SetNameplatePlayerName" }, // 1195959457
		{ &Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetNameplateSpeaking, "SetNameplateSpeaking" }, // 4077554874
		{ &Z_Construct_UFunction_UOnsetVoipNameWidgetInterface_SetOwningPlayerState, "SetOwningPlayerState" }, // 1711493714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnsetVoipNameWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::ClassParams = {
	&UOnsetVoipNameWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipNameWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipNameWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipNameWidgetInterface.OuterSingleton, Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipNameWidgetInterface.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipNameWidgetInterface>()
{
	return UOnsetVoipNameWidgetInterface::StaticClass();
}
UOnsetVoipNameWidgetInterface::UOnsetVoipNameWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipNameWidgetInterface);
UOnsetVoipNameWidgetInterface::~UOnsetVoipNameWidgetInterface() {}
// End Interface UOnsetVoipNameWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipNameWidgetInterface, UOnsetVoipNameWidgetInterface::StaticClass, TEXT("UOnsetVoipNameWidgetInterface"), &Z_Registration_Info_UClass_UOnsetVoipNameWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipNameWidgetInterface), 501591557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_466300056(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
