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
  double GetRealPart() const;
  double GetImaginaryPart() const;
  ComplexNumber CalculateConjugate() const;
  friend std::ostream& operator<< (std::ostream& ouput,
				   const ComplexNumber& z);
  friend double GetRealPart(const ComplexNumber& z);
  friend double GetImaginaryPart(const ComplexNumber& z);
};

/* 
 *
 *
 * ==== Complex matrix class ====
 *
 */
class ComplexMatrix
{
	private:
		int mNumRows, mNumCols;
		ComplexNumber** mMemory;
	public:
		ComplexMatrix(const ComplexMatrix& A);
		ComplexMatrix(int numRows, int numCols);
		~ComplexMatrix();
		int GetNumberOfRows() const;
		int GetNumberOfCols() const;
		double CalculateDeterminant() const;
		double CalculateInverse() const;
		ComplexMatrix MatrixMultiplication(const ComplexMatrix& A, 
				const ComplexMatrix& B);
		ComplexMatrix CalculatePower(double n) const;
		ComplexNumber& operator() (int i, int j);
	    ComplexMatrix& operator= (const ComplexMatrix& A);
		ComplexMatrix operator+ () const;	// unary +
	    ComplexMatrix operator- () const;	// unary -
	    ComplexMatrix operator+ (const ComplexMatrix& A) const;	// binary +
	    ComplexMatrix operator- (const ComplexMatrix& A) const;	// binary -
		// Scalar multiplication
		ComplexMatrix operator* (const ComplexMatrix& A) const; 
		// Print in matrix form
		friend std::ostream& operator<< (std::ostream& ouput,
				   const ComplexMatrix& A);
};

#endif /* COMPLEXNUMBER_H */

