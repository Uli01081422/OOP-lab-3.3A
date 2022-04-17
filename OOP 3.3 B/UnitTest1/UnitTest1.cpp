#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.3 B/FuzzyNumber.h"
#include "../OOP 3.3 B/FuzzyNumber.cpp"
#include "../OOP 3.3 B/FuzzyNumber_Public.h"
#include "../OOP 3.3 B/FuzzyNumber_Public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber_Public A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);

		}
	};
}
