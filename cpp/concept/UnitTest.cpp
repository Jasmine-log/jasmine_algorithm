#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class Solution {
public:
	int calculator(int a, int b) {
		return a + b;
	}

	string brand(string str) {
		return str;
	}
};

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int expected = 7;
			Solution solution;

			//Assert::AreEqual(expected, actual);
			Assert::AreEqual(expected, solution.calculator(4, 3));
		}

		TEST_METHOD(TestMethod2)
		{
			string expected = "3M";
			Solution solution;

			Assert::AreEqual(expected, solution.brand("3M"));
		}
	};
}
