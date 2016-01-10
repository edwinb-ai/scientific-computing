#include <iostream>
#include "UniStudents.h"
#include "GraduateStudent.h"
#include "PhD.h"

int main()
{
	UniStudents edwin;
	edwin.studentName = "Edwin Bedolla";
	edwin.SetLibraryFine(500);

	std::cout << "Total library fine for  " << edwin.studentName
		<< " : " << edwin.TotalOwed() << std::endl;

	// Graduate students
	GraduateStudent student1;
	student1.studentName = "Armando";
	student1.SetLibraryFine(250);
	std::cout << "Total owed by " << student1.studentName << " is: "
		<< student1.TotalOwed() << std::endl;

	// PhD students
	PhD student2;
	student2.studentName = "Edwin";
	std::cout << "PhD student don't owe anything! " << student2.TotalOwed()
		<< std::endl;

	return 0;
}