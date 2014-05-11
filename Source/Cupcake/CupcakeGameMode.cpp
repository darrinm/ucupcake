

#include "Cupcake.h"
#include "CupcakeGameMode.h"
#include "CupcakePlayerController.h"

ACupcakeGameMode::ACupcakeGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ACupcakePlayerController::StaticClass();
}


