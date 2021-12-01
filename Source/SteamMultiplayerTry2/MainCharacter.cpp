// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Net/UnrealNetwork.h"

void AMainCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMainCharacter, Team);
	DOREPLIFETIME(AMainCharacter, IsDead);
}