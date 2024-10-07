#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = sin(1) / (pow(1, 2) + pow(1, 2)) + cos(1) / (1 + abs(1 * 1));
			double a = 1 + c;
			Assert::AreEqual(a, 1,69);
		}
	};
}
