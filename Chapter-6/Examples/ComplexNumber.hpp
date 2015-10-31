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
  ComplexNumber(double x, double y);
  double CalculateModulus() const;
  double CalculateArgument() const;
  ComplexNumber CalculatePower (double n) const;
  ComplexNumber& operator= (const ComplexNumber& z);
  ComplexNumber operator- () const;
  ComplexNumber operator+ (const ComplexNumber& z) const;
  ComplexNumber operator- (const ComplexNumber& z) const;
  friend std::ostream& operator<< (std::ostream& ouput,
				   const ComplexNumber& z);
};

#endif /* COMPLEXNUMBER_H */
