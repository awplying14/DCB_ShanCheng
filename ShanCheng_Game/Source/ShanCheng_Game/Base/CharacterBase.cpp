// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "UObject/ConstructorHelpers.h"
#include "AnimationManagerBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{

	FTransform Trans;
	FActorSpawnParameters Params;

	AnimationManager = Cast<AAnimationManagerBase>(GetWorld()->SpawnActor(AnimationManagerClass, &Trans, Params));

	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	if (AnimationManager != nullptr) {
		AnimationManager->SetActorTransform(GetTransform());
	}

	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

