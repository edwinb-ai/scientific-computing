/*
 * =====================================================================================
 *
 *       Filename:  ComplexVector.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/05/2015 09:20:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ComplexNumber.hpp"

#ifndef COMPLEXVECTOR_H
#define COMPLEXVECTOR_H

class ComplexVector
{
	private:
		ComplexNumber* mMemory;
		int mSize;
	public:
		ComplexVector (const ComplexVector& v);
		ComplexVector(int size);
		~ComplexVector;
		int GetSize() const;
		ComplexNumber& operator[] (int i);
		ComplexVector& operator= (const ComplexVector& v);
		ComplexVector operator+ () const;	// Unary +
		ComplexVector operator- () const;	// Unary -
		ComplexVector operator+ (const ComplexVector& v) const;
		ComplexVector operator- (const ComplexVector& v) const;
		// Scalar multiplication
		ComplexVector operator* (double a) const;

		friend int Length (const ComplexVector& v);
};

int Length (const ComplexVector& v);

#endif

