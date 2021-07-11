// Fill out your copyright notice in the Description page of Project Settings.


#include "StartUserWidget.h"

bool UStartUserWidget::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}
	m_btnStart = Cast<UButton>(GetWidgetFromName(TEXT("BtnStart")));
	m_btnRegist = Cast<UButton>(GetWidgetFromName(TEXT("BtnRegist")));
	m_btnQuit = Cast<UButton>(GetWidgetFromName(TEXT("BtnQuit")));

	m_btnQuit->OnClicked.AddDynamic(this, &UStartUserWidget::OnBtnQuit);
	m_btnStart->OnClicked.AddDynamic(this, &UStartUserWidget::OnBtnStart);
	return true;
}

void UStartUserWidget::OnBtnQuit()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("OnBtnQuit"));
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit,true);
}

void UStartUserWidget::OnBtnStart()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("/Game/WuJing/Scenes/MapMain"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("123"));
}
