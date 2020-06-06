// Fill out your copyright notice in the Description page of Project Settings.


#include "GIBase.h"

void UGIBase::Tick(float DeltaTime)
{

}

bool UGIBase::IsTickable() const
{
	return GWorld->HasBegunPlay();
}

TStatId UGIBase::GetStatId() const
{
	return TStatId();
}

void UGIBase::Init()
{
	Super::Init();
}