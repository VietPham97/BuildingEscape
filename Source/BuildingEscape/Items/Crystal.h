// Created by Pham Hoang Viet in 2021.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Crystal.generated.h"

UCLASS()
class BUILDINGESCAPE_API ACrystal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrystal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
