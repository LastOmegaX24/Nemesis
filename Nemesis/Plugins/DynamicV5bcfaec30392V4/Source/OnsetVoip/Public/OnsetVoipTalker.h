// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnsetVoipSoundWave.h"
#include "OnsetVoipAudioComponent.h"
#if ONSETVOIP_ENABLE_VOICE_PROCESSING
#include "VoiceModule.h"
#include "OnsetVoipPacket.h"
#endif
#include "OnsetNameplateComponent.h"
#include "OnsetVoipTalker.generated.h"

/**
 * A UOnsetVoipTalker is automatically created and destroyed for each APlayerState.
 * It handles the voice for that specific player.
 */
UCLASS(Blueprintable)
class ONSETVOIP_API UOnsetVoipTalker : public UObject
{
	GENERATED_BODY()

public:
	//~ Begin UObject Interface
	virtual void PostInitProperties() override;
	//~ End UObject Interface

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoipTalkingStateChange, UOnsetVoipTalker*, VoipTalker, bool, bIsTalking, bool, bIs2D);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVoipAudioDataReceived, UOnsetVoipTalker*, VoipTalker, const TArray<uint8>&, AudioData, bool, bIs2D);
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FNativeOnVoipMicrophoneAudioCaptured, UOnsetVoipTalker*/* VoipTalker*/, const TArrayView<uint8>&/* AudioData*/, bool /*bIs2D*/);

	// Returns true if currently speaking.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Shared")
	virtual bool IsTalking() const;

	// Returns true if the last received voip packet was a 2D voice. This means that we heard this talker through a voice channel we share with them.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Shared")
	virtual bool IsLastReceivedTalkingState2D() const;

	// Returns the amplitude like UOnsetVoipLocalPlayerSubsystem::GetCurrentAmplitude().
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Shared")
	virtual float GetCurrentAmplitude() const;

	// Gets the owning player state of this talker.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Shared")
	virtual APlayerState* GetPlayerState() const;

	// Called when this voip talker starts or stops talking.
	UPROPERTY(BlueprintAssignable, Category = "OnsetVoip|Shared")
	FOnVoipTalkingStateChange OnVoipTalkingStateChange;

	/*
	* Called when this voip talker received new audio data. Format is raw signed 16-bit PCM.
	* Number of channels and sample rate are defined in UOnsetVoipSettings::VoiceCaptureChannels and VoiceCaptureSampleRate.
	* To cancel the audio from being played use CancelReceivedAudioData() inside this delegate.
	*/
	UPROPERTY(BlueprintAssignable, Category = "OnsetVoip|Shared")
	FOnVoipAudioDataReceived OnVoipAudioDataReceived;

	// Same as above but optimized without a data copy using TArrayView for C++. To cancel the audio from being played use CancelReceivedAudioData() inside this delegate.
	FNativeOnVoipMicrophoneAudioCaptured Native_OnVoipAudioDataReceived;

	// Client/listen server only: Call this function inside any OnVoipAudioDataReceived delegate to stop the audio from being played by the plugin.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Shared")
	virtual void CancelReceivedAudioData();

	// Mute this talker audio. Must be called on the client of the player who wants to mute this talker.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Client")
	virtual void SetMuted(bool bMute);
	
	// Returns true if this talker is muted.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Client")
	virtual bool IsMuted() const;

	// Server only: Same as SetMutedForVoipTalker but with a player state.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual void SetMutedForPlayerState(bool bMute, APlayerState* PlayerState);

	// Server only: You can mute this talker for another voip talker.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual void SetMutedForVoipTalker(bool bMute, UOnsetVoipTalker* OtherVoipTalker);

	// Server only: Returns true if this talker is muted for another talker.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual bool IsMutedForVoipTalker(UOnsetVoipTalker* OtherVoipTalker) const;

	// Server only: Same as IsMutedForVoipTalker but with a player state.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual bool IsMutedForPlayerState(APlayerState* PlayerState) const;
	
	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<UOnsetVoipTalker>> MutedVoipTalkers;

	/*
	* This function can enable or disable the operation of a voip talker.
	* Calling this on a **server** will stop this talker from sending voice data to anyone.
	* Calling this on a **client** will stop this talker from playing/processing any of their audio data.
	*
	* This function is not the same as SetMuted. You probably just want to use SetMuted for muting audio. Especially on a listen server.
	*/
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Shared")
	virtual void SetVoipEnabled(bool bEnable);
	
	// Returns true if talker is enabled. See SetVoipEnabled for more information.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Shared")
	virtual bool IsVoipEnabled() const;

	/*
	* **SERVER ONLY, do not call on client**
	* 
	* This function adds a player/talker to a voice channel or removes them. Voice channels are a server side concept. Meaning only the server knows what channels a talker is part of.
	* 
	* The ChannelId is an integer used to determine what players share the same channel. This can be any positive integer you like and is used purely for you to manage the channel ids.
	* If two talkers are in the same channel they are able to hear each other as a 2D voice.
	* ChannelId 0 is the world/3d/proximity channel. All talkers are automatically in channel 0. If you remove someone from channel 0 they will no longer participate in world/3d/proximity voice.
	* 
	* Set bAdd to false to remove them from a channel. No further cleanup is required.
	*/
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual bool SetVoiceChannel(int32 ChannelId, bool bAdd);

	/*
	* **SERVER ONLY, do not call on client**
	* 
	* Test if a player is in a specific voice channel. This only works when called on the server. Voice channel 0 is the world / 3d channel.
	* See SetVoiceChannel for more information.
	*/
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Server")
	virtual bool IsInVoiceChannel(int32 ChannelId) const;

	// Server only: Voice channel ids of this talker. Only used on the server not on the client. Use helper functions above to add/remove voice channels.
	UPROPERTY(BlueprintReadOnly, Category = "OnsetVoip|Server")
	TArray<int32> VoiceChannelIds;

	// Server only: Mute this talker on a specific voice channel id. This only works when called on the server.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip|Server")
	virtual void SetMutedOnVoiceChannel(bool bMute, int32 ChannelId);
	
	// Server only: Check if this talker is muted on a voice channel id. This only works when called on the server.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Server")
	virtual bool IsMutedOnVoiceChannel(int32 ChannelId) const;

	// Server only: Voice channel ids that his talker is muted on and cannot speak but listen. Only used on the server not on the client. Use helper functions above to mute on voice channels.
	UPROPERTY(BlueprintReadOnly, Category = "OnsetVoip|Server")
	TArray<int32> MutedVoiceChannelIds;

	// Get the audio component used for talking. Either 2D or 3D. Can be null if this talker has not spoken yet/did not receive any voip data yet.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip|Client")
	virtual UOnsetVoipAudioComponent* GetVoiceAudioComponent(bool bAudio2D) const;

	// Used to override the audio component class for 2D voice.
	UPROPERTY(EditDefaultsOnly, Category = "OnsetVoip|Client")
	TSubclassOf<UOnsetVoipAudioComponent> DefaultOnsetVoipAudioComponentClass2D = UOnsetVoipAudioComponent::StaticClass();
	
	// Used to override the audio component class for 3D voice.
	UPROPERTY(EditDefaultsOnly, Category = "OnsetVoip|Client")
	TSubclassOf<UOnsetVoipAudioComponent> DefaultOnsetVoipAudioComponentClass3D = UOnsetVoipAudioComponent::StaticClass();

	// Called by the engine when the player state pawn changes.
	UFUNCTION()
	void OnPlayerStatePawnSet(APlayerState* ChangedPlayerState, APawn* NewPlayerPawn, APawn* OldPlayerPawn);

	// Server only: Can be overriden to do some custom checks if this talker should send voice to OtherVoipTalker.
	virtual bool ShouldSendVoiceTo(const UOnsetVoipTalker* OtherVoipTalker) const;

	
