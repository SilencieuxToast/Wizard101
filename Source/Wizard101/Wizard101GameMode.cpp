// Copyright Epic Games, Inc. All Rights Reserved.

#include "Wizard101GameMode.h"
#include "Wizard101Character.h"
#include "UObject/ConstructorHelpers.h"

//"/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"
AWizard101GameMode::AWizard101GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}



void AWizard101GameMode::HostLanGame()
{
	GetWorld()->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void AWizard101GameMode::JoinLanGame()
{
	APlayerController *PC = GetGameInstance()->GetFirstLocalPlayerController();
	if (PC)
	{
		PC->ClientTravel("192.168.1.100", TRAVEL_Absolute);
	}
}