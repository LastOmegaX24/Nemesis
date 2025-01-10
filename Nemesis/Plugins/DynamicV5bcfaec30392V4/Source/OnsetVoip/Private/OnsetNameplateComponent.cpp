// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetNameplateComponent.h"
#include "OnsetVoip.h"
#include "OnsetVoipSettings.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "OnsetVoipNameWidgetInterface.h"
#include "Runtime/Launch/Resources/Version.h"

UOnsetNameplateComponent::UOnsetNameplateComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Space = EWidgetSpace::Screen;
	bEnableAutoLODGeneration = false;
	bVisibleInReflectionCaptures = false;
	bVisibleInRealTimeSkyCaptures = false;
	bVisibleInRayTracing = false;
	bReceivesDecals = false;
	bUseAsOccluder = false;
	CanCharacterStepUpOn = ECB_No;
	BoundsScale = 0.0f;
	SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SetGenerateOverlapEvents(false);
	bCanEverAffectNavigation = false;
	bAllowCullDistanceVolume = false;
	bAutoActivate = true;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = 0.02f;

	NameplateMaxDrawDistance = -1.0;
}

void UOnsetNameplateComponent::OnAttachmentChanged()
{
	Super::OnAttachmentChanged();

	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("%s::OnAttachmentChanged Owner: %s, AttachParentActor: %s"), *GetPathName(), *GetNameSafe(GetOwner()), *GetNameSafe(GetAttachParentActor()));

	FindComponentToTestLastRenderTimeOnScreen();
}

void UOnsetNameplateComponent::BeginPlay()
{
	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("%s::BeginPlay()"), *GetPathName());

	if (NameplateMaxDrawDistance < 0.0)
	{
		NameplateMaxDrawDistance = GetDefault<UOnsetVoipSettings>()->NameplateMaxDrawDistance;
	}

	Super::BeginPlay();
}

void UOnsetNameplateComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("%s::EndPlay(%i)"), *GetPathName(), int(EndPlayReason));

	Super::EndPlay(EndPlayReason);
}

void UOnsetNameplateComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsActive() && CachedComponenetToTestRenderTime)
	{
		bCachedIsParentActorOnScreenAndVisible = (GetWorld()->TimeSeconds - CachedComponenetToTestRenderTime->GetLastRenderTimeOnScreen()) < (0.1f + DeltaTime);

		if (bCachedIsParentActorOnScreenAndVisible && NameplateMaxDrawDistance > 0.0)
		{
			bCachedIsParentActorOnScreenAndVisible = (GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation() - GetComponentLocation()).SizeSquared() < (NameplateMaxDrawDistance * NameplateMaxDrawDistance);
		}

		// SetVisibility internally checks if the visibility changed so we don't have to check.
		SetVisibility(bCachedIsParentActorOnScreenAndVisible);

		if (bCachedNameUpdated == false && bCachedIsParentActorOnScreenAndVisible && CachedPlayerState.IsValid())
		{
			if (UUserWidget* _Widget = GetWidget())
			{
				if (_Widget->Implements<UOnsetVoipNameWidgetInterface>())
				{
					bCachedNameUpdated = true;

					IOnsetVoipNameWidgetInterface::Execute_SetOwningPlayerState(_Widget, CachedPlayerState.Get());
				}
			}
		}
	}
}

bool UOnsetNameplateComponent::FindComponentToTestLastRenderTimeOnScreen()
{
	bCachedIsParentActorOnScreenAndVisible = false;
	CachedComponenetToTestRenderTime = nullptr;

	if (const AActor* AttachedParentActor = GetAttachParentActor())
	{
		// First try to see if a component was tagged to be used.
#if ENGINE_MINOR_VERSION >= 3
		CachedComponenetToTestRenderTime = AttachedParentActor->FindComponentByTag<UPrimitiveComponent>(TEXT("NameplateComponenetToTestRenderTime"));
#else
		const TArray<UActorComponent*> TaggedComponents = AttachedParentActor->GetComponentsByTag(UPrimitiveComponent::StaticClass(), TEXT("NameplateComponenetToTestRenderTime"));
		if (TaggedComponents.Num() > 0)
		{
			CachedComponenetToTestRenderTime = Cast<UPrimitiveComponent>(TaggedComponents[0]);
		}
#endif

		if (CachedComponenetToTestRenderTime == nullptr)
		{
			// If it's a character with a visible mesh use that.
			if (const ACharacter* Character = Cast<ACharacter>(AttachedParentActor))
			{
				if (Character->GetMesh() && Character->GetMesh()->IsVisible())
				{
					CachedComponenetToTestRenderTime = Character->GetMesh();
				}
			}

			// If not found look for the first visible USkeletalMeshComponent.
			if (CachedComponenetToTestRenderTime == nullptr)
			{
				TArray<USkeletalMeshComponent*> SKMComponents;
				AttachedParentActor->GetComponents<USkeletalMeshComponent>(SKMComponents);

				for (USkeletalMeshComponent* Component : SKMComponents)
				{
					if (Component->IsVisible())
					{
						CachedComponenetToTestRenderTime = Component;
						break;
					}
				}
			}

			// If still not found look for the first visible UStaticMeshComponent.
			if (CachedComponenetToTestRenderTime == nullptr)
			{
				TArray<UStaticMeshComponent*> SMComponents;
				AttachedParentActor->GetComponents<UStaticMeshComponent>(SMComponents);

				for (UStaticMeshComponent* Component : SMComponents)
				{
					if (Component->IsVisible())
					{
						CachedComponenetToTestRenderTime = Component;
						break;
					}
				}
			}

			UE_CLOG(AttachedParentActor->IsA(APawn::StaticClass()) == false, LogOnsetVoip, Error, TEXT("%s component is attached to a non pawn actor %s."), *GetName(), *AttachedParentActor->GetName());
		}

		UE_CLOG(CachedComponenetToTestRenderTime == nullptr, LogOnsetVoip, Warning, TEXT("Did not find a component to use for testing if pawn for nameplate component (%s) is rendered on screen."), *GetPathName());
		UE_CLOG(CachedComponenetToTestRenderTime != nullptr, LogOnsetVoip, VeryVerbose, TEXT("%s CachedComponenetToTestRenderTime = %s"), *GetName(), *GetNameSafe(CachedComponenetToTestRenderTime));
	}

	return CachedComponenetToTestRenderTime != nullptr;
}

bool UOnsetNameplateComponent::IsRenderedAndVisible() const
{
	return bCachedIsParentActorOnScreenAndVisible;
}
