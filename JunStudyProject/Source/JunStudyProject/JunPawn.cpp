


#include "JunPawn.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework//SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AJunPawn::AJunPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	CapsuleComponent->InitCapsuleSize(34.0f, 88.0f);
	RootComponent = CapsuleComponent;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	Mesh->SetupAttachment(CapsuleComponent);
	Mesh->SetRelativeLocationAndRotation(FVector(0, 0, -88), FRotator(0, -90, 0));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm->SetupAttachment(CapsuleComponent);
	SpringArm->SetRelativeRotation(FRotator(-30, 0, 0));
	SpringArm->TargetArmLength = 700.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Caemra"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AJunPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJunPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJunPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

