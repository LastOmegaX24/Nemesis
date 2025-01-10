// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipAudioComponent.h"
#include "OnsetVoip.h"
#include "OnsetVoipSettings.h"
#include "UObject/UObjectIterator.h" // For TObjectRange

#if !UE_SERVER
FAutoConsoleCommandWithWorldAndArgs _CmdNumberOfFramesToStopPlaybackIfNoAudio(TEXT("voice.NumberOfFramesToStopPlaybackIfNoAudio"), TEXT("Number of frames to wait to call Stop() on an UOnsetVoipAudioComponent if there is no audio to play. 0 to disable.\n")TEXT("0: Disable"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateLambda([](const TArray<FString>& Args, UWorld* World)
{
	if (Args.Num() == 0)
	{
		OnsetVoip::ConsoleLog(World, TEXT("voice.NumberOfFramesToStopPlaybackIfNoAudio <frames>"));
		return;
	}

	const int32 Frames = FCString::Atoi(*Args[0]);
	int32 NumberOfComponentsUpdated = 0;
	for (UOnsetVoipAudioComponent* VoipAudioComponent : TObjectRange<UOnsetVoipAudioComponent>())
	{
		VoipAudioComponent->SetNumberOfFramesToStopPlaybackIfNoAudio(Frames);
		NumberOfComponentsUpdated++;
	}

	OnsetVoip::ConsoleLog(World, FString::Printf(TEXT("%i components were changed to to %i frames"), NumberOfComponentsUpdated, Frames));
}));
#endif

UOnsetVoipAudioComponent::UOnsetVoipAudioComponent()
{
	// Allow ticks but don't start with ticking. Component tick start managed by the voip talker.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	// Let the engine stop it when the owner is destroyed. This the case when a pawn owns this component.
	bStopWhenOwnerDestroyed = true;

	// Don't automatically have the engine destroy this component when there's no audio.
	bAutoDestroy = false;
	
	// Don't auto play. Playback managed by voip talker.
	bAutoActivate = false;

	// Prioritize voice audio components.
	bAlwaysPlay = true;
	bIsVirtualized = false;

	DefaultOnsetVoipSoundWaveClass = UOnsetVoipSoundWave::StaticClass();
}

#if !UE_SERVER
void UOnsetVoipAudioComponent::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		VoipSoundWave = NewObject<UOnsetVoipSoundWave>(this, DefaultOnsetVoipSoundWaveClass);
		VoipSoundWave->AttenuationSettings = GetDefault<UOnsetVoipSettings>()->DefaultSoundAttenuation3D.LoadSynchronous();
		VoipSoundWave->SourceEffectChain = GetDefault<UOnsetVoipSettings>()->DefaultSourceEffectPresetChain3D.LoadSynchronous();

		SetSound(VoipSoundWave);

		NumberOfFramesToStopPlaybackIfNoAudio = GetDefault<UOnsetVoipSettings>()->NumberOfFramesToStopPlaybackIfNoAudio;
	}
}

void UOnsetVoipAudioComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (NumberOfFramesToStopPlaybackIfNoAudio > 0)
	{
		if (VoipSoundWave->GetAvailableAudioByteCount() == 0)
		{
			StarvedDataCount++;
		}

		if (StarvedDataCount > NumberOfFramesToStopPlaybackIfNoAudio)
		{
			UE_LOG(LogOnsetVoip, Verbose, TEXT("Stopped playing %s (Is2D %s)."), *GetName(), ComponentHasTag(TEXT("2DVoice")) ? TEXT("true") : TEXT("false"));

			Stop();
			SetComponentTickEnabled(false);

			StarvedDataCount = 0;
		}
	}
}

#if !UE_BUILD_SHIPPING
void UOnsetVoipAudioComponent::BeginPlay()
{
	UE_LOG(LogOnsetVoip, Verbose, TEXT("%s::BeginPlay()"), *GetName());

	Super::BeginPlay();
}

void UOnsetVoipAudioComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogOnsetVoip, Verbose, TEXT("%s::EndPlay(%i)"), *GetName(), int(EndPlayReason));

	Super::EndPlay(EndPlayReason);
}
#endif /* !UE_BUILD_SHIPPING */
#endif /* !UE_SERVER */

FString UOnsetVoipAudioComponent::Describe() const
{
	return FString::Printf(TEXT("%s: Owner: %s AttachParentActor: %s [SoundWave: %s Is2D: %s]"),
		*GetPathName(), *GetPathNameSafe(GetOwner()), *GetPathNameSafe(GetAttachParentActor()), *VoipSoundWave->Describe(), ComponentHasTag(TEXT("2DVoice")) ? TEXT("true") : TEXT("false"));
}
