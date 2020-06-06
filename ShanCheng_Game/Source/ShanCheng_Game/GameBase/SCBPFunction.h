// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCBPFunction.generated.h"

/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API USCBPFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static class USCGameInstance* GetSCGameInstance(const UObject* WorldContext);

	UFUNCTION(BlueprintCallable)
	static class ASCGameMode* GetSCGameMode(const UObject* WorldContext);
	
	UFUNCTION(BlueprintCallable)
	static class ASCCharacter* GetSCPlayerCharacter(const UObject* WorldContext, int32 Num);

	UFUNCTION(BlueprintCallable)
	static class USCStateManager* GetSCStateManager(const UObject* WorldContext);

	UFUNCTION(BlueprintPure)
	static int64 GetCurTick();
};
