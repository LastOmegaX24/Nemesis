// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipAudioComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipAudioComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipAudioComponent();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetVoipAudioComponent
void UOnsetVoipAudioComponent::StaticRegisterNativesUOnsetVoipAudioComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipAudioComponent);
UClass* Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister()
{
	return UOnsetVoipAudioComponent::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipAudioComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Onset VoIP audio component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically.\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "OnsetVoipAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipAudioComponent.h" },
		{ "ToolTip", "The Onset VoIP audio component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoipSoundWave_MetaData[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Procedural sound wave used to playback voice data.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipAudioComponent.h" },
		{ "ToolTip", "Procedural sound wave used to playback voice data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnsetVoipSoundWaveClass_MetaData[] = {
		{ "Category", "OnsetVoip" },
		{ "ModuleRelativePath", "Public/OnsetVoipAudioComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipSoundWave;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultOnsetVoipSoundWaveClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipAudioComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::NewProp_VoipSoundWave = { "VoipSoundWave", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipAudioComponent, VoipSoundWave), Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoipSoundWave_MetaData), NewProp_VoipSoundWave_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::NewProp_DefaultOnsetVoipSoundWaveClass = { "DefaultOnsetVoipSoundWaveClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipAudioComponent, DefaultOnsetVoipSoundWaveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOnsetVoipSoundWaveClass_MetaData), NewProp_DefaultOnsetVoipSoundWaveClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::NewProp_VoipSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::NewProp_DefaultOnsetVoipSoundWaveClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::ClassParams = {
	&UOnsetVoipAudioComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipAudioComponent()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipAudioComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipAudioComponent.OuterSingleton, Z_Construct_UClass_UOnsetVoipAudioComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipAudioComponent.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipAudioComponent>()
{
	return UOnsetVoipAudioComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipAudioComponent);
UOnsetVoipAudioComponent::~UOnsetVoipAudioComponent() {}
// End Class UOnsetVoipAudioComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipAudioComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipAudioComponent, UOnsetVoipAudioComponent::StaticClass, TEXT("UOnsetVoipAudioComponent"), &Z_Registration_Info_UClass_UOnsetVoipAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipAudioComponent), 2454139273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipAudioComponent_h_832266360(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipAudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipAudioComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
