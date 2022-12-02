#include "pch.h"
#include "CppUnitTest.h"
#include "../pr8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = { 'a', 'b', 'g', 'a', 'a', 'c', ' ', 'c', 'h', 'j', 'u', ' ', 's', 'a', 'n', 'm', 'k', 'c' };
			int k = Available(str);
			Assert::AreEqual(k, 1);
		}
	};
}
