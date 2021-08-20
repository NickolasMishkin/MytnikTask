// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.generated.h"

UENUM(BlueprintType)
enum class EMenuPages : uint8
{
    Home,
    Missions,
    Library,
    Settings,

};

UCLASS()
class TESTTASK_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite)
    EMenuPages MenuPages;
};
