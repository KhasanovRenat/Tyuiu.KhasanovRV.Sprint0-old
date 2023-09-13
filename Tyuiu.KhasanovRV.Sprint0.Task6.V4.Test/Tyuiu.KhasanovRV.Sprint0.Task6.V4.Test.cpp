#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.Sprint0.Task6.V4.Lib/Tyuiu.KhasanovRV.Sprint0.Task6.V4.Lib.cpp"

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
			int a = 5, b = 7, x = 0, y = 4, rez;

			//run
			rez = date->Calculate(a, b, x, y);

			//Valid
			Assert::AreEqual(0, rez);
		}

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task4* date = new Service1();
			int a = 5, b = 7, x = 1, y = -2, rez;

			//run
			rez = date->Calculate(a, b, x, y);

			//Valid
			Assert::AreEqual(1, rez);
		}

		TEST_METHOD(TestMethod3)
		{
			// Init
			ISprint0Task4* date = new Service1();
			int a = 5, b = 7, x = 4, y = 3, rez;

			//run
			rez = date->Calculate(a, b, x, y);

			//Valid
			Assert::AreEqual(2, rez);
		}

	};
}