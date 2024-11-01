#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2.i/Lab_6.2.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62i
{
	TEST_CLASS(UnitTest62i)
	{
	public:


        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 10;
            int arr[SIZE]{};
            int MIN = -10;
            int MAX = 10;
            create(arr, SIZE, MIN, MAX);
            Assert::AreEqual(3, findLargestOddIndex(arr, SIZE), 0.001);
        }
    };
}
