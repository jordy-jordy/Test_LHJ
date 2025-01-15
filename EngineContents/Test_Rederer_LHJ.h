#pragma once
#include <EngineCore/Renderer.h>

struct FMyColor
{
	float4 Albedo;
};


// Ό³Έν :
class Test_Rederer_LHJ : public URenderer
{
public:
	// constrcuter destructer
	Test_Rederer_LHJ();
	~Test_Rederer_LHJ();

	// delete Function
	Test_Rederer_LHJ(const Test_Rederer_LHJ& _Other) = delete;
	Test_Rederer_LHJ(Test_Rederer_LHJ&& _Other) noexcept = delete;
	Test_Rederer_LHJ& operator=(const Test_Rederer_LHJ& _Other) = delete;
	Test_Rederer_LHJ& operator=(Test_Rederer_LHJ&& _Other) noexcept = delete;

protected:

private:
	FMyColor MyColor;

};
