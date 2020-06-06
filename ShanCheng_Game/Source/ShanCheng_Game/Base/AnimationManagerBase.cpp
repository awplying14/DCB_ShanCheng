// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationManagerBase.h"

// Sets default values
AAnimationManagerBase::AAnimationManagerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAnimationManagerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAnimationManagerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAnimationManagerBase::addAnimationToList(FString _Name, const FString& _AnimationName, const int _TrackIndex, bool _IsLoop, float _RootDistance, float	_RecoverTime, float _EndTime)
{
	FAnimationInfo info;
	info.Name = _Name;
	info.AnimationName = _AnimationName;
	info.TrackIndex = _TrackIndex;
	info.IsLoop = _IsLoop;
	info.RootDistance = _RootDistance;
	info.RecoverTime = _RecoverTime;
	info.EndTime = _EndTime;
	AnimationInfoList.Add(_Name, info);
}

void AAnimationManagerBase::PlayAnimation(FAnimationInfo Anim)
{
	PlayAnimationEvent(Anim);
}

void AAnimationManagerBase::PlayAnimationByName(FString _Name)
{
	FAnimationInfo* info = AnimationInfoList.Find(_Name);
	PlayAnimation(*info);
}

FAnimationInfo* AAnimationManagerBase::GetAnimationByName(FString _Name)
{
	return AnimationInfoList.Find(_Name);
}

FAnimationInfo AAnimationManagerBase::GetAnimationInfo(FString _Name)
{
	return *GetAnimationByName(_Name);
}

void AAnimationManagerBase::SetNotityToAnimation(FString _Name, FSpineAnimNotify AnimNotify)
{
	FAnimationInfo* Anim = AnimationInfoList.Find(_Name);

	Anim->NotyfList.Add(AnimNotify);

}

void AAnimationManagerBase::InitAnimNotify()
{
	RecycleNotityList.Empty();
}

void AAnimationManagerBase::OnAnimNotity(FSpineAnimNotify AnimNotify, int Index)
{
	if (RecycleNotityList.Contains(Index)) {

	}
	else
	{
		FString Name = AnimNotify.NotifyName;
		RecycleNotityList.Add(Index, Name);

		OnAnimNotityEvent(AnimNotify);
	}

}

