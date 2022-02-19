#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			int x=3, y=5;
			Fraction a1;
			t = a1.Init(x, y);

			Assert::AreEqual(t, true);
		}
	};
}
