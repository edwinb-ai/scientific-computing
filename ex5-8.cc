#include <iostream>
#include <cmath>
#include <cassert>
#include "matrices.h"

//void RemoveColsRows(double** matrix, int column, int row, int size);
double Determinant(double** matrix, int size);
//void DefineMatrix(double** matrix);

int main()
{
    const int SIZE = 3;
    int numRows = SIZE; int numCols = SIZE;
    double** A = AllocateMatrixMemory(numRows, numCols);
    AssignValues(A, SIZE, numRows, numCols);
    PrintMatrix(A, std::string("A"), numRows, numCols);
    double dDet = Determinant(A, SIZE);
    std::cout << "Determinant of matrix: " << dDet << std::endl;
    FreeMatrixMemory(SIZE, A);

    return 0;
}

double Determinant(double** matrix, int size)
{
    assert(size > 0);

    double det = 0; // Store the value of the determinant
    double** m = AllocateMatrixMemory(size-1, size-1);

    if (size == 1)
    {
        det = matrix[0][0];
    }

    else if (size == 2)
    {
        det = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    }

    else
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 1; j < size; j++)
            {
                int k = 0;
                for (int l = 0; l < size; l++)
                {
                    if (l == i)
                    {
                        continue;
                    }
                    m[j-1][k] = matrix[j][l];
                }
            }
            det += pow( -1, (size-1) )*matrix[0][i]*Determinant(m, size-1);
            FreeMatrixMemory(size-1, m);
        }
    }

    return det;
}
