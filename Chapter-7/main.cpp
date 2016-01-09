#include <iostream>
// #include "Ebook.h"	// Uncomment for Ebook example use
#include "Guest.h"		// Uncomment for Guest examples use
#include "SpecialGuest.h"

int main()
{
	/* 
	 *=== Ebook example ===*

    Ebook holiday_reading;
    holiday_reading.title = "The skull beneath the skin";
    holiday_reading.author = "P D James";

    std::cout << "The author is: " << holiday_reading.author
            << "\n";
    std::cout << "The title is: " << holiday_reading.title
            << "\n";
    std::cout << "The format is: " << holiday_reading.format
            << "\n";

    holiday_reading.SetYearOfPublication(1982);
    std::cout << "Year of publication is " << holiday_reading.GetYearOfPublication()
            << "\n";

    holiday_reading.hiddenUrl = "http://ebook.example.com/example-ebook";
    std::cout << "The URL is " << holiday_reading.hiddenUrl << "\n";

    return 0;
	*/

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

	delete p_gu1;
	delete p_gu2;
	delete p_gu3;

	return 0;
}