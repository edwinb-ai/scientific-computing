#include "SpecialGuest.h"

double SpecialGuest::CalculateBill()
{
	return 45.0 + ((double) (numberOfNights-1)) * 40.0;
}
