#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.3E/Object.cpp"
#include "../OOP 3.3E/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 2);
			Assert::AreEqual(2, a.GetSecond());
		}
	};
}
