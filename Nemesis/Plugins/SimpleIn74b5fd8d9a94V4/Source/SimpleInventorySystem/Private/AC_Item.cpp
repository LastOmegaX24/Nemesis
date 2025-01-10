// Copyright 2024,  Mecanes . All Rights Reserved.


#include "AC_Item.h"
#include "AC_ItemsBag.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UAC_Item::UAC_Item()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_Item::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_Item::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



bool UAC_Item::AddToBag(AActor* Actor, bool DestroyActor)
{
	if (Actor) {

		UAC_ItemsBag* Ac_ItemsBag_Var = Actor->GetComponentByClass<UAC_ItemsBag>();

		TArray<UAC_ItemsBag*> ArrayAc_ItemsBag;
		TArray<UAC_Item*> ArrayAc_Item_Var;

		Actor->GetComponents<UAC_ItemsBag>(ArrayAc_ItemsBag);
		this->GetOwner()->GetComponents<UAC_Item>(ArrayAc_Item_Var);

		if (!IsValid(Ac_ItemsBag_Var)) {
			return false;
		}

		if (ArrayAc_Item_Var.Num() != 1 && ArrayAc_ItemsBag.Num() != 1) {
			return false;
		}

		Ac_ItemsBag_Var->AddItem(this, DestroyActor);
		return true;
	}

	return false;
}

bool UAC_Item::hasSpaceFor(AActor* Actor)
{

	if (!Actor)
	{
		//UE_LOG(LogTemp, Display, TEXT("Il n y a pas d acteur"));
		return false;
	}

	UAC_ItemsBag* Ac_ItemsBag_Var = Actor->GetComponentByClass<UAC_ItemsBag>();

	TArray<UAC_ItemsBag*> ArrayAc_ItemsBag;
	TArray<UAC_Item*> ArrayAc_Item_Var;


	Actor->GetComponents<UAC_ItemsBag>(ArrayAc_ItemsBag);
	this->GetOwner()->GetComponents<UAC_Item>(ArrayAc_Item_Var);

	if (!IsValid(Ac_ItemsBag_Var)) {

		//UE_LOG(LogTemp, Display, TEXT("Pas de sac"));

		return false;
	}

	if (ArrayAc_Item_Var.Num() != 1 && ArrayAc_ItemsBag.Num() != 1) {

		//UE_LOG(LogTemp, Display, TEXT("1 - 1"));

		return false;
	}


	bool trouve = false;
	int32 index = 0;

	if (Ac_ItemsBag_Var->ItemsBag.Num() > 0)
	{
		//UE_LOG(LogTemp, Display, TEXT("Before boucle"));

		for (FS_Item It : Ac_ItemsBag_Var->ItemsBag)
		{
			//UE_LOG(LogTemp, Display, TEXT("if"));
			if (It.Name.Equals(Item.Name))
			{
				trouve = true;
				break;
			}
			++index;
		}



		if (trouve && Ac_ItemsBag_Var->ItemsBag[index].isStackable == true )
		{
			//UE_LOG(LogTemp, Display, TEXT("Trouver"));

			//Si tout est ok
			if (Ac_ItemsBag_Var->ItemsBag[index].Quantity < Ac_ItemsBag_Var->ItemsBag[index].Limit)
			{
				//UE_LOG(LogTemp, Display, TEXT("Parfait"));
				return true;
			}
			else
			{
				//UE_LOG(LogTemp, Display, TEXT("Bad boy"));
				return false;
			}
		}
		else
		{
			//UE_LOG(LogTemp, Display, TEXT("Rajoute ++ "));
			return true;
		}
	}
	else
	{
		//UE_LOG(LogTemp, Display, TEXT("Tableau +1"));
		return true;
	}

	return false;
}