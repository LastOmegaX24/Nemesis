// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/GmGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UGmAbilitySystemComponent;
enum class EGmAbilityActivationGroup : uint8;
struct FGameplayTagContainer;
#ifdef GMGAMEPLAYABILITYSYSTEM_GmGameplayAbility_generated_h
#error "GmGameplayAbility.generated.h already included, missing '#pragma once' in GmGameplayAbility.h"
#endif
#define GMGAMEPLAYABILITYSYSTEM_GmGameplayAbility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGmAbilityMontageFailureMsg_Statics; \
	GMGAMEPLAYABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> GMGAMEPLAYABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FGmAbilityMontageFailureMsg>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetGmAbilitySystemComponentFromActorInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGmGameplayAbility(); \
	friend struct Z_Construct_UClass_UGmGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGmGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GmGameplayAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UGmGameplayAbility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGmGameplayAbility(UGmGameplayAbility&&); \
	UGmGameplayAbility(const UGmGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGmGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGmGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGmGameplayAbility) \
	NO_API virtual ~UGmGameplayAbility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_87_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<class UGmGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_Abilities_GmGameplayAbility_h


#define FOREACH_ENUM_EGMABILITYACTIVATIONPOLICY(op) \
	op(EGmAbilityActivationPolicy::OnInputTriggered) \
	op(EGmAbilityActivationPolicy::WhileInputActive) \
	op(EGmAbilityActivationPolicy::OnSpawn) 

enum class EGmAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EGmAbilityActivationPolicy> { enum { Value = true }; };
template<> GMGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGmAbilityActivationPolicy>();

#define FOREACH_ENUM_EGMABILITYACTIVATIONGROUP(op) \
	op(EGmAbilityActivationGroup::Independent) \
	op(EGmAbilityActivationGroup::Exclusive_Replaceable) \
	op(EGmAbilityActivationGroup::Exclusive_Blocking) 

enum class EGmAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<EGmAbilityActivationGroup> { enum { Value = true }; };
template<> GMGAMEPLAYABILITYSYSTEM_API UEnum* StaticEnum<EGmAbilityActivationGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
