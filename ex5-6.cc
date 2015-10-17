/*
 * =====================================================================================
 *
 *       Filename:  ex5-5.cc
 *
 *    Description:  Exercise 5.5
 *
 *        Version:  1.0
 *        Created:  10/13/2015 11:21:31
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "matrices.h"
#include <cassert>

double** Multiply(double** matrixA,int sizeA, double** matrixB, int sizeB);

int main()
{
	// Create struct for better handling of matrices
	struct Matrix {
		int size;
		double** memory;
	};
	
	// Declare the first matrix
	Matrix A;
	std::cout << "Enter first matrix size: ";
	std::cin >> A.size;
	std::cout << std::endl;
	// Allocate Memory for matrix A
	A.memory = AllocateMatrixMemory(A.size, A.size);
	// Ask for matrix values
	std::cout << "Enter values for first matrix: " << std::endl;
    double* a = new double [A.size];
    for (int i = 0; i < A.size; i++)
      {
        for (int j = 0; j < A.size; j++)
            {
                std::cin >> a[i];
                A.memory[i][j] = a[i];
            }
      }
	delete[] a;

	// Declare the second matrix
	Matrix B;
	std::cout << "Enter second matrix size: ";
	std::cin >> B.size;
	std::cout << std::endl;
	B.memory = AllocateMatrixMemory(B.size, B.size);
	// Ask for matrix values
	std::cout << "Enter values for second matrix: " << std::endl;
    double* b = new double [B.size]; 
    for (int i = 0; i < B.size; i++)
      {
        for (int j = 0; j < B.size; j++)
            {
                std::cin >> b[i];
                B.memory[i][j] = b[i];
            }
      }
	delete[] b;

	// Multiply matrices
	Matrix C;
	C.size = A.size;
	C.memory = Multiply(A.memory, A.size, B.memory, B.size);

	// Print result matrix
	PrintMatrix(C.memory, "Result", C.size, C.size);

	// Free memory from matrices
	FreeMatrixMemory(A.size, A.memory);
	FreeMatrixMemory(B.size, B.memory);
	FreeMatrixMemory(C.size, C.memory);

	return 0;
}


double** Multiply(double** matrixA,int sizeA, double** matrixB, int sizeB)
{
	// Check for matrices with the same size
	assert(sizeA == sizeB);

	// Multiply matrices	
	
	// First, define result storage matrix
	double** matrixC = AllocateMatrixMemory(sizeA, sizeA);
	// Multiply matrixA and matrixB
	
	for (int i = 0; i < sizeB; i++)
	{
		for (int j = 0; j < sizeB; j++)
		{
			for (int k = 0; k < sizeB; k++)
			{
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}
	
	return matrixC;
}
