// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrategyGameMode.h"
#include "StrategyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrategyGameMode::AStrategyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
