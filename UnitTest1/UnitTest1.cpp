#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab 1.3/Rational.h"
#include "../OOPLab 1.3/Rationalcpp.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational x;
			x.Init(5, 8,2,3);
			Assert::AreEqual(x.Mnojennya(),5);
		}
	};
}
