// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SteamMultiplayerTry2Character.h"
#include "MainCharacter.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = ApplyTeamSkin)
	ETeam Team = ETeam::TeamA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool IsDead = false;
	
	UFUNCTION(BlueprintImplementableEvent) 
	void ApplyTeamSkin(ETeam OldTeam);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
