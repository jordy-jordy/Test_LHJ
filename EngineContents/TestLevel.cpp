#include "PreCompile.h"
#include "TestLevel.h"
#include "Test_Rederer_LHJ.h"

#include <EngineCore/CameraActor.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EnginePlatform/EngineInput.h>


ATestLevel::ATestLevel()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	const float DIASIZE = 200.f;
	Renderer = CreateDefaultSubObject<Test_Rederer_LHJ>();
	Renderer->SetScale3D({ DIASIZE, DIASIZE, DIASIZE });
	Renderer->SetupAttachment(RootComponent);

	std::shared_ptr<ACameraActor> Camera = GetWorld()->GetMainCamera();
	Camera->SetActorLocation({ 0.0f, 0.0f, -1000.0f });
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

	float ROTSPEED = 2.0f;
	Renderer->AddWorldRotation({ 0.0f, ROTSPEED, 0.0f * _DeltaTime });
}

ATestLevel::~ATestLevel()
{

};