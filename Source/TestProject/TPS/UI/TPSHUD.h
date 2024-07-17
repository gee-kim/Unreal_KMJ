// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TPS/UI/TPSUIEnum.h"
#include "Global/UICreatedDataRow.h"
#include "TPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ATPSHUD : public AHUD
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintCallable)
	void UIOn(ETPSPlayUIType _Type);

	UFUNCTION(BlueprintCallable)
	void UIOff(ETPSPlayUIType _Type);

	UFUNCTION(BlueprintCallable)
	void UIVisibilitySwitch(ETPSPlayUIType _Type);

	UFUNCTION(BlueprintCallable)
	void UIVisibilitySwitchKey(FKey _Key);

	UFUNCTION(BlueprintCallable)
	void UISetVisibility(ETPSPlayUIType _Type, ESlateVisibility _Visibility);
	
	UFUNCTION(BlueprintCallable)
	void UISetVisibilityKey(FKey _Key, ESlateVisibility _Visibility);
		
	

protected:

	void BeginPlay() override;

private:
	//UserWidget상속받은 모든 위젯들을 여기서 관리함
	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<ETPSPlayUIType, UUserWidget*> Widgets;

	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<ETPSPlayUIType, FUICreatedDataRow>WidgetDatas;

	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<FKey, UUserWidget*> WidgetKeys;

	UPROPERTY(Category = "Contents", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<FKey, FUICreatedDataRow> WidgetKeyDatas;

	TArray<UUserWidget*> OpenWidgets;
	
};
