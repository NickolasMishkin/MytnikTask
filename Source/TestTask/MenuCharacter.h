// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TT_SaveProgress.h"
#include "TT_GameInstance.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MenuCharacter.generated.h"

UCLASS()
class TESTTASK_API AMenuCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMenuCharacter();

	UTT_GameInstance* GameInstance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveFocusLeft();

	void MoveFocusRight();

	void MoveTabsFocusLeft();

	void MoveTabsFocusRight();

	void Apply();

	void Back();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void FocusLeft();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void FocusRight();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TabsFocusLeft();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TabsFocusRight();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ApplyProgress();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void BackToStart();

};
