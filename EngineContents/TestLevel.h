#pragma once
#include <EngineCore/GameMode.h>

// Ό³Έν :
class ATestLevel : public AGameMode
{
public:
	// constrcuter destructer
	ATestLevel();
	~ATestLevel();

	// delete Function
	ATestLevel(const ATestLevel& _Other) = delete;
	ATestLevel(ATestLevel&& _Other) noexcept = delete;
	ATestLevel& operator=(const ATestLevel& _Other) = delete;
	ATestLevel& operator=(ATestLevel&& _Other) noexcept = delete;

protected:
	void BeginPlay() override;
	void Tick(float _DeltaTime) override;


private:
	std::shared_ptr<class Test_Rederer_LHJ> Renderer = nullptr;
};
