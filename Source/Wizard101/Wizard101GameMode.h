// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Wizard101GameMode.generated.h"

UCLASS(minimalapi)
class AWizard101GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AWizard101GameMode();

	UFUNCTION(BlueprintCallable)
	void HostLanGame();

	UFUNCTION(BlueprintCallable)
	void JoinLanGame();
};



