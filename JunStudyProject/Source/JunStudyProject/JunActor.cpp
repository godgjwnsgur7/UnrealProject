


#include "JunActor.h"
#include "JunObject.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AJunActor::AJunActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> FindMesh(TEXT("/Script/Engine.StaticMesh'/Game/_Jun/SM_ChamferCube.SM_ChamferCube'"));
	if (FindMesh.Succeeded())
	{
		Box->SetStaticMesh(FindMesh.Object);
	}
}

// Called when the game starts or when spawned
void AJunActor::BeginPlay()
{
	Super::BeginPlay();

	// Target = UGameplayStatics::GetActorOfClass(GetWorld(), AJunActor::StaticClass());

	TArray<AActor*> Actors;

	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Jun"), Actors);

	if (Actors.Num() > 0)
	{
		Target = Actors[0];
	}
}

// Called every frame
void AJunActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Target != nullptr)
	{
		float Speed = 50.0f;
		float Distance = DeltaTime * Speed;

		FVector Location = GetActorLocation();

		FVector DirectionVector = Target->GetActorLocation() - GetActorLocation();
		DirectionVector.Normalize();

		// FVector NewLocation = Location + DirectionVector * Distance;
		// SetActorLocation(NewLocation);

		AddActorWorldOffset(DirectionVector * Distance);
	}
}

