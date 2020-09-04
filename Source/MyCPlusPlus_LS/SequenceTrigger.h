// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "SequenceTrigger.generated.h"

UCLASS()
class MYCPLUSPLUS_LS_API ASequenceTrigger : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASequenceTrigger();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditInstanceOnly)
	class ALevelSequenceActor* SequenceActor;
};
