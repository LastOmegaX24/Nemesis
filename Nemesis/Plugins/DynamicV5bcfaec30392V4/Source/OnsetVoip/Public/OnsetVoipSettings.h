// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OnsetVoipTalker.h"
#include "OnsetNameplateComponent.h"
#include "Blueprint/UserWidget.h"
#include "Sound/SoundEffectSource.h"
#include "Sound/SoundAttenuation.h"
#include "OnsetVoipSettings.generated.h"

// From engine VoiceConfig.h
UENUM(BlueprintType)
enum class EOnsetAudioEncodeHint : uint8
{
	/** Best for most VoIP applications where listening quality and intelligibility matter most */
	VoiceEncode_Voice,
	/** Best for broadcast/high-fidelity application where the decoded audio should be as close as possible to the input */
	VoiceEncode_Audio
};

USTRUCT(BlueprintType)
struct ONSETVOIP_API FNameplateAttachParam
{
	GENERATED_USTRUCT_BODY()

	// The socket to which the namteplate widget component attaches to.
	UPROPERTY(EditAnywhere, Category = "Nameplate Attachment Parameters")
	FName AttachSocketName = NAME_None;

	// Relative attach location of the component.
	UPROPERTY(EditAnywhere, Category = "Nameplate Attachment Parameters")
	FVector RelativeAttachLocation = FVector::ZeroVector;

	// If this is true half of the bounds/size of the pawn/character is added to the relative attach location to estimate it's above the pawn/character visible mesh.
	UPROPERTY(EditAnywhere, Category = "Nameplate Attachment Parameters")
	bool bAdjustAttachZAccordingToActorBounds = false;
};

USTRUCT(BlueprintType)
struct ONSETVOIP_API FVoiceEncoderSettings
{
	GENERATED_USTRUCT_BODY()

	// Copied setting from VoiceConfig.h, used to tell encoder what type of audio is being encoded.
	UPROPERTY(EditAnywhere, Category = "Voice Encoder")
	EOnsetAudioEncodeHint EncodingHint = EOnsetAudioEncodeHint::VoiceEncode_Voice;

	// Enables advanced encoder settings.
	UPROPERTY(EditAnywhere, Category = "Voice Encoder")
	bool bAdvancedEncoderSettings = false;

	// Encoder variable bitrate.
	UPROPERTY(EditAnywhere, Category = "Voice Encoder", meta = (EditCondition = "bAdvancedEncoderSettings", EditConditionHides))
	bool bEnableVBR = true;

	// Encoder algorithmic complexity. A higher value will results in better quality but also requires more CPU usage.
	UPROPERTY(EditAnywhere, Category = "Voice Encoder", meta = (EditCondition = "bAdvancedEncoderSettings", EditConditionHides, ClampMin = 0, ClampMax = 10))
	int32 Complexity = 10;

	// Encoder bitrate. See https://wiki.xiph.org/Opus_Recommended_Settings Higher values may require more bandwidth.
	UPROPERTY(EditAnywhere, Category = "Voice Encoder", meta = (EditCondition = "bAdvancedEncoderSettings", EditConditionHides, ClampMin = 500, ClampMax = 512000))
	int32 BitRate = 24000;
};

/**
 * 
 */
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Onset VoIP Settings"))
class ONSETVOIP_API UOnsetVoipSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	UOnsetVoipSettings();

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ToolTip = "Microphone capture sample rate. Possible values are 8000, 12000, 16000, 24000 and 48000. Higher values may require more bandwidth."))
	int32 VoiceCaptureSampleRate;

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ToolTip = "Number of microphone capturing channels. Possible values are 1 (mono) or 2 (stereo), default: 1. Stereo requires more bandwidth.", ClampMin = 1, ClampMax = 2))
	int32 VoiceCaptureChannels;

	UPROPERTY(config, EditAnywhere, Category = "Voice")
	FVoiceEncoderSettings VoiceEncoderSettings;

	// This setting let's you specifiy a child class of UOnsetVoipTalker. Leave it as is by default.
	UPROPERTY(config, EditAnywhere, Category = "Voice")
	TSubclassOf<UOnsetVoipTalker> DefaultOnsetVoipTalkerClass;
	
	UPROPERTY(config, EditAnywhere, Category = "Voice|Playback")
	TSoftObjectPtr<USoundAttenuation> DefaultSoundAttenuation3D;

	UPROPERTY(config, EditAnywhere, Category = "Voice|Playback")
	TSoftObjectPtr<USoundAttenuation> DefaultSoundAttenuation2D;

	// Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 3D space.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Playback")
	TSoftObjectPtr<USoundEffectSourcePresetChain> DefaultSourceEffectPresetChain3D;
	
	// Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 2D space (voice channel).
	UPROPERTY(config, EditAnywhere, Category = "Voice|Playback")
	TSoftObjectPtr<USoundEffectSourcePresetChain> DefaultSourceEffectPresetChain2D;

	// What widget to use for the nameplate widget component on dynamic creation. If you attach a nameplate component manually then it will not use this but rather the widget class already set in the component details.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Nameplate")
	TSoftClassPtr<UUserWidget> DefaultNameplateWidget;

	// Default nameplate component class that will be used for dynamic creation and attachment if no component was added manaully by the user on the pawn/character class.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Nameplate")
	TSubclassOf<UOnsetNameplateComponent> DefaultNameplateComponentClass;

	// For dynamic creation and attachment of the nameplate component you can specify some rules here.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Nameplate")
	TArray<FNameplateAttachParam> NameplateAttachParams;
	
	// The default nameplate draw distance or 0.0 to
	UPROPERTY(config, EditAnywhere, Category = "Voice|Nameplate")
	double NameplateMaxDrawDistance;
	
	// Maximum time we allow to pass for received voice data to play.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced", meta = (ClampMin = 0.3, ClampMax = 10.0))
	double MaxBufferPlaybackDelay;
	
	// Number of frames to wait to call Stop() on an UOnsetVoipAudioComponent if there is no audio to play. 0 to disable.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced", meta = (ClampMin = 0))
	int32 NumberOfFramesToStopPlaybackIfNoAudio;
	
	// Enable for the server to do additional distance checks between two players for voice packet replication in the world channel (0).
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced")
	bool bUseDistanceBasedRelevancy;

	// The distance to check for if two players are relevant to each other for the world channel (0). In Unreal Units (centimeter).
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced", meta = (EditCondition = "bUseDistanceBasedRelevancy", EditConditionHides, ClampMin = 1.0))
	double MaxReplicationDistance;

	// Set the default volume of sound waves that play voice.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced", meta = (ClampMin = 0.0))
	float DefaultSoundWaveVolume;

	// Path to where the ffmpeg executable can be found. Used for ConvertAudioFile node. Required for audio codecs recordings like mp3.
	UPROPERTY(config, EditAnywhere, Category = "Voice|Advanced", meta = (ToolTip = "The file path to the FFmpeg executable.", RelativeToGameDir))
	FDirectoryPath FFmpegPath;
};
