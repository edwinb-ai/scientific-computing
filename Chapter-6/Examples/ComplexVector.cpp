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
#include "ComplexNumber.hpp"
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
