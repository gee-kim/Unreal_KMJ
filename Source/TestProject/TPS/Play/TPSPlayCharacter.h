// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/GlobalCharacter.h"
#include "Global/MyEnum.h"
#include "Net/UnrealNetwork.h"
#include "TPSPlayCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ATPSPlayCharacter : public AGlobalCharacter
{
	GENERATED_BODY()
	
public:
	ATPSPlayCharacter();
	~ATPSPlayCharacter();

	UFUNCTION(BlueprintCallable)
	void TestNet();

protected:
	void BeginPlay() override;

	void Tick(float _DeltaTime) override;

private:
	// 배열은 Event가 뜨지 않는다.
	UPROPERTY(Category = "Contents", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<UStaticMeshComponent*> ItemMeshes;

};
