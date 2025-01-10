// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/GmAbilitySystemComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySystemComponent();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySystemComponent_NoRegister();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityTagRelationshipMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGmAbilitySystemComponent Function ClientNotifyAbilityFailed
struct GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms
{
	const UGameplayAbility* Ability;
	FGameplayTagContainer FailureReason;
};
static const FName NAME_UGmAbilitySystemComponent_ClientNotifyAbilityFailed = FName(TEXT("ClientNotifyAbilityFailed"));
void UGmAbilitySystemComponent::ClientNotifyAbilityFailed(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason)
{
	GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms Parms;
	Parms.Ability=Ability;
	Parms.FailureReason=FailureReason;
	UFunction* Func = FindFunctionChecked(NAME_UGmAbilitySystemComponent_ClientNotifyAbilityFailed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS" },
		{ "Comment", "/** Notify client that an ability failed to activate */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilitySystemComponent.h" },
		{ "ToolTip", "Notify client that an ability failed to activate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmAbilitySystemComponent, nullptr, "ClientNotifyAbilityFailed", nullptr, nullptr, Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers), sizeof(GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(GmAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGmAbilitySystemComponent::execClientNotifyAbilityFailed)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_Ability);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientNotifyAbilityFailed_Implementation(Z_Param_Ability,Z_Param_FailureReason);
	P_NATIVE_END;
}
// End Class UGmAbilitySystemComponent Function ClientNotifyAbilityFailed

// Begin Class UGmAbilitySystemComponent
void UGmAbilitySystemComponent::StaticRegisterNativesUGmAbilitySystemComponent()
{
	UClass* Class = UGmAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientNotifyAbilityFailed", &UGmAbilitySystemComponent::execClientNotifyAbilityFailed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmAbilitySystemComponent);
UClass* Z_Construct_UClass_UGmAbilitySystemComponent_NoRegister()
{
	return UGmAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGmAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GmAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilitySystemComponent.h" },
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGmAbilitySystemComponent_ClientNotifyAbilityFailed, "ClientNotifyAbilityFailed" }, // 1005683921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGmAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGmAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_UGmAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGmAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGmAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmAbilitySystemComponent_Statics::ClassParams = {
	&UGmAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGmAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGmAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGmAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmAbilitySystemComponent.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmAbilitySystemComponent>()
{
	return UGmAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmAbilitySystemComponent);
UGmAbilitySystemComponent::~UGmAbilitySystemComponent() {}
// End Class UGmAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmAbilitySystemComponent, UGmAbilitySystemComponent::StaticClass, TEXT("UGmAbilitySystemComponent"), &Z_Registration_Info_UClass_UGmAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmAbilitySystemComponent), 3267121987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemComponent_h_18343301(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
