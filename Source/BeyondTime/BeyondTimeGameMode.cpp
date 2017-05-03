// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BeyondTime.h"
#include "BeyondTimeGameMode.h"
#include "BeyondTimeHUD.h"
#include "BeyondTimeCharacter.h"

ABeyondTimeGameMode::ABeyondTimeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter1"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABeyondTimeHUD::StaticClass();
}
