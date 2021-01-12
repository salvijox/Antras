#include "pch.h"
#include "CppUnitTest.h"
#include <list>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StudentaiTests
{
	TEST_CLASS(StudentaiTests)
	{
	public:
		
		TEST_METHOD(TestStudentSetName)
		{
			Studentas_Class stud;
			std::string name = "Jonas";
			stud.set_name("Jonas");
			Assert::AreEqual(name, stud.get_name());
		}

		TEST_METHOD(TestGetFinalResult)
		{
			Studentas_Class stud;
			float result = (9);
			stud.set_finalResult(9);
			Assert::AreEqual(result, stud.get_finalResult());
		}

		TEST_METHOD(TestAverage)
		{
			Studentas_Class stud;
			float average = 8.5;
			std::list<int> grades = { 10, 9, 8, 7 };
			stud.set_homeworksGrades(grades);
			Assert::IsTrue(stud.average() == average);
		}

		TEST_METHOD(TestMediana)
		{
			Studentas_Class stud;
			float mediana = 8;
			std::list<int> grades = { 10, 9, 8, 7 };
			stud.set_homeworksGrades(grades);
			Assert::AreNotEqual(stud.findMedian(), mediana);
		}
	};
}
