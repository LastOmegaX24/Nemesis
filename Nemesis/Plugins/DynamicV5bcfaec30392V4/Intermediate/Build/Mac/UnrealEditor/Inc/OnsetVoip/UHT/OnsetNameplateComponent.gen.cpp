// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetNameplateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetNameplateComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetNameplateComponent();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetNameplateComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetNameplateComponent Function FindComponentToTestLastRenderTimeOnScreen
struct Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics
{
	struct OnsetNameplateComponent_eventFindComponentToTestLastRenderTimeOnScreen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Nameplate" },
		{ "Comment", "// To test if the owning pawn of the nameplate is actually visible to the player we use the GetLastRenderTimeOnScreen on a suitable component like the character's skeletal mesh component.\n" },
		{ "ModuleRelativePath", "Public/OnsetNameplateComponent.h" },
		{ "ToolTip", "To test if the owning pawn of the nameplate is actually visible to the player we use the GetLastRenderTimeOnScreen on a suitable component like the character's skeletal mesh component." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetNameplateComponent_eventFindComponentToTestLastRenderTimeOnScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetNameplateComponent_eventFindComponentToTestLastRenderTimeOnScreen_Parms), &Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNameplateComponent, nullptr, "FindComponentToTestLastRenderTimeOnScreen", nullptr, nullptr, Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::OnsetNameplateComponent_eventFindComponentToTestLastRenderTimeOnScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::OnsetNameplateComponent_eventFindComponentToTestLastRenderTimeOnScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetNameplateComponent::execFindComponentToTestLastRenderTimeOnScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindComponentToTestLastRenderTimeOnScreen();
	P_NATIVE_END;
}
// End Class UOnsetNameplateComponent Function FindComponentToTestLastRenderTimeOnScreen

// Begin Class UOnsetNameplateComponent Function IsRenderedAndVisible
struct Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics
{
	struct OnsetNameplateComponent_eventIsRenderedAndVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Nameplate" },
		{ "Comment", "// Returns true if the nameplate is currently visible.\n" },
		{ "ModuleRelativePath", "Public/OnsetNameplateComponent.h" },
		{ "ToolTip", "Returns true if the nameplate is currently visible." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetNameplateComponent_eventIsRenderedAndVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetNameplateComponent_eventIsRenderedAndVisible_Parms), &Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetNameplateComponent, nullptr, "IsRenderedAndVisible", nullptr, nullptr, Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::OnsetNameplateComponent_eventIsRenderedAndVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::OnsetNameplateComponent_eventIsRenderedAndVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetNameplateComponent::execIsRenderedAndVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRenderedAndVisible();
	P_NATIVE_END;
}
// End Class UOnsetNameplateComponent Function IsRenderedAndVisible

// Begin Class UOnsetNameplateComponent
void UOnsetNameplateComponent::StaticRegisterNativesUOnsetNameplateComponent()
{
	UClass* Class = UOnsetNameplateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindComponentToTestLastRenderTimeOnScreen", &UOnsetNameplateComponent::execFindComponentToTestLastRenderTimeOnScreen },
		{ "IsRenderedAndVisible", &UOnsetNameplateComponent::execIsRenderedAndVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetNameplateComponent);
UClass* Z_Construct_UClass_UOnsetNameplateComponent_NoRegister()
{
	return UOnsetNameplateComponent::StaticClass();
}
struct Z_Construct_UClass_UOnsetNameplateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Onset nameplate component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "OnsetNameplateComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnsetNameplateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Onset nameplate component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameplateMaxDrawDistance_MetaData[] = {
		{ "Category", "OnsetVoip|Nameplate" },
		{ "Comment", "// Use this to override the default value in the project settings.\n" },
		{ "ModuleRelativePath", "Public/OnsetNameplateComponent.h" },
		{ "ToolTip", "Use this to override the default value in the project settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponenetToTestRenderTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OnsetVoip|Nameplate" },
		{ "Comment", "// A component of the actor we (OnsetNameplateComponent) are attached to and that we read the GetLastRenderTimeOnScreen() for determining whether we should show the nameplate.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnsetNameplateComponent.h" },
		{ "ToolTip", "A component of the actor we (OnsetNameplateComponent) are attached to and that we read the GetLastRenderTimeOnScreen() for determining whether we should show the nameplate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NameplateMaxDrawDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComponenetToTestRenderTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetNameplateComponent_FindComponentToTestLastRenderTimeOnScreen, "FindComponentToTestLastRenderTimeOnScreen" }, // 181717535
		{ &Z_Construct_UFunction_UOnsetNameplateComponent_IsRenderedAndVisible, "IsRenderedAndVisible" }, // 369431522
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetNameplateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOnsetNameplateComponent_Statics::NewProp_NameplateMaxDrawDistance = { "NameplateMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNameplateComponent, NameplateMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameplateMaxDrawDistance_MetaData), NewProp_NameplateMaxDrawDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetNameplateComponent_Statics::NewProp_CachedComponenetToTestRenderTime = { "CachedComponenetToTestRenderTime", nullptr, (EPropertyFlags)0x0124080000080809, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetNameplateComponent, CachedComponenetToTestRenderTime), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComponenetToTestRenderTime_MetaData), NewProp_CachedComponenetToTestRenderTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetNameplateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNameplateComponent_Statics::NewProp_NameplateMaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetNameplateComponent_Statics::NewProp_CachedComponenetToTestRenderTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNameplateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetNameplateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNameplateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetNameplateComponent_Statics::ClassParams = {
	&UOnsetNameplateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetNameplateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNameplateComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetNameplateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetNameplateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetNameplateComponent()
{
	if (!Z_Registration_Info_UClass_UOnsetNameplateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetNameplateComponent.OuterSingleton, Z_Construct_UClass_UOnsetNameplateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetNameplateComponent.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetNameplateComponent>()
{
	return UOnsetNameplateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetNameplateComponent);
UOnsetNameplateComponent::~UOnsetNameplateComponent() {}
// End Class UOnsetNameplateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetNameplateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetNameplateComponent, UOnsetNameplateComponent::StaticClass, TEXT("UOnsetNameplateComponent"), &Z_Registration_Info_UClass_UOnsetNameplateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetNameplateComponent), 2385386633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetNameplateComponent_h_963199927(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetNameplateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetNameplateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
