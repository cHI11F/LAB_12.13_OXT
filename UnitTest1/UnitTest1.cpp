#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_12.13_OXT/LAB_12.13_OXT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestAddEmployee)
		{
			HashTable phoneBook;
			Employee emp("Doe", "123456", "101");
			phoneBook.addEmployee(emp);
			Assert::IsNotNull(phoneBook.searchByPhoneNumber("123456"));
		}

		TEST_METHOD(TestDeleteEmployee)
		{
			HashTable phoneBook;
			Employee emp("Doe", "123456", "101");
			phoneBook.addEmployee(emp);
			phoneBook.deleteEmployee("123456");
			Assert::IsNull(phoneBook.searchByPhoneNumber("123456"));
		}
	};
}
