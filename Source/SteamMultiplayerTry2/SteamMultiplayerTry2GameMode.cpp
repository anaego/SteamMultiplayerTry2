// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamMultiplayerTry2GameMode.h"
#include "SteamMultiplayerTry2Character.h"
#include "UObject/ConstructorHelpers.h"

ASteamMultiplayerTry2GameMode::ASteamMultiplayerTry2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
