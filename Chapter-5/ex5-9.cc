/*
 * =====================================================================================
 *
 *       Filename:  ex5-9.cc
 *
 *    Description:  Exercise 5.9
 *
 *        Version:  1.0
 *        Created:  10/13/2015 13:13:05
 *       Revision:  none
 *       Compiler:  clang
 *
 *         Author:  Edwin Bedolla (lorenz_attractor), developedwin@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cassert>
#include "matrices.h"

// Define struct for matrix
struct Matrix {
	int size;
	double** memory;
};

// Define struct for vector
struct Vector {
	int size;
	double** memory;
};

double CalculateDeterminant(double** matrix, int iSize)
{
    assert(iSize > 0);

    double det = 0; // Store the value of the determinant
    double** m = AllocateMatrixMemory(iSize-1, iSize-1);

    if (iSize == 1)
    {
        det = matrix[0][0];
    }

    else if (iSize == 2)
    {
        det = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }

    else
    {
        for (int i = 0; i < iSize; i++)
        {
            for (int j = 1; j < iSize; j++)
            {
                int k = 0;
                for (int l = 0; l < iSize; l++)
                {
                    if (l == i)
                    {
                        continue;
                    }
                    m[j-1][k] = matrix[j][l];
                }
            }
            det += pow( -1, (iSize-1) )*matrix[0][i]*Determinant(m, iSize-1);
            FreeMatrixMemory(iSize-1, m);
        }
    }

    return det;
}

bool IsSingular(double determinant)
{
	if (determinant != 0)
	{
		return False;
	}
	else
	{
		return True;
	}
}


double** CalculateInverse(double** matrix, )
