/*
 * =====================================================================================
 *
 *       Filename:  ComplexMatrix.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/05/2015 09:14:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ComplexNumber.hpp"


ComplexMatrix::ComplexMatrix(const ComplexMatrix& A)
{
	mNumRows = A.mNumRows;
	mNumCols = A.mNumCols;
	mMemory = new ComplexNumber* [mNumRows];
	for (int i = 0; i < mNumRows; i++)
	{
		mMemory[i] = new ComplexNumber [mNumCols];
	}
	for (int i = 0; i < mNumRows; i++)
	{
		for (int j = 0; j < mNumCols; j++)
		{
			mMemory[i][j] = A.mMemory[i][j];
		}

	}
}

ComplexMatrix::ComplexMatrix(int numRows, int numCols)
{
	mNumRows = numRows;
	mNumCols = numCols;
	mMemory = new ComplexNumber* [mNumRows];
	for (int i = 0; i < mNumRows; i++)
	{
		mMemory[i] = new ComplexNumber [mNumCols];
	}
	for (int i = 0; i < mNumRows; i++)
	{
		for (int j = 0; j < mNumCols; j++)
		{
			mMemory[i][j] = 0.0;
		}
	}
}

ComplexMatrix::~ComplexMatrix()
{
	for (int i = 0; i < mNumRows; i++)
	{
		delete[] mMemory[i];
	}
	delete[] mMemory;
}

int ComplexMatrix::GetNumberOfRows() const
{
	return mNumRows;
}

int ComplexMatrix::GetNumberOfCols() const
{
	return mNumCols;
}

ComplexNumber& ComplexMatrix::operator() (int i, int j)
{
	return mMemory[i][j];
}

ComplexMatrix& ComplexMatrix::operator= (const ComplexMatrix& A)
{
	for (int i = 0; i < mNumRows; i++)
	{
		for (int j = 0; j < mNumCols; j++)
		{
			mMemory[i][j] = A.mMemory[i][j];
		}
	}

	return *this;
}

// Overloading the insertion "<<" operator
std::ostream& operator<< (std::ostream& output,	const ComplexMatrix& A)
{
	output << "\n";

	for (int i = 0; i < A.mNumRows; i++)
	{
		for (int j = 0; j < A.mNumCols; j++)
		{
			output << A.mMemory[i][j] << ", ";
		}	
		output << "\t" << "\n";
	}
	output << "\n";
}

/*
 *
 *
 * 	===== TODO:
 * 				* CalculateDeterminant
 * 				* CalculateInverse
 * 				* MatrixMultiplication
 * 				* CalculatePower
 */

