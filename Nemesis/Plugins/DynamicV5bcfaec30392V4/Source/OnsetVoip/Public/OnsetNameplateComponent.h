// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "OnsetNameplateComponent.generated.h"

/**
 * The Onset nameplate component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically.
 */
UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class ONSETVOIP_API UOnsetNameplateComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
public:
	UOnsetNameplateComponent(const FObjectInitializer& ObjectInitializer);

	//~ Begin USceneComponent Interface
	virtual void OnAttachmentChanged() override;
	//~ End USceneComponent Interface

	//~ Begin UActorComponent Interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//~ End UActorComponent Interface

	// To test if the owning pawn of the nameplate is actually visible to the player we use the GetLastRenderTimeOnScreen on a suitable component like the character's skeletal mesh component.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Nameplate")
	virtual bool FindComponentToTestLastRenderTimeOnScreen();

	// Returns true if the nameplate is currently visible.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Nameplate")
	virtual bool IsRenderedAndVisible() const;

	// Use this to override the default value in the project settings.
	UPROPERTY(EditAnywhere, Category = "OnsetVoip|Nameplate")
	double NameplateMaxDrawDistance;

	// Used for name updates.
	TWeakObjectPtr<APlayerState> CachedPlayerState;
	bool bCachedNameUpdated = false;

	// See variable CachedComponenetToTestRenderTime
	UPrimitiveComponent* GetCachedComponenetToTestRenderTime() const
	{
		return CachedComponenetToTestRenderTime;
	}

protected:
	// Used to track whether the actor we are attached to is visible. This is determined by CachedComponenetToTestRenderTime LastRenderTimeOnScreen.
	bool bCachedIsParentActorOnScreenAndVisible = false;
	
	// A component of the actor we (OnsetNameplateComponent) are attached to and that we read the GetLastRenderTimeOnScreen() for determining whether we should show the nameplate.
	UPROPERTY(EditInstanceOnly, Category = "OnsetVoip|Nameplate", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPrimitiveComponent> CachedComponenetToTestRenderTime = nullptr;
};
