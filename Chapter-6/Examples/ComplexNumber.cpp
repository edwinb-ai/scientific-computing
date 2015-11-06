#include "ComplexNumber.hpp"
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


/* 
 *
 * === Define Complex matrix class methods ===
 *
 */

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

namespace MatrixSolve 
{
	// Crout decomposition function
	void CroutDecomposition(ComplexMatrix& A, int n)
	{
		ComplexNumber sum = 0;

		for (int j = 1; j < n; j++)
		{
			A(0, j) /= A(0, 0);
		}

		for (int j = 1; j < n-1; j++)
		{
			for (int i = j; i < n; i++)
			{
				sum = 0;
				for (int k = 0; k < j; k++)
				{
					sum += A(i, k) * A(k, j);
				}
				A(i, j) -= sum;
			}

			for (int k = j+1; k < n; k++)
			{
				sum = 0;
				for (int i = 0; i < j; i++)
				{
					sum += A(j, i) * A(i, k);
				}
				A(j, k) = (A(j, k) - sum) / A(j, j);
			}
		}
		sum = 0;
		for (int k = 0; k < n-1; k++)
		{
			sum += A(n-1, k) * A(k, n-1);
		}
		A(n-1, n-1) -= sum
	}

	// Solve system function
	void SolveSystem(ComplexMatrix& A, )
} // namespace MatrixSolve
