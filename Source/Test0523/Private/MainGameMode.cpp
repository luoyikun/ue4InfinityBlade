// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"

AMainGameMode::AMainGameMode()
{
	//�ҵ���Դ����ͼ
	ConstructorHelpers::FClassFinder<ACharacter> characterFinder(TEXT("/Game/WuJing/Character/BP_MajorCharacter"));
	DefaultPawnClass = characterFinder.Class;

	//�������ǿ�����
	PlayerControllerClass = AMajorPlayerController::StaticClass();
}
