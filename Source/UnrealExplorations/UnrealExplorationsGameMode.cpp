// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealExplorationsGameMode.h"
#include "UnrealExplorationsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealExplorationsGameMode::AUnrealExplorationsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
