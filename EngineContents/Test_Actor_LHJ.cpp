#include "PreCompile.h"
#include "Test_Actor_LHJ.h"

#include <EngineCore/DefaultSceneComponent.h>

#include "Test_Rederer_LHJ.h"


ATest_Actor::ATest_Actor()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	const float DIASIZE = 200.f;
	Renderer = CreateDefaultSubObject<Test_Rederer_LHJ>();
	Renderer->SetScale3D({ DIASIZE, DIASIZE, DIASIZE });
	Renderer->SetupAttachment(RootComponent);

};

ATest_Actor::~ATest_Actor()
{

};

void ATest_Actor::Tick(float _DeltaTime)
{
	float XROTSPEED = 0.0f;
	float YROTSPEED = 0.0f;
	float ZROTSPEED = 100.0f;
	Renderer->AddWorldRotation({ XROTSPEED * _DeltaTime, YROTSPEED * _DeltaTime, ZROTSPEED * _DeltaTime });

}