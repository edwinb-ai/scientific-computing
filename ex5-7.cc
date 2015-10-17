/*
 * =====================================================================================
 *
 *       Filename:  ex5-7.cc
 *
 *    Description:  Exercise 5.8
 *
 *        Version:  1.0
 *        Created:  10/13/2015 12:47:35
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>

double CalculatePNorm(double* vector, int vecSize, int p = 2);

int main()
{
	// Define struct for better handling of vectors
	struct Vector {
		int size;
		double* memory;
	};

	// Define vector and allocate memory for it
	Vector a;
	std::cout << "Enter size of vector: ";
	std::cin >> a.size;
	a.memory = new double [a.size];

	// Define some values for the vector
	std::cout << "Enter values for vector: ";
	std::cout << std::endl;
	for (int i = 0; i < a.size; i++)
	{
		std::cin >> a.memory[i];
	}

	// Calculate the p-norm
	double norm_value = CalculatePNorm(a.memory, a.size);

	// Print value
	std::cout << "p-norm of input vector is: " << 
		norm_value << std::endl;

	// De-allocate memory for vector
	delete[] a.memory;

	return 0;
}


double CalculatePNorm(double* vector, int vecSize, int p)
{
	double sum = 0.0;

	for (int i = 0; i < vecSize; i++)
	{
		double temp = fabs(vector[i]);
		sum += pow(temp, p);
	}

	return pow(sum, 1.0/p);
}

