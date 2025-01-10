// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EBBullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AEBBullet;
class APawn;
class UPhysicalMaterial;
class USceneComponent;
class UWorld;
struct FHitResult;
struct FVector_NetQuantize;
#ifdef EASYBALLISTICS_EBBullet_generated_h
#error "EBBullet.generated.h already included, missing '#pragma once' in EBBullet.h"
#endif
#define EASYBALLISTICS_EBBullet_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DeactivationBroadcast_Implementation(); \
	virtual void ReactivationBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator); \
	virtual bool CollisionFilter_Implementation(FHitResult HitResult) const; \
	virtual float GetSpeedOfSound_Implementation(UWorld* World, FVector Location) const; \
	virtual float GetAirDensity_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector GetWind_Implementation(UWorld* World, FVector Location) const; \
	virtual FVector UpdateVelocity_Implementation(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const; \
	virtual void OnDeactivated_Implementation(); \
	virtual void OnNetPredictedImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void OnImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult); \
	virtual void VelocityChangeBroadcastReliable_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
	virtual void VelocityChangeBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity); \
	DECLARE_FUNCTION(execDeactivationBroadcast); \
	DECLARE_FUNCTION(execReactivationBroadcast); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execCollisionFilter); \
	DECLARE_FUNCTION(execGetSpeedOfSound); \
	DECLARE_FUNCTION(execGetAirDensity); \
	DECLARE_FUNCTION(execGetWind); \
	DECLARE_FUNCTION(execUpdateVelocity); \
	DECLARE_FUNCTION(execOnDeactivated); \
	DECLARE_FUNCTION(execOnNetPredictedImpact); \
	DECLARE_FUNCTION(execOnImpact); \
	DECLARE_FUNCTION(execVelocityChangeBroadcastReliable); \
	DECLARE_FUNCTION(execVelocityChangeBroadcast); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSpawnWithExactVelocity);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEBBullet(); \
	friend struct Z_Construct_UClass_AEBBullet_Statics; \
public: \
	DECLARE_CLASS(AEBBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(AEBBullet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Velocity=NETFIELD_REP_START, \
		RandomStream, \
		NETFIELD_REP_END=RandomStream	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEBBullet(AEBBullet&&); \
	AEBBullet(const AEBBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEBBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEBBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEBBullet) \
	NO_API virtual ~AEBBullet();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_27_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYBALLISTICS_API UClass* StaticClass<class AEBBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBBullet_h


#define FOREACH_ENUM_EEBATMOSPHERETYPE(op) \
	op(EEBAtmosphereType::AT_Constant) \
	op(EEBAtmosphereType::AT_Curve) \
	op(EEBAtmosphereType::AT_Earth) 

enum class EEBAtmosphereType : uint8;
template<> struct TIsUEnumClass<EEBAtmosphereType> { enum { Value = true }; };
template<> EASYBALLISTICS_API UEnum* StaticEnum<EEBAtmosphereType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
