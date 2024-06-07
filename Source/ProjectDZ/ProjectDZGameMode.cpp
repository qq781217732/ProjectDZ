// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDZGameMode.h"
#include "ProjectDZCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectDZGameMode::AProjectDZGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
