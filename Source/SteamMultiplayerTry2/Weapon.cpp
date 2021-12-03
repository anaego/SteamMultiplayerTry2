// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "MainCharacter.h"
#include "Net/UnrealNetwork.h"

#include <basetyps.h>

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeapon, IsPickedUp);
}

void AWeapon::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	// If it is available for picking up
	if (!IsPickedUp)
	{
		// if that actor is AMainCharacter
		AMainCharacter* OtherCharacter = Cast<AMainCharacter>(OtherActor);
		if (OtherCharacter)
		{
			// call pick up function on another actor
			OtherCharacter->PickUpWeapon(this);
		}
	}
}



