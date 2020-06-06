// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Base/AnimationManagerBase.h"
#include "SCAnimationManager.generated.h"

/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API ASCAnimationManager : public AAnimationManagerBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
