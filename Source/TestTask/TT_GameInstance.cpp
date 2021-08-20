#include "TT_GameInstance.h"
#include "Uobject/ConstructorHelpers.h"

UTT_GameInstance::UTT_GameInstance(const FObjectInitializer& ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UMainWidget> MainMenuWidget(TEXT("/Game/MainWidget_widget"));//bad solution, but this is the best what i invented)))
	if (!ensure (MainMenuWidget.Class != nullptr)) return;

	MainMenuWidgetClass = MainMenuWidget.Class;
}

void UTT_GameInstance::MainWidgetLog()
{
	UE_LOG(LogTemp, Warning, TEXT("Class %s was fonded"), *MainMenuWidgetClass->GetName());
}

void UTT_GameInstance::OpenMenu()
{
	UMainWidget* MainWidget = CreateWidget<UMainWidget>(this, MainMenuWidgetClass);
	MainWidget->AddToViewport();

	SetMenuMainWidget(MainWidget);

	APlayerController* PlayerController = GetFirstLocalPlayerController();

	PlayerController->bShowMouseCursor = false;
}