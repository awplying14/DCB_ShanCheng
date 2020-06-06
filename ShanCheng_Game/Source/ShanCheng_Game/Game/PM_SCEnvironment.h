// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "PM_SCEnvironment.generated.h"

/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API UPM_SCEnvironment : public UPhysicalMaterial
{
	GENERATED_BODY()

public:
    // Ω≈≤Ω“Ù–ß
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GOAPhysicalMaterial")
    USoundBase* FootstepSound = nullptr;
};
