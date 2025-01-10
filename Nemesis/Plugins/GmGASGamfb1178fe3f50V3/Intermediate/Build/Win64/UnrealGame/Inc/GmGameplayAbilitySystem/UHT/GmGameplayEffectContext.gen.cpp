// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/GmGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmGameplayEffectContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGmGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGmGameplayEffectContext
static_assert(std::is_polymorphic<FGmGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FGmGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GmGameplayEffectContext;
class UScriptStruct* FGmGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGmGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_GmGameplayAbilitySystem(), TEXT("GmGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGmGameplayEffectContext>()
{
	return FGmGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GmGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmGameplayEffectContext.h" },
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[] = {
		{ "Comment", "/** Ability Source object (should implement IGmAbilitySourceInterface). NOT replicated currently */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Ability Source object (should implement IGmAbilitySourceInterface). NOT replicated currently" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGmGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmGameplayEffectContext, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySourceObject_MetaData), NewProp_AbilitySourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::NewProp_CartridgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"GmGameplayEffectContext",
	Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::PropPointers),
	sizeof(FGmGameplayEffectContext),
	alignof(FGmGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGmGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GmGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FGmGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmGameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGmGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FGmGameplayEffectContext_Statics::NewStructOps, TEXT("GmGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_GmGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGmGameplayEffectContext), 3958240632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmGameplayEffectContext_h_1458931021(TEXT("/Script/GmGameplayAbilitySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmGameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
