// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/GlobalBlueprintFunctionLibrary.h"
#include "TPS/UI/TPSHUD.h"
#include "Kismet/GameplayStatics.h"

ATPSHUD* UGlobalBlueprintFunctionLibrary::GetTPSPlayHUD(const UWorld* WorldContextObject)
{
	APlayerController* Con = UGameplayStatics::GetPlayerController(WorldContextObject, 0);

	ATPSHUD* Hud = Cast<ATPSHUD>(Con->GetHUD());

	return Hud;
}

UGlobalGameInstance* UGlobalBlueprintFunctionLibrary::GetGlobalGameInstance(const UWorld* WorldContextObject)
{
	UGlobalGameInstance* Inst = WorldContextObject->GetGameInstanceChecked<UGlobalGameInstance>();


	return Inst;
}

