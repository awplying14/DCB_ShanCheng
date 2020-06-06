// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SCGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API ASCGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ASCGameMode();

	virtual void StartPlay() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

};
