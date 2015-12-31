#include "ComplexNumber.h"
#include "ComplexMatrix.h"
#include <cassert>
#include <mach/task.h>

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

	return output;
}

bool ComplexMatrix::IsSquare() const
{
    return mNumCols == mNumRows;
}

// Matrix multiplication definition
ComplexMatrix operator*(const ComplexMatrix &A, const ComplexMatrix& B)
{
    assert(A.IsSquare());

    int numRows = A.GetNumberOfRows();
    int numCols = A.GetNumberOfCols();
    ComplexMatrix C(numRows, numCols);

    for (int i  = 0; i < numRows; i++)
    {
        for (int j = 0; j < numRows; j++)
        {
            for (int k = 0; k < numRows; k++)
            {
                C.mMemory[i][j] = C.mMemory[i][j] + A.mMemory[i][k] * B.mMemory[k][j];
            }
        }
    }

    return C;
}

// Calculate power of matrix
ComplexMatrix CalculatePower(const ComplexMatrix &A, int n)
{
    assert(n >= 0);

    ComplexMatrix B(A.mNumRows, A.mNumCols);

    if (n == 0)
    {
        for (int i = 0; i < A.mNumRows; i++)
        {
            for (int j = 0; j < A.mNumCols; j++)
            {
                B.mMemory[i][j] = A.mMemory[i][j].CalculatePower(0);
            }
        }

        return B;
    }

    else if (n == 1)
    {
        return A;
    }

    else if (n % 2 == 0)
        // is even
    {
        return CalculatePower(A * A, n / 2);
    }

    else if (n % 2 != 0)
        // is odd
    {
        return A * CalculatePower(A * A, (n - 1) / 2);
    }
}

// Unary +
ComplexMatrix ComplexMatrix::operator+() const
{
    ComplexMatrix mat(mNumRows, mNumCols);
    for (int i = 0; i < mNumRows; i++)
    {
        for (int j = 0; j < mNumCols; j++)
        {
            mat(i, j) = mMemory[i][j];
        }
    }

    return mat;
}

// Unary -
ComplexMatrix ComplexMatrix::operator-() const
{
    ComplexMatrix mat(mNumRows, mNumCols);
    for (int i = 0; i < mNumRows; ++i) {
        for (int j = 0; j < mNumCols; ++j) {
            mat(i, j) = -mMemory[i][j];
        }
    }

    return mat;
}

// Binary +
ComplexMatrix ComplexMatrix::operator+(const ComplexMatrix &A) const
{
    assert(mNumRows == A.mNumRows);
    assert(mNumCols == A.mNumCols);
    ComplexMatrix mat(mNumRows, mNumCols);
    for (int i = 0; i < mNumRows; ++i)
    {
        for (int j = 0; j < mNumCols; ++j)
        {
            mat(i, j) = mMemory[i][j] + A.mMemory[i][j];
        }
    }

    return mat;
}

// Binary -
ComplexMatrix ComplexMatrix::operator-(const ComplexMatrix &A) const
{
    assert(mNumRows == A.mNumRows);
    assert(mNumCols == A.mNumCols);
    ComplexMatrix mat(mNumRows, mNumCols);
    for (int i = 0; i < mNumRows; ++i) {
        for (int j = 0; j < mNumCols; ++j) {
            mat(i, j) = mMemory[i][j] - A.mMemory[i][j];
        }
    }

    return mat;
}

// Scalar multiplication
ComplexMatrix ComplexMatrix::operator*(const ComplexNumber &z) const
{
    ComplexMatrix mat(mNumRows, mNumCols);

    for (int i = 0; i < mNumRows; ++i)
    {
        for (int j = 0; j < mNumCols; ++j)
        {
            mat(i, j) = z * mMemory[i][j];
        }
    }

    return mat;
}
