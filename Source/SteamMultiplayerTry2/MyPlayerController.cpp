#include "MyPlayerController.h"

void AMyPlayerController::PawnLeavingGame()
{
	Super::PawnLeavingGame();
	OnPawnLeftGame();
}
