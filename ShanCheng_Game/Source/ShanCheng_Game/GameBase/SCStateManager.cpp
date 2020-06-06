// Fill out your copyright notice in the Description page of Project Settings.


#include "SCStateManager.h"
#include "../GameBase/SCCharacter.h"


bool USCStateManager::ChangeCharacterState(ASCCharacter* _Character, ECharacterState _State)
{
	if (NULL == _Character || CharacterStatePriorityList.Num() == 0) {
		return false;
	}

	int CurStateLv = *(CharacterStatePriorityList.Find(_Character->State));

	int InputStateLv = *(CharacterStatePriorityList.Find(_State));

	if (CurStateLv < InputStateLv) 
	{
		//_Character->SetState(_State);
		return false;
	}
	else if(CurStateLv == InputStateLv)
	{
		_Character->SetState(_State);
	}
	else if (CurStateLv > InputStateLv)
	{
		_Character->SetState(_State);
	}

	return true;
}

void USCStateManager::ChangeCharacterState_Compel(class ASCCharacter* _Character, ECharacterState _State)
{
	if (NULL == _Character ) {
		return;
	}

	_Character->SetState(_State);
}

void USCStateManager::RestoreCharacterStateIdle(class ASCCharacter* _Character, ECharacterState _CheckState)
{
	if (NULL == _Character || _CheckState != _Character->State) {
		return;
	}

	_Character->SetState(ECharacterState::Idle);
}