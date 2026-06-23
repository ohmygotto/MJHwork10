// Copyright Epic Games, Inc. All Rights Reserved.

#include "MJHwork10GameMode.h"
#include "MJHwork10Character.h"
#include "UObject/ConstructorHelpers.h"

AMJHwork10GameMode::AMJHwork10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
