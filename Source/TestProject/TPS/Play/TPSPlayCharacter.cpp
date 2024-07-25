// Fill out your copyright notice in the Description page of Project Settings.


#include "TPS/Play/TPSPlayCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"


ATPSPlayCharacter::ATPSPlayCharacter()
{
	//ĳ���� �Ž��� ���� ����
	GetMesh()->SetGenerateOverlapEvents(true);
	GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));
	GetMesh()->bHiddenInSceneCapture = true;
	
	//ĳ���Ͱ� ������ �� ĳ������ ���� ���� ���� ����
	UEnum* Enum = StaticEnum<ETPSCharacterSlot>();

	//���Կ� ������ ������ŭ for�� ���鼭 slotname �޾Ƽ� �Ž��ٿ��ְ� �浹��������
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