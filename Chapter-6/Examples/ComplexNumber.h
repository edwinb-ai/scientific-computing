#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>

class ComplexNumber
{
private:
	double mRealPart;
	double mImaginaryPart;
public:
	ComplexNumber();
	ComplexNumber(const ComplexNumber& w);
	ComplexNumber(double x, double y);
	ComplexNumber(double x);
	double CalculateModulus() const;
	double CalculateArgument() const;
	ComplexNumber CalculatePower (double n) const;
	ComplexNumber& operator= (const ComplexNumber& z);
	ComplexNumber operator- () const;
	ComplexNumber operator+ (const ComplexNumber& z) const;
	ComplexNumber operator- (const ComplexNumber& z) const;
	ComplexNumber operator* (const ComplexNumber& z) const;
	double GetRealPart() const;
	double GetImaginaryPart() const;
	ComplexNumber CalculateConjugate() const;
	friend std::ostream& operator<< (std::ostream& output,
									 const ComplexNumber& z);
	friend double GetRealPart(const ComplexNumber& z);
	friend double GetImaginaryPart(const ComplexNumber& z);
};


#endif /* COMPLEXNUMBER_H */

