// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SteamMultiplayerTry2Character.h"
#include "MainCharacter.generated.h"

UENUM(BlueprintType)
enum ETeam
{
	TeamA UMETA(DisplayName = "TeamA"),
	TeamB UMETA(DisplayName = "TeamB")
};

/**
 * 
 */
UCLASS()
class STEAMMULTIPLAYERTRY2_API AMainCharacter : public ASteamMultiplayerTry2Character
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	TEnumAsByte<ETeam> Team;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
