// Created by Pham Hoang Viet in 2021.


#include "PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	Mesh->SetSimulatePhysics(true);
	SetRootComponent(Mesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(FName("SpringArm"));
	SpringArm->TargetArmLength = 1400.0f;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;
	SpringArm->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->SetWorldLocation(FVector(0.0f, 0.0f, 50.0f));
	SpringArm->SetWorldRotation(FRotator(-60.0f, 0.0f, 0.0f));

	Camera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	Camera->bUsePawnControlRotation = false;
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

