// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuCharacter.h"

// Sets default values
AMenuCharacter::AMenuCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMenuCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMenuCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMenuCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("MoveFocusLeft", IE_Pressed, this, &AMenuCharacter::MoveFocusLeft);
	InputComponent->BindAction("MoveFocusRight", IE_Pressed, this, &AMenuCharacter::MoveFocusRight);
	InputComponent->BindAction("MoveTabsFocusLeft", IE_Pressed, this, &AMenuCharacter::MoveTabsFocusLeft);
	InputComponent->BindAction("MoveTabsFocusRight", IE_Pressed, this, &AMenuCharacter::MoveTabsFocusRight);
	InputComponent->BindAction("Apply", IE_Pressed, this, &AMenuCharacter::Apply);
	InputComponent->BindAction("Back", IE_Pressed, this, &AMenuCharacter::Back);
}

void AMenuCharacter::MoveFocusLeft()
{
	FocusLeft();
}

void AMenuCharacter::MoveFocusRight()
{
	FocusRight();
}

void AMenuCharacter::MoveTabsFocusLeft()
{
	TabsFocusLeft();
}

void AMenuCharacter::MoveTabsFocusRight()	
{
	TabsFocusRight();
}

void AMenuCharacter::Apply()
{
	ApplyProgress();
}

void AMenuCharacter::Back()
{
	BackToStart();
}
