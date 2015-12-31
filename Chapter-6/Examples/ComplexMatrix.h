//
// Created by Edwin Bedolla on 11/6/15.
//

#ifndef EXAMPLES_COMPLEXMATRIX_H
#define EXAMPLES_COMPLEXMATRIX_H

#include "ComplexNumber.h"

class ComplexMatrix
{
	private:
		int mNumRows, mNumCols;
		ComplexNumber** mMemory;
	public:
		ComplexMatrix(const ComplexMatrix& A);
		ComplexMatrix(int numRows, int numCols);
        // Custom destructor
		~ComplexMatrix();
		int GetNumberOfRows() const;
		int GetNumberOfCols() const;
        bool IsSquare() const;
//        ComplexMatrix CalculatePower(int n) const;
        ComplexNumber& operator() (int i, int j);
	    ComplexMatrix& operator= (const ComplexMatrix& A);
		ComplexMatrix operator+ () const;	// unary +
	    ComplexMatrix operator- () const;	// unary -
	    ComplexMatrix operator+ (const ComplexMatrix& A) const;	// binary +
	    ComplexMatrix operator- (const ComplexMatrix& A) const;	// binary -
		// Scalar multiplication
		ComplexMatrix operator* (const ComplexNumber& z) const;
		// Print in matrix form
		friend std::ostream& operator<< (std::ostream& output,
				   const ComplexMatrix& A);
        friend ComplexMatrix operator* (const ComplexMatrix& A, const ComplexMatrix& B);
        friend ComplexMatrix CalculatePower(const ComplexMatrix& A, int n);
};

// Friend function prototype
std::ostream& operator<< (std::ostream& output,
				   const ComplexMatrix& A);
ComplexMatrix operator* (const ComplexMatrix& A, const ComplexMatrix& B);
ComplexMatrix CalculatePower(const ComplexMatrix& A, int n);

#endif //EXAMPLES_COMPLEXMATRIX_H
