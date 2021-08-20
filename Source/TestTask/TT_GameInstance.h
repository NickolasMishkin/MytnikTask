// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MainWidget.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TT_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_API UTT_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	UMainWidget* MenuMainWidget;

	UTT_GameInstance(const FObjectInitializer& ObjectInitializer);
	
	virtual void MainWidgetLog();

	void SetMenuMainWidget(UMainWidget* NewMainWidget) { MenuMainWidget = NewMainWidget; };

	UFUNCTION(BlueprintCallable)
	void OpenMenu();

private:
	TSubclassOf<class UMainWidget> MainMenuWidgetClass;
};
