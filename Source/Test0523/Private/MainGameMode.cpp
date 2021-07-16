// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"

AMainGameMode::AMainGameMode()
{
	//找到资源里蓝图
	ConstructorHelpers::FClassFinder<ACharacter> characterFinder(TEXT("/Game/WuJing/Character/BP_MajorCharacter"));
	DefaultPawnClass = characterFinder.Class;

	//设置主角控制器
	PlayerControllerClass = AMajorPlayerController::StaticClass();
}
