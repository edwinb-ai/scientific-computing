#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

void PrintMatrix(double** matrix, std::string nameMatrix, int rows, int cols);
//void RemoveColsRows(double** matrix, int column, int row, int size);
double Determinant(double** matrix, int size);
//void DefineMatrix(double** matrix);


int main()
{
    const int SIZE = 3;
    int numRows = SIZE; int numCols = SIZE;
    double** A;
    A = new double* [SIZE];
    for (int i = 0; i < SIZE; i++)
      {
	A[i] = new double [SIZE];
      }

  std::cout << "Enter values for matrix: " << std::endl;
  double a[SIZE];

  for (int i = 0; i < numRows; i++)
    {
      for (int j = 0; j < numCols; j++)
	{
	  std::cin >> a[i];
	  A[i][j] = a[i];
	}
    }
    //AssignValues(A, SIZE, numRows, numCols);
    PrintMatrix(A, std::string("A"), numRows, numCols);
    double dDet = Determinant(A, SIZE);
    std::cout << "Determinant of matrix: " << dDet << std::endl;

    for (int i = 0; i < SIZE; i++)
      {
	delete [] A[i];
      }
    delete[] A;

    return 0;
}

double Determinant(double** matrix, int size)
{
    assert(size > 0);

    double det = 0; // Store the value of the determinant
    double** m;
    
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
        det = 0;
        for (int i = 0; i < size; i++)
        {
	  m = new double* [size-1];
	  for (int a = 0; a < size-1; a++)
	    {
	      m[a] = new double [size-1];
	    }
	  
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
		    k++;
                }
            }
            det += pow( -1, 2+i )*matrix[0][i]*Determinant(m, size-1);
	    
            for (int b = 0; b < (size-1); b++)
	      {
		delete[] m[b];
	      }
	    delete[] m;
        }
    }

    return det;
}

void PrintMatrix(double** matrix, std::string nameMatrix, int rows, int cols)
{
  std::cout << "Matrix " << nameMatrix << ": " << std::endl;
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	std::cout << matrix[i][j] << ", ";
  
    std::cout << std::endl;
    }
}

