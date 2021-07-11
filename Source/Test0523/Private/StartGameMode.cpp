// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameMode.h"

void AStartGameMode::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("HelloTTT"));
	//��ʼ������
	m_startWidget = CreateWidget<UStartUserWidget>(GetGameInstance(), LoadClass<UStartUserWidget>(this, TEXT("WidgetBlueprint'/Game/WuJing/UI/StartUserWidget.StartUserWidget_C'")));
	//��ӵ��ӿ�
	m_startWidget->AddToViewport();
}
