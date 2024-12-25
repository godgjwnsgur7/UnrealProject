


#include "MainActor.h"
#include "JunActor.h"

// Sets default values
AMainActor::AMainActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	ConstructorHelpers::FClassFinder<AJunActor> FindClass(TEXT("/Script/Engine.Blueprint'/Game/_Jun/BP_JunActor.BP_JunActor_C'"));
	if (FindClass.Succeeded())
	{
		ActorClass = FindClass.Class;
	}
}

// Called when the game starts or when spawned
void AMainActor::BeginPlay()
{
	Super::BeginPlay();

	FVector Location(0, 0, 0);
	FRotator Rotation(0, 0, 0);	
	
	// AJunActor* Actor = GetWorld()->SpawnActor<AJunActor>(Location, Rotation);
	// Actor = GetWorld()->SpawnActor<AJunActor>(Location, Rotation); // 5초 뒤 삭제
	 
	Actor = Cast<AJunActor>(GetWorld()->SpawnActor(ActorClass));

	Actor->SetLifeSpan(5.0f);
	// GetWorld()-> DestroyActor(Actor);
}

// Called every frame
void AMainActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

