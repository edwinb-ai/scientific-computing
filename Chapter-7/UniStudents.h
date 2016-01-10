#ifndef UNISTUDENTS_CHAPTER_7_H
#define UNISTUDENTS_CHAPTER_7_H

#include <string>

class UniStudents
{
private:
	double libraryFines;

public:
	UniStudents();
	std::string studentName;
	double tuitionFees;
	virtual double TotalOwed();
	double GetLibraryFines();
	void SetLibraryFine(double fine);
};

#endif