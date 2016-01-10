#include <iostream>
 #include "Guest.h"
 #include "SpecialGuest.h"

int main()
{
	Guest* p_gu1 = new Guest;
	Guest* p_gu2 = new Guest;
	Guest* p_gu3 = new SpecialGuest;

	//Set the three guests identically
	p_gu1->numberOfNights = 3;
	p_gu1->telephoneBill = 0.00;
	p_gu2->numberOfNights = 3;
	p_gu2->telephoneBill = 0.00;
	p_gu3->numberOfNights = 3;
	p_gu3->telephoneBill = 0.00;

	std::cout << "Bill for guest 1 = "
		<< p_gu1->CalculateBill() << std::endl;
	std::cout << "Bill for guest 2 = "
		<< p_gu2->CalculateBill() << std::endl;
	std::cout << "Smaller bill for guest 3 = "
		<< p_gu3->CalculateBill() << std::endl;

	// Test dynamic_cast to check for derived classes
	Guest* guest = new SpecialGuest;
	if (SpecialGuest* ptr1 = dynamic_cast<SpecialGuest*>(guest))
	{
		std::cout << "Address of pointer " << &ptr1 << std::endl;
		std::cout << "Derived Class" << std::endl;
	}

	delete p_gu1;
	delete p_gu2;
	delete p_gu3;

	return 0;
}