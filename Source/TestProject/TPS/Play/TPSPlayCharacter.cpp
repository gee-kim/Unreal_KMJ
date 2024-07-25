// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Play/TPSPlayCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"


ATPSPlayCharacter::ATPSPlayCharacter()
{
	//캐릭터 매쉬에 관한 설정
	GetMesh()->SetGenerateOverlapEvents(true);
	GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
	GetMesh()->bHiddenInSceneCapture = true;
	
	//캐릭터가 생성될 때 캐릭터의 무기 슬롯 설정 셋팅
	UEnum* Enum = StaticEnum<ETPSCharacterSlot>();

	//슬롯에 생성된 객수만큼 for문 돌면서 slotname 받아서 매쉬붙여주고 충돌설정해줌
	for (size_t i = 0; i < static_cast<size_t>(ETPSCharacterSlot::SlotMax); i++)
	{
		FString SlotName = Enum->GetNameStringByValue(i);
		UStaticMeshComponent* NewSlotMesh = CreateDefaultSubobject<UStaticMeshComponent>(*SlotName);

		NewSlotMesh->SetupAttachment(GetMesh(), *SlotName);
		NewSlotMesh->SetCollisionProfileName(TEXT("NoCollision"));
		NewSlotMesh->SetGenerateOverlapEvents(true);
		NewSlotMesh->bHiddenInSceneCapture = true;
		

	}
}

ATPSPlayCharacter::~ATPSPlayCharacter()
{

}

void ATPSPlayCharacter::TestNet()
{
	
}

void ATPSPlayCharacter::BeginPlay()
{

}

void ATPSPlayCharacter::Tick(float _DeltaTime)
{

}