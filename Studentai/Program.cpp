#include <iostream>
#include "Studentai_Class.h"
#include <list>

using namespace std;

int main()
{
	Studentai_Class studentai;

	studentai.analyzeSpeedWithLists(1, 100000);
	studentai.analyzeSpeedWithLists(1, 1000000);

	return 0;
}