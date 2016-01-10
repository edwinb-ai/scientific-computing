#ifndef CHAPTER_7_GUEST_H
#define CHAPTER_7_GUEST_H

#include <string>

class Guest
{
public:
	std::string name, roomType, arrivalDate;
	int numberOfNights;
	double telephoneBill;
	virtual double CalculateBill();
};

#endif

