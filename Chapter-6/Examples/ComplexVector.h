#ifndef COMPLEXVECTOR_H
#define COMPLEXVECTOR_H

#include "ComplexNumber.h"

class ComplexVector
{
	private:
		ComplexNumber* mMemory;
		int mSize;
	public:
		ComplexVector (const ComplexVector& v);
		ComplexVector(int size);
		~ComplexVector();
		int GetSize() const;
		ComplexNumber& operator[] (int i);
		ComplexVector& operator= (const ComplexVector& v);
		ComplexVector operator+ () const;	// Unary +
		ComplexVector operator- () const;	// Unary -
		ComplexVector operator+ (const ComplexVector& v) const;
		ComplexVector operator- (const ComplexVector& v) const;
		// Scalar multiplication
		ComplexVector operator*(ComplexNumber &a) const;
		friend std::ostream& operator<< (std::ostream& output,
										 const ComplexVector& v);
		friend int Length (const ComplexVector& v);
};

int Length (const ComplexVector& v);
std::ostream& operator<< (std::ostream&output,
										 const ComplexVector& v);
#endif

