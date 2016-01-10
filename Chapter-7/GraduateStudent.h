#ifndef GRADUATESTUDENT_CHAPTER_7_H
#define GRADUATESTUDENT_CHAPTER_7_H

#include "UniStudents.h"

class GraduateStudent : public UniStudents
{
public:
	bool fullTime;
	double TotalOwed();
};

#endif

