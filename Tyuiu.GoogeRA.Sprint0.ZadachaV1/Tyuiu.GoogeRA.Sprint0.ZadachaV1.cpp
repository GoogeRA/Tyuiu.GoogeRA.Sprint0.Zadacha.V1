#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GoogeRA.Sprint0.Zadacha.V1.Lib/Tyuiu.GoogeRA.Sprint0.Zadacha.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuGoogeRASprint0ZadachaV1
{
	TEST_CLASS(TyuiuGoogeRASprint0ZadachaV1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* diva = new Service();
			int a = 5;
			int b = 50;
			int c = 1;
			int z;
			z = diva->Rezultat(a, b, c);


		}
	};
}
