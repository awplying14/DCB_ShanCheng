// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Base/CharacterBase.h"
#include "../GameBase/SCAnimationManager.h"
#include "SCBaseStruct.h"
#include "SCCharacter.generated.h"


UCLASS()
class SHANCHENG_GAME_API ASCCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCCharacter();

protected:
	DECLARE_DELEGATE(FWDE_Single_Zero)
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	/*¡ª¡ª                    ¹¥»÷                    ¡ª¡ª*/

	//¹¥»÷
	UFUNCTION(BlueprintCallable)
	void Attack();

	//ÖØÖÃ¹¥»÷
	UFUNCTION(BlueprintCallable)
	void ResetAttackData();

	UFUNCTION(BlueprintImplementableEvent)
	void AttackDetection(const FString& _Name);

	UFUNCTION(BlueprintImplementableEvent)
	void StartAttack_E(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void StartAttack(FAnimationInfo Anim);

	UFUNCTION(BlueprintImplementableEvent)
	void RevertAttack_E(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void RevertAttack(FAnimationInfo Anim);

	UFUNCTION(BlueprintImplementableEvent)
	void EndAttack_E(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void EndAttack(FAnimationInfo Anim);


	/*¡ª¡ª                    ÌøÔ¾                    ¡ª¡ª*/
	
	//ÌøÔ¾
	UFUNCTION(BlueprintCallable)
	void Jump_P();

	UFUNCTION(BlueprintImplementableEvent)
	void StartJump(FAnimationInfo Anim);

	UFUNCTION(BlueprintImplementableEvent)
	void EndJump(FAnimationInfo Anim);

	UFUNCTION(BlueprintImplementableEvent)
	void LoopJump(FAnimationInfo Anim);

	UFUNCTION(BlueprintCallable)
	void JumpAfter(bool _IsAir);


	/*¡ª¡ª                    ÌøÔ¾                    ¡ª¡ª*/

	UFUNCTION(BlueprintCallable)
	void Defense();


	/*¡ª¡ª                    ·­¹ö                    ¡ª¡ª*/
	UFUNCTION(BlueprintCallable)
	void Dodge();

	UFUNCTION(BlueprintImplementableEvent)
	void StartDodge(FAnimationInfo Anim);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetState(ECharacterState _State);

	UFUNCTION(BlueprintCallable)
	ECharacterState GetState() const ;
protected:

	void UpDateAnimaton();

	float CheckMoveState();

	void Action_Idle();

	void Action_Move();

	void Action_Dodge();

	void Action_Attack();

	void Action_Jump();

	void Action_Defense();

private:

	void IdleAndMove();

public:

	ECharacterState State = ECharacterState::Idle;

	//ÊÜ»÷
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHit = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool	IsForward = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FAnimationInfo> AnimationInfoList;

	//¹¥»÷
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AttackStrList;
	
	TArray<FAnimationInfo*> AttackSequence;

	//¹¥»÷¶Î
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AttackPhase = 0;

	int AttackWave = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FightingTime = 0;

	//ÌøÔ¾
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsJump = false;

	//¸ñµ²
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool	CanDefense = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool	IsDefense = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int		DefensePhase = 0;

protected:

	FTimerHandle AnimatoinTimerHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeed = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedConstraint = 0.4f;

private:
};
