#include "ComplexNumber.h"
#include <cmath>

// Override default constructor
// Set real and imaginary parts to zero
ComplexNumber::ComplexNumber()
{
  mRealPart = 0.0;
  mImaginaryPart = 0.0;
}

// Constructor that sets complex number z = x + iy
ComplexNumber::ComplexNumber(double x, double y)
{
  mRealPart = x;
  mImaginaryPart = y;
}

// Constructor that sets complex numbers with the imaginary part set to 0
// just by entering the real part
ComplexNumber::ComplexNumber(double x)
{
  mRealPart = x;
  mImaginaryPart = 0;
}

// Overriden copy constructor
ComplexNumber::ComplexNumber(const ComplexNumber& w)
{
  mRealPart = w.mRealPart;
  mImaginaryPart = w.mImaginaryPart;
}

// Method for computing the modulus of a complex number
double ComplexNumber::CalculateModulus() const
{
  return sqrt(mRealPart*mRealPart +
	      mImaginaryPart*mImaginaryPart);
}

// Method for computing the argument of a complex number
double ComplexNumber::CalculateArgument() const
{
  return atan2(mImaginaryPart, mRealPart);
}

// Method for raising complex numbers to the power n
// using De Moivre's theorem - first complex number
// must be converted to polar form
ComplexNumber ComplexNumber::CalculatePower(double n) const
{
  double modulus = CalculateModulus();
  double argument = CalculateArgument();
  double mod_of_result = pow(modulus, n);
  double arg_of_result = argument * n;
  double real_part = mod_of_result * cos(arg_of_result);
  double imag_part = mod_of_result * sin(arg_of_result);
  ComplexNumber z(real_part, imag_part);

  return z;
}

// Overloading the = (assignment) operator
ComplexNumber& ComplexNumber::operator= (const ComplexNumber& z)
{
  mRealPart = z.mRealPart;
  mImaginaryPart = z.mImaginaryPart;

  return *this;
}

// Overloading the unary - operator
ComplexNumber ComplexNumber::operator- () const
{
  ComplexNumber w;
  w.mRealPart = -mRealPart;
  w.mImaginaryPart = -mImaginaryPart;

  return w;
}

// Overloading the binary + operator
ComplexNumber ComplexNumber::operator+ (const ComplexNumber& z) const
{
  ComplexNumber w;
  w.mRealPart = mRealPart + z.mRealPart;
  w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;

  return w;
}

// Overloading the binary - operator
ComplexNumber ComplexNumber::operator- (const ComplexNumber& z) const
{
  ComplexNumber w;
  w.mRealPart = mRealPart - z.mRealPart;
  w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;

  return w;
}

// Overloading the insertion "<<" operator
std::ostream& operator<< (std::ostream& output,	const ComplexNumber& z)
{
	// Format as "(a + bi)" or as "(a - bi)"
	output << "(" << z.mRealPart << " ";
	
	if (z.mImaginaryPart >= 0.0) 
	{
		output << "+ " << z.mImaginaryPart << "i)";
	}
	else 
	{
		output << "- " << -z.mImaginaryPart << "i)";
	}
}

// Method to calculate conjugate
ComplexNumber ComplexNumber::CalculateConjugate() const
{
  ComplexNumber w;
  w.mRealPart = mRealPart;
  w.mImaginaryPart = mImaginaryPart;
  if (w.mImaginaryPart > 0.0 || w.mImaginaryPart <  0.0)
    {
      w.mImaginaryPart = -mImaginaryPart;
    }
  else
    {
      w.mImaginaryPart = mImaginaryPart;
    }

  return w;
}

// Write method definition for GetRealPart
double ComplexNumber::GetRealPart() const
{
  return mRealPart;
}

double ComplexNumber::GetImaginaryPart() const
{
  return mImaginaryPart;
}

double GetRealPart(const ComplexNumber& z)
{
  return z.mRealPart;
}

double GetImaginaryPart(const ComplexNumber& z)
{
  return z.mImaginaryPart;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &z) const
{
  ComplexNumber w;

  w.mRealPart = (mRealPart*z.mRealPart) - (mImaginaryPart*z.mImaginaryPart);
  w.mImaginaryPart = (mRealPart*z.mImaginaryPart) + (mImaginaryPart*z.mRealPart);

  return w;
}
