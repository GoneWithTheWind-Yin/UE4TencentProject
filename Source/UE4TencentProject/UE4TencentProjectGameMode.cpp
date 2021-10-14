// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4TencentProjectGameMode.h"
#include "UE4TencentProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4TencentProjectGameMode::AUE4TencentProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
