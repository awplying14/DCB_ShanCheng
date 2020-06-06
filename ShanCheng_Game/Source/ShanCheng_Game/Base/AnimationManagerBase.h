// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimationManagerBase.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FSpineAnimNotify
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString						NotifyName = "";

	UPROPERTY(BlueprintReadWrite)
		float						TriggerTime = 0.0f;

	UPROPERTY(BlueprintReadWrite)
		bool						IsFirst = true;
};

USTRUCT(Blueprintable, BlueprintType)
struct FAnimationInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite)
		FString					Name = "";

	UPROPERTY(BlueprintReadWrite)
		FString					AnimationName = "";

	UPROPERTY(BlueprintReadWrite)
		int						TrackIndex = 0;

	UPROPERTY(BlueprintReadWrite)
		bool					IsPlaying = false;

	UPROPERTY(BlueprintReadWrite)
		bool					IsLoop = false;

	UPROPERTY(BlueprintReadWrite)
		float					RootDistance = 0.0f;

	UPROPERTY(BlueprintReadWrite)
		float					RecoverTime = 0.0f;

	UPROPERTY(BlueprintReadWrite)
		float					EndTime = 0.0f;

	UPROPERTY(BlueprintReadWrite)
		TArray<FSpineAnimNotify>	NotyfList;
};

UCLASS()
class SHANCHENG_GAME_API AAnimationManagerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAnimationManagerBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "PlayAnimation", ScriptName = "PlayAnimation"))
	void PlayAnimationEvent(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void addAnimationToList(FString _Name, const FString& _AnimationName, const int _TrackIndex = 0, bool _IsLoop = false, float _RootDistance = 0.0f, float _RecoverTime = 0.0f, float _EndTime = 0.0f);

	UFUNCTION(BlueprintCallable)
	void SetNotityToAnimation(FString _Name, FSpineAnimNotify AnimNotify);

	UFUNCTION(BlueprintCallable)
	void OnAnimNotity(FSpineAnimNotify AnimNotify, int _Index);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnAnimNotity", ScriptName = "OnAnimNotity"))
	void OnAnimNotityEvent(FSpineAnimNotify AnimNotify);

	UFUNCTION(BlueprintCallable)
	void InitAnimNotify();

public:

	UFUNCTION(BlueprintCallable)
	void PlayAnimation(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void PlayAnimationByName(FString _Name);
	
	FAnimationInfo* GetAnimationByName(FString _Name);

	UFUNCTION(BlueprintCallable)
	FAnimationInfo GetAnimationInfo(FString _Name);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FAnimationInfo> AnimationInfoList;

private:

	TMap<int, FString> RecycleNotityList;
};
