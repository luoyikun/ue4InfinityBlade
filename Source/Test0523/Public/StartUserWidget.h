// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"//必须放在generated前面
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "StartUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEST0523_API UStartUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UButton* m_btnStart;

	UPROPERTY()
		UButton* m_btnRegist;
	UPROPERTY()
		UButton* m_btnQuit;

public:
	virtual bool Initialize() override;
	UFUNCTION()
	void OnBtnQuit();
	UFUNCTION()
	void OnBtnStart();
};
