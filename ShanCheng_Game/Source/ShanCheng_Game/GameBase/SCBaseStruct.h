// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SCBaseStruct.generated.h"

/**
 * 
 */

/*
	½ÇÉ«×´Ì¬
*/
UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	temp = 0,
	Idle,
	Move,
	Jump,
	Dodge,
	Attack,
	Defense,
	aaa
};

/*USTRUCT(Blueprintable, BlueprintType)
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
};*/




UCLASS()
class SHANCHENG_GAME_API USCBaseStruct : public UObject
{
	GENERATED_BODY()
	
};
