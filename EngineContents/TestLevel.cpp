#include "PreCompile.h"
#include "TestLevel.h"

#include <EngineCore/CameraActor.h>
#include <EnginePlatform/EngineInput.h>

#include "Test_Actor.h"

ATestLevel::ATestLevel()
{
	// 시험용 액터 소환
	std::shared_ptr<ATest_Actor> Actor = GetWorld()->SpawnActor<ATest_Actor>();

	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -500.0f });
};

void ATestLevel::BeginPlay()
{
	AGameMode::BeginPlay();
}

void ATestLevel::Tick(float _DeltaTime)
{
	AActor::Tick(_DeltaTime);

	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	if (UEngineInput::IsDown('P'))
	{
		Camera->FreeCameraSwitch();
	}

}

ATestLevel::~ATestLevel()
{

};