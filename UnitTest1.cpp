#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
    TEST_CLASS(UnitTest61)
    {
    public:

        TEST_METHOD(TestSum)
        {
            const int n = 15;
            int c[n] = { 15, 21, 30, 17, 40, 25, 18, 33, 50, 19, 22, 27, 60, 31, 45 };

            int t = 187;
            int S = Sum(c, n);

            Assert::AreEqual(t, S);
        }
    };
}
