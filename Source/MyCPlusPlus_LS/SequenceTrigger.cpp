#include "SequenceTrigger.h"

#include "Components/StaticMeshComponent.h"
#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"

ASequenceTrigger::ASequenceTrigger()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Mesh->OnComponentHit.AddDynamic(this, &ASequenceTrigger::OnHit);
}

void ASequenceTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ASequenceTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASequenceTrigger::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (SequenceActor)
	{
		ULevelSequencePlayer* SPlayer = SequenceActor->GetSequencePlayer();
		if (SPlayer && !SPlayer->IsPlaying())
		{
			SPlayer->Play();
		}
	}
}