// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyCPlusPlus_LSGameMode.h"
#include "MyCPlusPlus_LSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyCPlusPlus_LSGameMode::AMyCPlusPlus_LSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
