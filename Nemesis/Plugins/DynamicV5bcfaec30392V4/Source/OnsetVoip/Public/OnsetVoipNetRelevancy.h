// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnsetVoipTalker.h"
#include "OnsetVoipPacket.h"

// Different possible relvancy states between two talkers/players.
enum class EOnsetVoipNetRelevancy
{
	// Not relevant at all.
	RELEVANT_NONE,

	// Relevant in 2d space. (voice channels)
	RELEVANT_2D,

	// Relevant in 3d space. (world channel 0)
	RELEVANT_3D
};

const TCHAR* LexToString(EOnsetVoipNetRelevancy Relevancy);

/**
 * Custom data channel used for transmitting voice data.
 */
class ONSETVOIP_API FOnsetVoipNetRelevancy : public FNoncopyable
{
public:
	FOnsetVoipNetRelevancy();
	virtual ~FOnsetVoipNetRelevancy() { }

	// Returns true if both talkers share any voice channel.
	virtual bool DoTalkersShareAnyVoiceChannel(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker) const;

	// Returns true if both talkers share a specific channel.
	virtual bool DoTalkersShareVoiceChannel(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, const int32 VoiceChannelId);

	// Returns true of both talkers are relevant in world. ToConnection is used to check if receiver has an open actor channel to FromVoipTalker, if not then they are not relevant probably due to net cull distance.
	virtual bool IsVoiceWorldRelevant(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, UNetConnection* ToConnection);

	// Determines the voice relevancy between to talkers.
	virtual EOnsetVoipNetRelevancy GetVoiceNetRelevancy(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, UNetConnection* ToConnection, const FOnsetVoipPacketPtr& VoipPacket);

protected:
	// See UOnsetVoipSettings::bUseDistanceBasedRelevancy
	bool bUseDistanceBasedRelevancy;
	double ReplicationDistanceSquared;
};
