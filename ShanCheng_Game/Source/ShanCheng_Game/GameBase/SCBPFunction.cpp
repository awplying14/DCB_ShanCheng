// Fill out your copyright notice in the Description page of Project Settings.


#include "SCBPFunction.h"
#include "Kismet/GameplayStatics.h"
#include "../GameBase/SCCharacter.h"
#include "../GameBase/SCGameInstance.h"
#include "../GameBase/SCGameMode.h"
#include "../GameBase/SCStateManager.h"




USCGameInstance* USCBPFunction::GetSCGameInstance(const UObject* WorldContext)
{
	UGameInstance* Instance = UGameplayStatics::GetGameInstance(WorldContext);
	return Cast<USCGameInstance>(Instance);
}

ASCGameMode* USCBPFunction::GetSCGameMode(const UObject* WorldContext)
{
	return Cast<ASCGameMode>(UGameplayStatics::GetGameMode(WorldContext));
}


ASCCharacter* USCBPFunction::GetSCPlayerCharacter(const UObject* WorldContext, int32 Num)
{
	return Cast<ASCCharacter>(UGameplayStatics::GetPlayerPawn(WorldContext, Num));
}

USCStateManager* USCBPFunction::GetSCStateManager(const UObject* WorldContext)
{
	auto GameInst = GetSCGameInstance(WorldContext);
	if (GameInst == nullptr)
	{
		return nullptr;
	}
	return GameInst->StateManager;
}

int64 USCBPFunction::GetCurTick()
{
	FDateTime Time = FDateTime::Now();
	//获取时间戳
	int64 Timestamp = Time.GetTicks();
	return Timestamp;
}

