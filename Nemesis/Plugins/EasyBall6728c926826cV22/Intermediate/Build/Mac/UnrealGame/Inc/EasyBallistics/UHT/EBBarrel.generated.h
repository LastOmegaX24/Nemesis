// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EBBarrel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AEBBullet;
class UPrimitiveComponent;
enum class EFireMode : uint8;
struct FHitResult;
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;
#ifdef EASYBALLISTICS_EBBarrel_generated_h
#error "EBBarrel.generated.h already included, missing '#pragma once' in EBBarrel.h"
#endif
#define EASYBALLISTICS_EBBarrel_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_101_DELEGATE \
static void FBeforeShotFired_DelegateWrapper(const FMulticastScriptDelegate& BeforeShotFired);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_105_DELEGATE \
static void FShotFired_DelegateWrapper(const FMulticastScriptDelegate& ShotFired);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_109_DELEGATE \
static void FAmmoDepleted_DelegateWrapper(const FMulticastScriptDelegate& AmmoDepleted);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_113_DELEGATE \
static void FReadyToShoot_DelegateWrapper(const FMulticastScriptDelegate& ReadyToShoot);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShotFiredMulticast_Implementation(); \
	virtual bool ShootRepCSA_Validate(bool , FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ShootRepCSA_Implementation(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual bool ShootRep_Validate(bool ); \
	virtual void ShootRep_Implementation(bool Trigger); \
	virtual bool ClientAim_Validate(FVector_NetQuantize , FVector_NetQuantizeNormal ); \
	virtual void ClientAim_Implementation(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim); \
	virtual void ApplyRecoil_Implementation(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse); \
	virtual void InitialBulletTransform_Implementation(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection); \
	virtual bool GatlingSpool_Validate(bool ); \
	virtual void GatlingSpool_Implementation(bool Spool); \
	virtual bool SwitchFireMode_Validate(EFireMode ); \
	virtual void SwitchFireMode_Implementation(EFireMode NewFireMode); \
	virtual bool UnloadChambered_Validate(bool ); \
	virtual void UnloadChambered_Implementation(bool ManualCharge); \
	virtual bool Charge_Validate(); \
	virtual void Charge_Implementation(); \
	DECLARE_FUNCTION(execShotFiredMulticast); \
	DECLARE_FUNCTION(execShootRepCSA); \
	DECLARE_FUNCTION(execShootRep); \
	DECLARE_FUNCTION(execClientAim); \
	DECLARE_FUNCTION(execApplyRecoil); \
	DECLARE_FUNCTION(execInitialBulletTransform); \
	DECLARE_FUNCTION(execCalculateAimDirectionFromLocation); \
	DECLARE_FUNCTION(execCalculateAimDirection); \
	DECLARE_FUNCTION(execPredictHitFromLocation); \
	DECLARE_FUNCTION(execPredictHit); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execGatlingSpool); \
	DECLARE_FUNCTION(execSwitchFireMode); \
	DECLARE_FUNCTION(execUnloadChambered); \
	DECLARE_FUNCTION(execCharge); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execGetAmmoCount); \
	DECLARE_FUNCTION(execNextBullet);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEBBarrel(); \
	friend struct Z_Construct_UClass_UEBBarrel_Statics; \
public: \
	DECLARE_CLASS(UEBBarrel, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(UEBBarrel) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FireMode=NETFIELD_REP_START, \
		ShootingBlocked, \
		Ammo, \
		CycleAmmoCount, \
		CycleAmmoPos, \
		ChamberedBullet, \
		Shooting, \
		Spooling, \
		NETFIELD_REP_END=Spooling	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEBBarrel(UEBBarrel&&); \
	UEBBarrel(const UEBBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEBBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEBBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEBBarrel) \
	NO_API virtual ~UEBBarrel();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_25_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYBALLISTICS_API UClass* StaticClass<class UEBBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBarrel_h


#define FOREACH_ENUM_EFIREMODE(op) \
	op(EFireMode::FM_Auto) \
	op(EFireMode::FM_Semiauto) \
	op(EFireMode::FM_Burst) \
	op(EFireMode::FM_InterBurst) \
	op(EFireMode::FM_Manual) \
	op(EFireMode::FM_Slamfire) \
	op(EFireMode::FM_Gatling) 

enum class EFireMode : uint8;
template<> struct TIsUEnumClass<EFireMode> { enum { Value = true }; };
template<> EASYBALLISTICS_API UEnum* StaticEnum<EFireMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
