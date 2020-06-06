// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Base/StateManager.h"
#include "../GameBase/SCBaseStruct.h"
#include "SCStateManager.generated.h"


/**
 * 
 */
UCLASS()
class SHANCHENG_GAME_API USCStateManager : public UStateManager
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECharacterState, int> CharacterStatePriorityList;

	//��ɫ״̬���
	UFUNCTION(BlueprintCallable)
	bool ChangeCharacterState(class ASCCharacter* _Character, ECharacterState _State);

	//ǿ�ƽ�ɫ״̬���
	UFUNCTION(BlueprintCallable)
	void ChangeCharacterState_Compel(class ASCCharacter* _Character, ECharacterState _State);

	//�ظ���ɫ״̬ΪIdle
	UFUNCTION(BlueprintCallable)
	void RestoreCharacterStateIdle(class ASCCharacter* _Character, ECharacterState _CheckState);
	
};
