// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEST0523_API ULoadUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual bool Initialize() override;
};
