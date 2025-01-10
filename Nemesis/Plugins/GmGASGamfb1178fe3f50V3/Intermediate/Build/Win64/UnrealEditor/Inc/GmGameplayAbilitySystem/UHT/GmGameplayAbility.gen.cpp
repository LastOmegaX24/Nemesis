// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/Abilities/GmGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityCost_NoRegister();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySystemComponent_NoRegister();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmGameplayAbility();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmGameplayAbility_NoRegister();
GMGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup();
GMGAMEPLAYABILITYSYSTEM_API UEnum* Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy();
GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin Enum EGmAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGmAbilityActivationPolicy;
static UEnum* EGmAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GmGameplayAbilitySystem(), TEXT("EGmAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGmAbilityActivationPolicy>()
{
	return EGmAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EGmAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EGmAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "EGmAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
		{ "ToolTip", "EGmAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "EGmAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGmAbilityActivationPolicy::OnInputTriggered", (int64)EGmAbilityActivationPolicy::OnInputTriggered },
		{ "EGmAbilityActivationPolicy::WhileInputActive", (int64)EGmAbilityActivationPolicy::WhileInputActive },
		{ "EGmAbilityActivationPolicy::OnSpawn", (int64)EGmAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
	nullptr,
	"EGmAbilityActivationPolicy",
	"EGmAbilityActivationPolicy",
	Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGmAbilityActivationPolicy.InnerSingleton;
}
// End Enum EGmAbilityActivationPolicy

// Begin Enum EGmAbilityActivationGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGmAbilityActivationGroup;
static UEnum* EGmAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGmAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGmAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_GmGameplayAbilitySystem(), TEXT("EGmAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_EGmAbilityActivationGroup.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGmAbilityActivationGroup>()
{
	return EGmAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EGmAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "EGmAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "EGmAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "EGmAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGmAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "EGmAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGmAbilityActivationGroup::Independent", (int64)EGmAbilityActivationGroup::Independent },
		{ "EGmAbilityActivationGroup::Exclusive_Replaceable", (int64)EGmAbilityActivationGroup::Exclusive_Replaceable },
		{ "EGmAbilityActivationGroup::Exclusive_Blocking", (int64)EGmAbilityActivationGroup::Exclusive_Blocking },
		{ "EGmAbilityActivationGroup::MAX", (int64)EGmAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
	nullptr,
	"EGmAbilityActivationGroup",
	"EGmAbilityActivationGroup",
	Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_EGmAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGmAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGmAbilityActivationGroup.InnerSingleton;
}
// End Enum EGmAbilityActivationGroup

// Begin ScriptStruct FGmAbilityMontageFailureMsg
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg;
class UScriptStruct* FGmAbilityMontageFailureMsg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg, (UObject*)Z_Construct_UPackage__Script_GmGameplayAbilitySystem(), TEXT("GmAbilityMontageFailureMsg"));
	}
	return Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<FGmAbilityMontageFailureMsg>()
{
	return FGmAbilityMontageFailureMsg::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "GmGAS_AbilityMontageFailureMsg" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "GmGAS_AbilityMontageFailureMsg" },
		{ "Comment", "// All the reasons why this ability has failed\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "All the reasons why this ability has failed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[] = {
		{ "Category", "GmGAS_AbilityMontageFailureMsg" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGmAbilityMontageFailureMsg>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityMontageFailureMsg, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityMontageFailureMsg, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGmAbilityMontageFailureMsg, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureMontage_MetaData), NewProp_FailureMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewProp_FailureMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
	nullptr,
	&NewStructOps,
	"GmAbilityMontageFailureMsg",
	Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::PropPointers),
	sizeof(FGmAbilityMontageFailureMsg),
	alignof(FGmAbilityMontageFailureMsg),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg()
{
	if (!Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.InnerSingleton, Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg.InnerSingleton;
}
// End ScriptStruct FGmAbilityMontageFailureMsg

// Begin Class UGmGameplayAbility Function CanChangeActivationGroup
struct Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics
{
	struct GmGameplayAbility_eventCanChangeActivationGroup_Parms
	{
		EGmAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS|Ability" },
		{ "Comment", "// Returns true if the requested activation group is a valid transition.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Returns true if the requested activation group is a valid transition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGroup_MetaData), NewProp_NewGroup_MetaData) }; // 2097990161
void Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GmGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GmGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "CanChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::GmGameplayAbility_eventCanChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::GmGameplayAbility_eventCanChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGmGameplayAbility::execCanChangeActivationGroup)
{
	P_GET_ENUM(EGmAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(EGmAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class UGmGameplayAbility Function CanChangeActivationGroup

// Begin Class UGmGameplayAbility Function ChangeActivationGroup
struct Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics
{
	struct GmGameplayAbility_eventChangeActivationGroup_Parms
	{
		EGmAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS|Ability" },
		{ "Comment", "// Tries to change the activation group.  Returns true if it successfully changed.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewGroup_MetaData), NewProp_NewGroup_MetaData) }; // 2097990161
void Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GmGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GmGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "ChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::GmGameplayAbility_eventChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::GmGameplayAbility_eventChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGmGameplayAbility::execChangeActivationGroup)
{
	P_GET_ENUM(EGmAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(EGmAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class UGmGameplayAbility Function ChangeActivationGroup

// Begin Class UGmGameplayAbility Function Gb1_OnAbilityAdded
static const FName NAME_UGmGameplayAbility_Gb1_OnAbilityAdded = FName(TEXT("Gb1_OnAbilityAdded"));
void UGmGameplayAbility::Gb1_OnAbilityAdded()
{
	UFunction* Func = FindFunctionChecked(NAME_UGmGameplayAbility_Gb1_OnAbilityAdded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "Gb1_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGmGameplayAbility Function Gb1_OnAbilityAdded

// Begin Class UGmGameplayAbility Function Gb1_OnAbilityRemoved
static const FName NAME_UGmGameplayAbility_Gb1_OnAbilityRemoved = FName(TEXT("Gb1_OnAbilityRemoved"));
void UGmGameplayAbility::Gb1_OnAbilityRemoved()
{
	UFunction* Func = FindFunctionChecked(NAME_UGmGameplayAbility_Gb1_OnAbilityRemoved);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "Gb1_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGmGameplayAbility Function Gb1_OnAbilityRemoved

// Begin Class UGmGameplayAbility Function Gb1_OnPawnAvatarSet
static const FName NAME_UGmGameplayAbility_Gb1_OnPawnAvatarSet = FName(TEXT("Gb1_OnPawnAvatarSet"));
void UGmGameplayAbility::Gb1_OnPawnAvatarSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UGmGameplayAbility_Gb1_OnPawnAvatarSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "Gb1_OnPawnAvatarSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGmGameplayAbility Function Gb1_OnPawnAvatarSet

// Begin Class UGmGameplayAbility Function GetControllerFromActorInfo
struct Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics
{
	struct GmGameplayAbility_eventGetControllerFromActorInfo_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::GmGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::GmGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGmGameplayAbility::execGetControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UGmGameplayAbility Function GetControllerFromActorInfo

// Begin Class UGmGameplayAbility Function GetGmAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics
{
	struct GmGameplayAbility_eventGetGmAbilitySystemComponentFromActorInfo_Parms
	{
		UGmAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmGameplayAbility_eventGetGmAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UGmAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "GetGmAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::GmGameplayAbility_eventGetGmAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::GmGameplayAbility_eventGetGmAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGmGameplayAbility::execGetGmAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGmAbilitySystemComponent**)Z_Param__Result=P_THIS->GetGmAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UGmGameplayAbility Function GetGmAbilitySystemComponentFromActorInfo

// Begin Class UGmGameplayAbility Function ScriptOnAbilityFailedToActivate
struct GmGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms
{
	FGameplayTagContainer FailedReason;
};
static const FName NAME_UGmGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
void UGmGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
{
	GmGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
	Parms.FailedReason=FailedReason;
	UFunction* Func = FindFunctionChecked(NAME_UGmGameplayAbility_ScriptOnAbilityFailedToActivate);
		const_cast<UGmGameplayAbility*>(this)->ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GmGAS" },
		{ "Comment", "// Called when the ability fails to activate\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Called when the ability fails to activate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GmGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedReason_MetaData), NewProp_FailedReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGmGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", nullptr, nullptr, Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), sizeof(GmGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(GmGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGmGameplayAbility Function ScriptOnAbilityFailedToActivate

// Begin Class UGmGameplayAbility
void UGmGameplayAbility::StaticRegisterNativesUGmGameplayAbility()
{
	UClass* Class = UGmGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangeActivationGroup", &UGmGameplayAbility::execCanChangeActivationGroup },
		{ "ChangeActivationGroup", &UGmGameplayAbility::execChangeActivationGroup },
		{ "GetControllerFromActorInfo", &UGmGameplayAbility::execGetControllerFromActorInfo },
		{ "GetGmAbilitySystemComponentFromActorInfo", &UGmGameplayAbility::execGetGmAbilitySystemComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmGameplayAbility);
UClass* Z_Construct_UClass_UGmGameplayAbility_NoRegister()
{
	return UGmGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UGmGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base gameplay ability class used by this project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "GmGAS|Ability Activation" },
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Defines how this ability is meant to activate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "GmGAS|Ability Activation" },
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to simple error messages\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to simple error messages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancelation_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/GmGameplayAbility.h" },
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
	static void NewProp_bLogCancelation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancelation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGmGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 4053417825
		{ &Z_Construct_UFunction_UGmGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 2263798712
		{ &Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityAdded, "Gb1_OnAbilityAdded" }, // 3451626075
		{ &Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnAbilityRemoved, "Gb1_OnAbilityRemoved" }, // 1395928730
		{ &Z_Construct_UFunction_UGmGameplayAbility_Gb1_OnPawnAvatarSet, "Gb1_OnPawnAvatarSet" }, // 2320250670
		{ &Z_Construct_UFunction_UGmGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 2477476604
		{ &Z_Construct_UFunction_UGmGameplayAbility_GetGmAbilitySystemComponentFromActorInfo, "GetGmAbilitySystemComponentFromActorInfo" }, // 603034061
		{ &Z_Construct_UFunction_UGmGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 339373505
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGmGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmGameplayAbility, ActivationPolicy), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 3664532849
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmGameplayAbility, ActivationGroup), Z_Construct_UEnum_GmGameplayAbilitySystem_EGmAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 2097990161
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGmAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToUserFacingMessages_MetaData), NewProp_FailureTagToUserFacingMessages_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGmGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToAnimMontage_MetaData), NewProp_FailureTagToAnimMontage_MetaData) }; // 1298103297
void Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_bLogCancelation_SetBit(void* Obj)
{
	((UGmGameplayAbility*)Obj)->bLogCancelation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_bLogCancelation = { "bLogCancelation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGmGameplayAbility), &Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_bLogCancelation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogCancelation_MetaData), NewProp_bLogCancelation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGmGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmGameplayAbility_Statics::NewProp_bLogCancelation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGmGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmGameplayAbility_Statics::ClassParams = {
	&UGmGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGmGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGmGameplayAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGmGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmGameplayAbility.OuterSingleton, Z_Construct_UClass_UGmGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmGameplayAbility.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmGameplayAbility>()
{
	return UGmGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmGameplayAbility);
UGmGameplayAbility::~UGmGameplayAbility() {}
// End Class UGmGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGmAbilityActivationPolicy_StaticEnum, TEXT("EGmAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EGmAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664532849U) },
		{ EGmAbilityActivationGroup_StaticEnum, TEXT("EGmAbilityActivationGroup"), &Z_Registration_Info_UEnum_EGmAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097990161U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGmAbilityMontageFailureMsg::StaticStruct, Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics::NewStructOps, TEXT("GmAbilityMontageFailureMsg"), &Z_Registration_Info_UScriptStruct_GmAbilityMontageFailureMsg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGmAbilityMontageFailureMsg), 1279496958U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmGameplayAbility, UGmGameplayAbility::StaticClass, TEXT("UGmGameplayAbility"), &Z_Registration_Info_UClass_UGmGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmGameplayAbility), 4053660228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_3222834210(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
