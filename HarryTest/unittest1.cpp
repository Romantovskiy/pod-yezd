#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Harry\pch.h"
#include "C:\Users\Admin\source\repos\Harry\Harry\Harry.cpp"
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HarryTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test01)
		{
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(Test02)
		{
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(Test03)
		{
			Assert::AreEqual(1, program(1,1,1));
		}
		TEST_METHOD(Test04)
		{
			Assert::AreEqual(1, program(7,8,6));
		}
		TEST_METHOD(Test05)
		{
			Assert::AreEqual(1, program(7,8,56));
		}
		TEST_METHOD(Test06)
		{
			Assert::AreEqual(2, program(7,8,57));
		}
		TEST_METHOD(Test07)
		{
			Assert::AreEqual(2, program(7,8,112));
		}
		TEST_METHOD(Test08)
		{
			Assert::AreEqual(3, program(7,8,113));
		}
		TEST_METHOD(Test09)
		{
			Assert::AreEqual(0, program(5,-1,6));
		}
		TEST_METHOD(Test10)
		{
			Assert::AreEqual(0, program(-1,5,6));
		}

	};
}