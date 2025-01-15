#include "PreCompile.h"
#include "Test_Rederer_LHJ.h"

Test_Rederer_LHJ::Test_Rederer_LHJ()
{
	CreateRenderUnit();
	SetMesh("Diamond");
	SetMaterial("MyMaterial");

	MyColor.Albedo = float4(1.0f, 1.0f, 1.0f, 1.0f);
	GetRenderUnit().ConstantBufferLinkData("FMyColor", MyColor);
}

Test_Rederer_LHJ::~Test_Rederer_LHJ()
{

};