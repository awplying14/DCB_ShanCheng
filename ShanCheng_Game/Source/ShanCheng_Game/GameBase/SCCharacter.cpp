// Fill out your copyright notice in the Description page of Project Settings.


#include "SCCharacter.h"
#include "Engine/Engine.h"
#include "../GameBase/SCBPFunction.h"
#include "../GameBase/SCStateManager.h"



// Sets default values
ASCCharacter::ASCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASCCharacter::BeginPlay()
{
	if (!AnimatoinTimerHand.IsValid()) {
		GetWorldTimerManager().SetTimer(AnimatoinTimerHand, this, &ASCCharacter::UpDateAnimaton, 0.01f, true);
	}
	Super::BeginPlay();
	
}

// Called every frame
void ASCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASCCharacter::SetState(ECharacterState _State)
{
	State = _State;
}

ECharacterState ASCCharacter::GetState() const
{
	return State;
}

//GetWorldTimerManager().ClearTimer(AnimatoinTimerHand);
void ASCCharacter::UpDateAnimaton()
{

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Action"));

	switch (State) {
			case ECharacterState::Idle:
				Action_Idle();
				break;
			case ECharacterState::Move:
				Action_Move();
				break;
			case ECharacterState::Jump:
				Action_Jump();
				break;
			case ECharacterState::Attack:
				Action_Attack();
				break;
			case ECharacterState::Defense:
				Action_Defense();
				break;
			case ECharacterState::Dodge:
				Action_Dodge();
				break;
			default:
				break;
	}
	
}

float ASCCharacter::CheckMoveState()
{
	float Speed = GetVelocity().Size();

	if (Speed == 0.0f) 
	{
		State = ECharacterState::Idle;
	}
	else
	{
		State = ECharacterState::Move;
	}

	return Speed;
}

void ASCCharacter::IdleAndMove() {

	float Speed = CheckMoveState();

	FAnimationInfo* Anim = NULL;

	if (Speed <= 0.0f)
	{
		if (FightingTime > 0)
		{
			AnimationManager->PlayAnimationByName("block3");
		}
		else
		{
			AnimationManager->PlayAnimationByName("Idle");
		}
		
	}
	else if (Speed <= (SpeedConstraint * MaxSpeed + 4.0f))
	{
		AnimationManager->PlayAnimationByName("Jog");
	}
	else if (Speed > (SpeedConstraint * MaxSpeed + 4.0f))
	{
		AnimationManager->PlayAnimationByName("Run");
	}


	if (FightingTime > 0) {
		FightingTime--;
	}
	
}

void ASCCharacter::Action_Idle()
{
	
	IdleAndMove();
	
}

//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Move"));
void ASCCharacter::Action_Move()
{
	IdleAndMove();
}

void ASCCharacter::Action_Attack()
{
	if (AttackPhase >= AttackStrList.Num() || AttackPhase < 0|| AttackStrList.Num() == 0) { return; }

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Attack!"));
	for (int i = 0; i < AttackSequence.Num(); ++i)
	{

		
		if (IsAttack) {
			FString Name = AttackSequence[i]->Name;
			if (AttackSequence[i]->IsPlaying) {
				AttackDetection(Name);
			}	
			continue;
			//break;
		}
		
		FAnimationInfo* Anim = NULL;
		Anim = AttackSequence[i];
		AnimationManager->PlayAnimation(*Anim);


		StartAttack(*Anim);
		

	}
	
	UE_LOG(LogTemp, Log, TEXT("%d ---- %d"), AttackSequence.Num(), IsAttack);
}

void ASCCharacter::Attack()
{

	if (AttackStrList.Num() == 0) { return; }

	if (!(USCBPFunction::GetSCStateManager(this)->ChangeCharacterState(this, ECharacterState::Attack)))
	{
		ResetAttackData();
		AttackSequence.Empty();
	}

	if (AttackSequence.Num() < 2) {
		
		
		if (AttackWave > 0) { return; }

		FAnimationInfo* Anim = NULL;
		Anim = AnimationManager->GetAnimationByName(AttackStrList[AttackPhase]);
		AttackSequence.AddUnique(Anim);
		
		AttackPhase++;
		AttackWave = AttackPhase / AttackStrList.Num();
		AttackPhase = AttackPhase % AttackStrList.Num();
		
		
	}

	UE_LOG(LogTemp, Log, TEXT("%d ---- %d"), AttackSequence.Num(), AttackPhase);
}

