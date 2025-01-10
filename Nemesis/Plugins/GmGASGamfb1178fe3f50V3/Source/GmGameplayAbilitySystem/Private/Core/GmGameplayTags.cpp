// Copyright 2024 Dev.GaeMyo. All Rights Reserved.

#include "Core/GmGameplayTags.h"

#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"
// #include "GmUCF_LogChannels.h"

namespace GmFPS_GameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Sprint, "InputTag.Sprint", "Sprint input.");
	
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayTag_WantsToCrouch, "GameplayTag.WantsToCrouch", "True, if the character wants to crouch.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayTag_IsCrouching, "GameplayTag.IsCrouching", "True, if the character is crouching.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayTag_IsSprinting, "GameplayTag.IsSprinting", "True, if the character is sprinting.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayTag_IsJumping, "GameplayTag.IsJumping", "True, if the character is jumping.");
}

namespace GmGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability failed to activate because its owner is dead.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability failed to activate because it is on cool down.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability failed to activate because it did not pass the cost checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability failed to activate because tags are blocking it.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability failed to activate because tags are missing.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Networking, "Ability.ActivateFail.Networking", "Ability failed to activate because it did not pass the network checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability failed to activate because of its activation group.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_MagazineFull, "Ability.ActivateFail.MagazineFull", "Ability failed to activate because of its activation group.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_NoSpareAmmo, "Ability.ActivateFail.NoSpareAmmo", "Ability failed to activate because of its activation group.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Behavior_SurvivesDeath, "Ability.Behavior.SurvivesDeath", "An ability with this type tag should not be canceled due to death.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Move, "InputTag.Move", "Move input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Mouse, "InputTag.Look.Mouse", "Look (mouse) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Stick, "InputTag.Look.Stick", "Look (stick) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Crouch, "InputTag.Crouch", "Crouch input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Jump, "InputTag.Jump", "Crouch input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Ability_Run, "InputTag.Ability.Run", "Crouch input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_AutoRun, "InputTag.AutoRun", "Auto-run input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Weapon_ADS, "InputTag.Weapon.ADS", "InputTag Weapon Fire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Weapon_Fire, "InputTag.Weapon.Fire", "InputTag Weapon Fire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Weapon_Reload, "InputTag.Weapon.Reload", "InputTag Weapon Fire.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_Spawned, "InitState.Spawned", "1: Actor/component has initially spawned and can be extended");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_DataAvailable, "InitState.DataAvailable", "2: All required data has been loaded/replicated and is ready for initialization");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_DataInitialized, "InitState.DataInitialized", "3: The available data has been initialized for this actor/component, but it is not ready for full gameplay");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InitState_GameplayReady, "InitState.GameplayReady", "4: The actor/component is fully ready for active gameplay");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Death, "GameplayEvent.Death", "Event that fires on death. This event only fires on the server.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Reset, "GameplayEvent.Reset", "Event that fires once a player reset is executed.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_RequestReset, "GameplayEvent.RequestReset", "Event to request a player's pawn to be instantly replaced with a new one at a valid spawn location.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Damage, "SetByCaller.Damage", "SetByCaller tag used by damage gameplay effects.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(SetByCaller_Heal, "SetByCaller.Heal", "SetByCaller tag used by healing gameplay effects.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cheat_GodMode, "Cheat.GodMode", "GodMode cheat is active on the owner.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cheat_UnlimitedHealth, "Cheat.UnlimitedHealth", "UnlimitedHealth cheat is active on the owner.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Crouching, "Status.Crouching", "Target is crouching.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_AutoRunning, "Status.AutoRunning", "Target is auto-running.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death, "Status.Death", "Target has the death status.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dying, "Status.Death.Dying", "Target has begun the death process.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Status_Death_Dead, "Status.Death.Dead", "Target has finished the death process.");
						  
	// These are mapped to the movement modes inside GetMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Walking, "Movement.Mode.Walking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_NavWalking, "Movement.Mode.NavWalking", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Falling, "Movement.Mode.Falling", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Swimming, "Movement.Mode.Swimming", "Default Character movement tag");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Flying, "Movement.Mode.Flying", "Default Character movement tag");

	// When extending GmUCF, you can create your own movement modes but you need to update GetCustomMovementModeTagMap()
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Movement_Mode_Custom, "Movement.Mode.Custom", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::CustomMovementModeTagMap.");

	// Gameplay Cue
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Character_DamageTaken, "GameplayCue.Character.DamageTaken", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Character_DamageTaken.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Character_Run, "GameplayCue.Character.Run", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Character_DamageTaken.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_ShooterGame_Interact_WeaponPickup, "GameplayCue.ShooterGame.Interact.WeaponPickup", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Character_DamageTaken.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Weapon_Rifle_Fire, "GameplayCue.Weapon.Rifle.Fire", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Weapon_Rifle_Fire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Weapon_Pistol_Fire, "GameplayCue.Weapon.Pistol.Fire", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Weapon_Rifle_Fire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Weapon_Shotgun_Fire, "GameplayCue.Weapon.Shotgun.Fire", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Weapon_Rifle_Fire.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayCue_Weapon_Rifle_Impact, "GameplayCue.Weapon.Rifle.Impact", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayCue_Weapon_Rifle_Impact.");

	// GameplayEffect
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Basic, "GameplayEffect.DamageType.Basic", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Pistol, "GameplayEffect.DamageType.Pistol", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Rifle, "GameplayEffect.DamageType.Rifle", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Shotgun, "GameplayEffect.DamageType.Shotgun", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Grenade, "GameplayEffect.DamageType.Grenade", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageType_Melee, "GameplayEffect.DamageType.Melee", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageType_Basic.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageTrait_Instant, "GameplayEffect.DamageTrait.Instant", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageTrait_Instant.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEffect_DamageTrait_Periodic, "GameplayEffect.DamageTrait.Periodic", "This is invalid and should be replaced with custom tags.  See GmGameplayTags::GameplayEffect_DamageTrait_Periodic.");

	// Shooter Game
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_ShooterGame_Weapon_MagazineAmmo, "GmUCF.ShooterGame.Weapon.MagazineAmmo",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::GmUCF_ShooterGame_Weapon_MagazineAmmo.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_ShooterGame_Weapon_MagazineSize, "GmUCF.ShooterGame.Weapon.MagazineSize",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_ShooterGame_Weapon_SpareAmmo, "GmUCF.ShooterGame.Weapon.SpareAmmo",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// HUD
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_HUD_Slot_Equipment, "GmUCF.HUD.Slot.Equipment",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_HUD_Slot_Recticle,
		"GmUCF.HUD.Slot.Reticle", "");
	
	// Ability Tags
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_WeaponFire, "Ability.Type.Action.WeaponFire",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Reload, "Ability.Type.Action.Reload",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Passive_AutoReload, "Ability.Type.Passive.AutoReload",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Emote, "Ability.Type.Action.Emote",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_ADS, "Ability.Type.Action.ADS",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Grenade, "Ability.Type.Action.Grenade",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Dash, "Ability.Type.Action.Dash",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Run, "Ability.Type.Action.Run",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_Type_Action_Jump, "Ability.Type.Action.Jump",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// Event
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_WeaponFire, "Event.Movement.WeaponFire",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_ADS, "Event.Movement.ADS",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_Reload, "Event.Movement.Reload",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_Dash, "Event.Movement.Dash",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_Run, "Event.Movement.Run",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Movement_Melee, "Event.Movement.Melee",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// AnimEffect
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(AnimEffect_Footstep_Land, "AnimEffect.Footstep.Land",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// Cosmetics
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cosmetic_AnimationStyle_Masculine, "Cosmetic.AnimationStyle.Masculine",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cosmetic_AnimationStyle_Feminine, "Cosmetic.AnimationStyle.Feminine",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Cosmetic_BodyStyle_Medium, "Cosmetic.BodyStyle.Medium",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// Misc
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GmUCF_Player, "GmUCF.Player",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// Gameplay
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Gameplay_Msg_ADS, "Gameplay.Msg.ADS",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");

	// Gameplay
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Gameplay_Msg_Run, "Gameplay.Msg.Run",
		"This is invalid and should be replaced with custom tags.  See GmGameplayTags::Ability_Type_Action_WeaponFire.");
	
	// Unreal Movement Modes
	const TMap<uint8, FGameplayTag> MovementModeTagMap =
	{
		{ MOVE_Walking, Movement_Mode_Walking },
		{ MOVE_NavWalking, Movement_Mode_NavWalking },
		{ MOVE_Falling, Movement_Mode_Falling },
		{ MOVE_Swimming, Movement_Mode_Swimming },
		{ MOVE_Flying, Movement_Mode_Flying },
		{ MOVE_Custom, Movement_Mode_Custom }
	};

	// Custom Movement Modes
	const TMap<uint8, FGameplayTag> CustomMovementModeTagMap =
	{
		// Fill these in with your custom modes
	};

	FGameplayTag FindTagByString(const FString& TagString, const bool bMatchPartialString)
	{
		const UGameplayTagsManager& Manager{UGameplayTagsManager::Get()};
		FGameplayTag Tag{Manager.RequestGameplayTag(FName(*TagString), false)};

		if (!Tag.IsValid() && bMatchPartialString)
		{
			FGameplayTagContainer AllTags;
			Manager.RequestAllGameplayTags(AllTags, true);

			for (const FGameplayTag& TestTag : AllTags)
			{
				if (TestTag.ToString().Contains(TagString))
				{
					// UE_LOG(LogGmUCF, Display,
						// L"Could not find exact match for tag [%s] but found partial match on tag [%s].", *TagString,
						// *TestTag.ToString());
					Tag = TestTag;
					break;
				}
			}
		}

		return Tag;
	}
}
