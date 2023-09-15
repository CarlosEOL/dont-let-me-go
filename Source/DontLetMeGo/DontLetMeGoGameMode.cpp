// Copyright Epic Games, Inc. All Rights Reserved.

#include "DontLetMeGoGameMode.h"
#include "DontLetMeGoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADontLetMeGoGameMode::ADontLetMeGoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