void ASCCharacter::ResetAttackData()
{
	AttackPhase = 0;
	AttackWave = 0;
}

void ASCCharacter::StartAttack(FAnimationInfo Anim)
{
	IsAttack = true;
	FightingTime = 600;
	StartAttack_E(Anim);
}

void ASCCharacter::RevertAttack(FAnimationInfo Anim)
{
	IsAttack = false;
	RevertAttack_E(Anim);
	AttackSequence.RemoveAt(0);
}

void ASCCharacter::EndAttack(FAnimationInfo Anim)
{
		
	//UE_LOG(LogTemp, Log, TEXT("%d ---- %d"), AttackSequence.Num(), IsAttack);
	if (AttackSequence.Num() == 0) {
		//Anim.IsPlaying = false;
		EndAttack_E(Anim);
		UE_LOG(LogTemp, Log, TEXT("%d --ad-- %d"), AttackSequence.Num(), IsAttack);
	}
	
	
}

void ASCCharacter::Dodge()
{
	USCBPFunction::GetSCStateManager(this)->ChangeCharacterState(this, ECharacterState::Dodge);
}

void ASCCharacter::Action_Dodge()
{
	FAnimationInfo* Anim = NULL;

	if (IsForward) {
		Anim = AnimationManager->GetAnimationByName("DodgeForward");
	}
	else
	{
		Anim = AnimationManager->GetAnimationByName("DodgeBackward");
	}


	AnimationManager->PlayAnimation(*Anim);

	FightingTime = 300;
	StartDodge(*Anim);
}

void ASCCharacter::Defense()
{
	if (!CanDefense) {
		return;
	}
	IsDefense = true;
	USCBPFunction::GetSCStateManager(this)->ChangeCharacterState(this, ECharacterState::Defense);
}

void ASCCharacter::Action_Defense()
{
	float Speed = GetVelocity().Size();

	if (IsHit) {

		AnimationManager->PlayAnimationByName("DefenseHit");
	}
	else 
	{
		if (Speed <= 0.0f)
		{
			AnimationManager->PlayAnimationByName("DefenseIdle");
		}
		else
		{
			if (IsForward) {
				AnimationManager->PlayAnimationByName("DefenseForward");
			}
			else
			{
				AnimationManager->PlayAnimationByName("DefenseBackward");
			}

		}
	}

	FightingTime = 300;

}

void ASCCharacter::Jump_P()
{
	USCBPFunction::GetSCStateManager(this)->ChangeCharacterState(this, ECharacterState::Jump);
}

void ASCCharacter::Action_Jump()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Jump!"));

	FAnimationInfo* StartJumpAnim = AnimationManager->GetAnimationByName("StartJump");

	if (IsJump == false) {
		IsJump = true;
		//UE_LOG(LogTemp, Log, TEXT("%d"), StartJumpAnim->IsPlaying);

		AnimationManager->PlayAnimation(*StartJumpAnim);

		StartJump(*StartJumpAnim);
	}
	else 
	{
		//UE_LOG(LogTemp, Log, TEXT("%d"), StartJumpAnim->IsPlaying);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("%d"), StartJumpAnim->IsPlaying);
		/*if (!(StartJumpAnim->IsPlaying))
		{
			FAnimationInfo* LoopJumpAnim = AnimationInfoList.Find("LoopJump");
			PlayAnimation(*LoopJumpAnim);
		}*/


	}
	
	
}

void ASCCharacter::JumpAfter(bool _IsAir)
{
	/*if (!(State == ECharacterState::Jump)) {
		Jump_P();
		return;
	}*/

	FAnimationInfo* Anim = NULL;

	if (_IsAir) {
	
		Anim = AnimationManager->GetAnimationByName("LoopJump");
		AnimationManager->PlayAnimation(*Anim);

			//LoopJump(*Anim);
	}
	else
	{
		Anim = AnimationManager->GetAnimationByName("EndJump");
		AnimationManager->PlayAnimation(*Anim);

		EndJump(*Anim);
	}

	
}
