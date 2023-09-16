// Copyright Epic Games, Inc. All Rights Reserved.

#include "Jam2023GameMode.h"
#include "Jam2023Character.h"
#include "UObject/ConstructorHelpers.h"

AJam2023GameMode::AJam2023GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
