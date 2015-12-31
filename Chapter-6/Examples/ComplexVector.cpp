/*
 * =====================================================================================
 *
 *       Filename:  ComplexVector.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/05/2015 09:31:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ComplexNumber.h"
#include "ComplexVector.h"
#include <iostream>
#include <cmath>
#include <cassert>

ComplexVector::ComplexVector(const ComplexVector& v)
{
	mSize = v.mSize;
	mMemory = new ComplexNumber [mSize];
	for (int i = 0; i < mSize; i++)
	{
		mMemory[i] = v.mMemory[i];
	}
}

ComplexVector::ComplexVector(int size)
{
    assert(size > 0);
    mSize = size;
    mMemory = new ComplexNumber [mSize];
	for (int i = 0; i < mSize; ++i)
	{
		mMemory[i] = 0.0;
	}
}

ComplexVector::~ComplexVector()
{
	delete[] mMemory;
}

int ComplexVector::GetSize() const
{
	return mSize;
}

ComplexNumber &ComplexVector::operator[](int i)
{
	assert(i > -1);
	assert(i < mSize);
	return mMemory[i];
}

ComplexVector &ComplexVector::operator=(const ComplexVector &v)
{
	assert(mSize == v.mSize);

	for (int i = 0; i < mSize; ++i)
	{
		mMemory[i] = v.mMemory[i];
	}

	return *this;
}

//Unary + operator
ComplexVector ComplexVector::operator+() const
{
	ComplexVector v(mSize);

	for (int i = 0; i < mSize; ++i)
	{
		v[i] = mMemory[i];
	}

	return v;
}

// Unary - operator
ComplexVector ComplexVector::operator-() const
{
	ComplexVector v(mSize);

	for (int i = 0; i < mSize; ++i)
	{
		v[i] = -mMemory[i];
	}

	return v;
}

// Binary + operator
ComplexVector ComplexVector::operator+(const ComplexVector &v) const
{
	assert(mSize == v.mSize);

	ComplexVector w(mSize);
	for (int i = 0; i < mSize; ++i)
	{
		w[i] = mMemory[i] + v.mMemory[i];
	}
	return v;
}

// Binary - operator
ComplexVector ComplexVector::operator-(const ComplexVector &v) const
{
	assert(mSize == v.mSize);

	ComplexVector w(mSize);
	for (int i = 0; i < mSize; ++i)
	{
		w[i] = mMemory[i] - v.mMemory[i];
	}
	return w;
}


ComplexVector ComplexVector::operator*(ComplexNumber &a) const
{
	ComplexVector v(mSize);
	for (int i = 0; i < mSize; ++i)
	{
    	v[i] = a * mMemory[i];
	}

	return v;
}

int Length(const ComplexVector &v)
{
	return v.mSize;
}

std::ostream &operator<<(std::ostream &output, const ComplexVector &v) {

	output << "\n";

	for (int i = 0; i < v.mSize; ++i) {
		output << v.mMemory[i] << "\n";
	}

	return output;
}
