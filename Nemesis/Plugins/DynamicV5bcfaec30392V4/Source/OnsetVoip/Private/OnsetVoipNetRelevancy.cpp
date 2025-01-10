// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipNetRelevancy.h"
#include "OnsetVoipSettings.h"

const TCHAR* LexToString(EOnsetVoipNetRelevancy Relevancy)
{
	switch (Relevancy)
	{
	case EOnsetVoipNetRelevancy::RELEVANT_NONE:
		return TEXT("RELEVANT_NONE");
	case EOnsetVoipNetRelevancy::RELEVANT_2D:
		return TEXT("RELEVANT_2D");
	case EOnsetVoipNetRelevancy::RELEVANT_3D:
		return TEXT("RELEVANT_3D");
	default:
		check(false);
		return TEXT("Unknown");
	}
}

FOnsetVoipNetRelevancy::FOnsetVoipNetRelevancy()
{
	bUseDistanceBasedRelevancy = GetDefault<UOnsetVoipSettings>()->bUseDistanceBasedRelevancy;
	ReplicationDistanceSquared = GetDefault<UOnsetVoipSettings>()->MaxReplicationDistance;
	ReplicationDistanceSquared *= ReplicationDistanceSquared;
}

bool FOnsetVoipNetRelevancy::DoTalkersShareAnyVoiceChannel(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker) const
{
	for (const int32 ChannelId : ToVoipTalker->VoiceChannelIds)
	{
		if (FromVoipTalker->VoiceChannelIds.Contains(ChannelId))
		{
			if (!FromVoipTalker->IsMutedOnVoiceChannel(ChannelId))
			{
				return true;
			}
		}
	}
	return false;
}

bool FOnsetVoipNetRelevancy::DoTalkersShareVoiceChannel(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, const int32 VoiceChannelId)
{
	return FromVoipTalker->IsInVoiceChannel(VoiceChannelId) && ToVoipTalker->IsInVoiceChannel(VoiceChannelId) && !FromVoipTalker->IsMutedOnVoiceChannel(VoiceChannelId);
}

bool FOnsetVoipNetRelevancy::IsVoiceWorldRelevant(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, UNetConnection* ToConnection)
{
	if (ToConnection != nullptr)
	{
		// See if the receiving connection has an open channel for the sending pawn
		const TWeakObjectPtr<AActor> PawnActor(FromVoipTalker->GetPlayerState()->GetPawn());
		if (!ToConnection->ContainsActorChannel(PawnActor))
		{
			return false;
		}
	}

	// See if sender is muted on channel 0
	if (FromVoipTalker->IsMutedOnVoiceChannel(0))
	{
		return false;
	}

	// See if both are in channel 0
	if (!FromVoipTalker->IsInVoiceChannel(0) || !ToVoipTalker->IsInVoiceChannel(0))
	{
		return false;
	}

	// Check distances between both if enabled
	if (bUseDistanceBasedRelevancy)
	{
		const AActor* FromPawn = FromVoipTalker->GetPlayerState()->GetPawn();
		const AActor* ToPawn = ToVoipTalker->GetPlayerState()->GetPawn();

		if (FromPawn && ToPawn)
		{
			if ((FromPawn->GetActorLocation() - ToPawn->GetActorLocation()).SizeSquared() > ReplicationDistanceSquared)
			{
				return false;
			}
		}
	}

	return true;
}

EOnsetVoipNetRelevancy FOnsetVoipNetRelevancy::GetVoiceNetRelevancy(const UOnsetVoipTalker* FromVoipTalker, const UOnsetVoipTalker* ToVoipTalker, UNetConnection* ToConnection, const FOnsetVoipPacketPtr& VoipPacket)
{
	// Early out if required.
	if (!FromVoipTalker->ShouldSendVoiceTo(ToVoipTalker))
	{
		return EOnsetVoipNetRelevancy::RELEVANT_NONE;
	}

	if (VoipPacket->bClientHintVoiceChannelId)
	{
		bool bHintWorldChannel = false;

		for (const int32 ChannelId : VoipPacket->ClientHintVoiceChannels)
		{
			if (ChannelId <= 0)
			{
				// Remember client hinted world channel (0). Continue checking for 2d voice channels as they have a higher priority.
				bHintWorldChannel = true;
				continue;
			}
			else
			{
				// If we match a channel we are relevant in 2d.
				if (DoTalkersShareVoiceChannel(FromVoipTalker, ToVoipTalker, ChannelId))
				{
					return EOnsetVoipNetRelevancy::RELEVANT_2D;
				}
			}
		}

		// If get here we did not find a 2d voice channel. See if world channel is relevant otherwise exit with no relevancy.
		return (bHintWorldChannel && IsVoiceWorldRelevant(FromVoipTalker, ToVoipTalker, ToConnection)) ? EOnsetVoipNetRelevancy::RELEVANT_3D : EOnsetVoipNetRelevancy::RELEVANT_NONE;
	}

	return DoTalkersShareAnyVoiceChannel(FromVoipTalker, ToVoipTalker) ? EOnsetVoipNetRelevancy::RELEVANT_2D : (IsVoiceWorldRelevant(FromVoipTalker, ToVoipTalker, ToConnection) ? EOnsetVoipNetRelevancy::RELEVANT_3D : EOnsetVoipNetRelevancy::RELEVANT_NONE);
}
