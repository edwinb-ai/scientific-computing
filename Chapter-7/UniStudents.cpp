#include "UniStudents.h"
#include <cassert>


UniStudents::UniStudents()
{
	libraryFines = 0.0;
	tuitionFees = 5000.0;
}

double UniStudents::TotalOwed()
{
	return libraryFines + tuitionFees;
}


double UniStudents::GetLibraryFines()
{
	return libraryFines;
}


void UniStudents::SetLibraryFine(double fine)
{
	assert(fine > 0);
	libraryFines = fine;
}
