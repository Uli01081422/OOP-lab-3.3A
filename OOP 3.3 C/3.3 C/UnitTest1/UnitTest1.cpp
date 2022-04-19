#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3 C/FuzzyNumber.h"
#include "../3.3 C/FuzzyNumber.cpp"
#include "../3.3 C/Object.h"
#include "../3.3 C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);

		}
	};
}