#if ONSETVOIP_ENABLE_VOICE_PROCESSING // See OnsetVoip.Build.cs for this definition.

	// Creating a voice decoder. Use on demand.
	virtual TSharedPtr<IVoiceDecoder> GetOrCreateVoiceDecoder();

	// Called for processing decompressing new audio data and updating the talking state.
	virtual void ProcessVoiceData(const uint8* InAudioData, const int32 InAudioDataSize, bool bIs2D, float InCurrentAmplitude, class UOnsetVoipWorldSubsystem* OnsetVoipWorldSubsystem);
	virtual void ProcessVoiceData(const FOnsetVoicePacketWrapper& PacketWrapper, class UOnsetVoipWorldSubsystem* OnsetVoipWorldSubsystem);

	// Called by the voip world subsystem to update talking state.
	virtual void UpdateTalkingState(const double& CurrentTime);

protected:
	// Used internally to set cached talking state and fire delegates.
	virtual void InternalSetTalkingState(bool bInNewTalking);

#endif

	// See SetVoipEnabled.
	bool bVoipEnabled = true;

	// See SetMuted.
	bool bMuted = false;

	// Cached value whether talker can speak in 3d world. (Voice channel 0)
	bool bVoiceWorldEnabled = true;

	// Tracks whether this talker currently speaks.
	bool bCachedTalking = false;

	// Time when the last voip data was received for this talker.
	double LastReceivedVoipData = 0.0;

	// Whether the last received voip packet was in 2d space from voice channels.
	bool bLastReceivedTalking2D = false;

	// See CancelReceivedAudioData()
	bool bCancelReceivedAudioData = false;

	// See GetCurrentAmplitude()
	float CachedAmplitude = 0.0f;

	// Gets or creates the audio component which will be used for playing the voice data when receving voice data.
	virtual UOnsetVoipAudioComponent* InternalGetOrCreateAudioComponent(bool bIs2D);

	// Reference to the nameplate component.
	// Attached and owned by the pawn, therefore the "Cached" prefix.
	UPROPERTY(Transient)
	TObjectPtr<UOnsetNameplateComponent> CachedNameplateComponent = nullptr;

	// Reference to the audio component of this players pawn. Used for 3d playback, created and attached to the pawn on demand.
	// Attached and owned by the pawn, therefore the "Cached" prefix.
	UPROPERTY(Transient)
	TObjectPtr<UOnsetVoipAudioComponent> CachedAudioComponent3D = nullptr;

	// Reference to the audio component, used for 2d playback in voice channels.
	// Managed and own by this voip talker object.
	UPROPERTY(Transient)
	TObjectPtr<UOnsetVoipAudioComponent> AudioComponent2D = nullptr;

#if ONSETVOIP_ENABLE_VOICE_PROCESSING
private:
	TSharedPtr<IVoiceDecoder> VoiceDecoder;
#endif
};
