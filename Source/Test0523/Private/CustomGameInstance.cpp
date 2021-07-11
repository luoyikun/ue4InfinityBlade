// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGameInstance.h"

void UCustomGameInstance::Init()
{
	UGameInstance::Init();

	//开始加载地图委托
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UCustomGameInstance::PreLoadMap);

	//结束加载地图委托
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UCustomGameInstance::PostLoadMap);
	m_loadWidget = CreateWidget<ULoadUserWidget>(this, LoadClass<ULoadUserWidget>(this, TEXT("WidgetBlueprint'/Game/WuJing/UI/LoadUserWidget.LoadUserWidget_C'")));
}

void UCustomGameInstance::PreLoadMap(const FString& map)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("PreLoadMap"));
	if (map.Equals("/Game/WuJing/Scenes/MapMain"))
	{
		FLoadingScreenAttributes loadingAttr;
		loadingAttr.WidgetLoadingScreen = m_loadWidget->TakeWidget();
		GetMoviePlayer()->SetupLoadingScreen(loadingAttr);
	}
}

void UCustomGameInstance::PostLoadMap(UWorld* world)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("PostLoadMap12123"));
}
