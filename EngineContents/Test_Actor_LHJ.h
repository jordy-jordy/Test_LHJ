#pragma once
#include <EngineCore/Actor.h>


// Ό³Έν :
class ATest_Actor : public AActor
{
public:
	// constrcuter destructer
	ATest_Actor();
	~ATest_Actor();

	// delete Function
	ATest_Actor(const ATest_Actor& _Other) = delete;
	ATest_Actor(ATest_Actor&& _Other) noexcept = delete;
	ATest_Actor& operator=(const ATest_Actor& _Other) = delete;
	ATest_Actor& operator=(ATest_Actor&& _Other) noexcept = delete;


protected:
	void Tick(float _DeltaTime) override;


private:
	std::shared_ptr<class Test_Rederer_LHJ> Renderer = nullptr;

};
