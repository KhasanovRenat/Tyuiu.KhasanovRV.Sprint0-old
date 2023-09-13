#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint0.Task4.V4.Lib/Tyuiu.KhasanovRV.Sprint0.Task4.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task4* date = new Service1();
			int a = 2, b = 3, c = 7, d = 4, rez;

			//run
			rez = date->Calculate(a, b, c, d);

			//Valid
			Assert::AreEqual(34, rez);
		}
	};
}