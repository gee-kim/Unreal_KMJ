// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/UI/UIContextComponent.h"

// Sets default values for this component's properties
UUIContextComponent::UUIContextComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUIContextComponent::BeginPlay()
{
	Super::BeginPlay();

	// ���⼭ HUD�����ͼ� �������� ���ϰ� ����?

	
}


// Called every frame
void UUIContextComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

