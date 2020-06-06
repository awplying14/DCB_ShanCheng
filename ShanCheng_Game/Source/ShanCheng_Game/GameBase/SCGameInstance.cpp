// Fill out your copyright notice in the Description page of Project Settings.


#include "SCGameInstance.h"
#include "../GameBase/SCStateManager.h"
#include "UObject/ConstructorHelpers.h"


void USCGameInstance::Init()
{
	StateManager = NewObject<USCStateManager>(this, StateManagerClass);
	Super::Init();
}