// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Base/GIBase.h"
#include "SCGameInstance.generated.h"


class USCStateManager;
/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API USCGameInstance : public UGIBase
{
	GENERATED_BODY()
public:
	virtual void Init();

public:
	/**
	状态管理器
	*/
	UPROPERTY(BlueprintReadOnly)
	USCStateManager* StateManager = nullptr;
protected:
	/**
	状态管理类
	*/
	UPROPERTY(EditAnywhere)
	TSubclassOf<USCStateManager> StateManagerClass = nullptr;
	
};
