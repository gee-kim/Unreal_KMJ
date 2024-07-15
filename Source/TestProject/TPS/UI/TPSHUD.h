// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ATPSHUD : public AHUD
{
	GENERATED_BODY()


public:
	//void OnUI(ETPSUIType)

protected:

	void BeginPlay() override;

private:

	TArray<UUserWidget*> OpenWidgets;
	
};
