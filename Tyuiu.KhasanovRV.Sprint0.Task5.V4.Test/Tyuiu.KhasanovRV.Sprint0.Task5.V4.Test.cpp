#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint0.Task5.V4.Lib/Tyuiu.KhasanovRV.Sprint0.Task5.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task5* date = new Service1();
			int a = 67, b = 8.5, c = 6.5, rez;

			//run
			rez = date->Zadacha(a, b, c);

			//Valid
			Assert::AreEqual(74, rez);
		}
	};
}