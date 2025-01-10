// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/GmAbilityTagRelationshipMapping.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmAbilityTagRelationshipMapping() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityTagRelationshipMapping();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityTagRelationshipMapping_NoRegister();
GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGmAbilityTagRelationship();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin ScriptStruct FGmAbilityTagRelationship
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship;
class UScriptStruct* FGmAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGmAbilityTagRelationship, (UObject*)Z_Construct_UPackage__Script_GmGameplayAbilitySystem(), TEXT("GmAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGmAbilityTagRelationship>()
{
	return FGmAbilityTagRelationship::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that defines the relationship between different ability tags */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Struct that defines the relationship between different ability tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Categories", "Gameplay.Action" },
		{ "Category", "Ability" },
		{ "Comment", "/** The tag that this container relationship is about. Single tag, but abilities can have multiple of these */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The tag that this container relationship is about. Single tag, but abilities can have multiple of these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToBlock_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be blocked by any ability using this tag */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be blocked by any ability using this tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagsToCancel_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The other ability tags that will be canceled by any ability using this tag */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "The other ability tags that will be canceled by any ability using this tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation required tags of the ability */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation required tags of the ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** If an ability has the tag, this is implicitly added to the activation blocked tags of the ability */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "If an ability has the tag, this is implicitly added to the activation blocked tags of the ability" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToBlock;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagsToCancel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGmAbilityTagRelationship>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityTagRelationship, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock = { "AbilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityTagRelationship, AbilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToBlock_MetaData), NewProp_AbilityTagsToBlock_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel = { "AbilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityTagRelationship, AbilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagsToCancel_MetaData), NewProp_AbilityTagsToCancel_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityTagRelationship, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRequiredTags_MetaData), NewProp_ActivationRequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityTagRelationship, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationBlockedTags_MetaData), NewProp_ActivationBlockedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTagsToBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_AbilityTagsToCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_ActivationRequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewProp_ActivationBlockedTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GmAbilityTagRelationship",
	Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::PropPointers),
	sizeof(FGmAbilityTagRelationship),
	alignof(FGmAbilityTagRelationship),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGmAbilityTagRelationship()
{
	if (!Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship.InnerSingleton;
}
// End ScriptStruct FGmAbilityTagRelationship

// Begin Class UGmAbilityTagRelationshipMapping
void UGmAbilityTagRelationshipMapping::StaticRegisterNativesUGmAbilityTagRelationshipMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmAbilityTagRelationshipMapping);
UClass* Z_Construct_UClass_UGmAbilityTagRelationshipMapping_NoRegister()
{
	return UGmAbilityTagRelationshipMapping::StaticClass();
}
struct Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Mapping of how ability tags block or cancel other abilities */" },
		{ "IncludePath", "AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "ToolTip", "Mapping of how ability tags block or cancel other abilities" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTagRelationships_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The list of relationships between different gameplay tags (which ones block or cancel others) */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilityTagRelationshipMapping.h" },
		{ "TitleProperty", "AbilityTag" },
		{ "ToolTip", "The list of relationships between different gameplay tags (which ones block or cancel others)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagRelationships_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTagRelationships;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGmAbilityTagRelationshipMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGmAbilityTagRelationship, METADATA_PARAMS(0, nullptr) }; // 1063842213
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships = { "AbilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmAbilityTagRelationshipMapping, AbilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTagRelationships_MetaData), NewProp_AbilityTagRelationships_MetaData) }; // 1063842213
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::NewProp_AbilityTagRelationships,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::ClassParams = {
	&UGmAbilityTagRelationshipMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmAbilityTagRelationshipMapping()
{
	if (!Z_Registration_Info_UClass_UGmAbilityTagRelationshipMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmAbilityTagRelationshipMapping.OuterSingleton, Z_Construct_UClass_UGmAbilityTagRelationshipMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmAbilityTagRelationshipMapping.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmAbilityTagRelationshipMapping>()
{
	return UGmAbilityTagRelationshipMapping::StaticClass();
}
UGmAbilityTagRelationshipMapping::UGmAbilityTagRelationshipMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmAbilityTagRelationshipMapping);
UGmAbilityTagRelationshipMapping::~UGmAbilityTagRelationshipMapping() {}
// End Class UGmAbilityTagRelationshipMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGmAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FGmAbilityTagRelationship_Statics::NewStructOps, TEXT("GmAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_GmAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGmAbilityTagRelationship), 1063842213U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmAbilityTagRelationshipMapping, UGmAbilityTagRelationshipMapping::StaticClass, TEXT("UGmAbilityTagRelationshipMapping"), &Z_Registration_Info_UClass_UGmAbilityTagRelationshipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmAbilityTagRelationshipMapping), 3076588265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_2731897984(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilityTagRelationshipMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
