// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"

void AStartGameMode::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("HelloTTT"));
	//初始化界面
	m_startWidget = CreateWidget<UStartUserWidget>(GetGameInstance(), LoadClass<UStartUserWidget>(this, TEXT("WidgetBlueprint'/Game/WuJing/UI/StartUserWidget.StartUserWidget_C'")));
	//添加到视口
	m_startWidget->AddToViewport();
}
