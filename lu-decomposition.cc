#include <iostream>
#include <string>
#include <cmath>

double** AllocateMatrixMemory(int numRows, int numCols);
void FreeMatrixMemory(int numRows, double** matrix);
void PrintMatrix(double** matrix, std::string nameMatrix, int rows, int cols);
double** AssignValues(double** matrix, int iSize, int rows, int cols);
double MatrixDeterminant(double** matrix, int rows, int cols);

int main()
{
    double** A;
    //double** B;
    int numRows = 5, numCols = 5;
    int matrix_size = numRows * numCols;
    A = AllocateMatrixMemory(numRows, numCols);
    AssignValues(A, matrix_size, numRows, numCols);
    PrintMatrix(A, "A", numRows, numCols);
    FreeMatrixMemory(numRows, A);

    return 0;
}

// Calculate matrix determinant
double MatrixDeterminant(double** matrix, int rows, int cols)
{
    
}

// Assing values to matrix
double** AssignValues(double** dMatrix, int iSize, int rows, int cols)
{
    std::cout << "Enter values for A: " << std::endl;
    double a[iSize];
    for (int i = 0; i < rows; i++)
      {
        for (int j = 0; j < cols; j++)
            {
                std::cin >> a[i];
                dMatrix[i][j] = a[i];
            }
      }
    return dMatrix;
}

// Function to allocate memory for a matrix dynamically
double** AllocateMatrixMemory(int numRows, int numCols)
{
    double** matrix;
    matrix = new double* [numRows];
    for (int i=0; i < numRows; i++)
    {
        matrix[i] = new double [numCols];
    }
    return matrix;
}

// Function to free memory of a matrix
void FreeMatrixMemory(int numRows, double** matrix)
{
    for (int i = 0; i < numRows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

// Print the matrix
void PrintMatrix(double** matrix, std::string nameMatrix, int rows, int cols)
{
    std::cout << "Matrix " << nameMatrix << ": " << std::endl;
      for (int i = 0; i < rows; i++)
      {
          for (int j = 0; j < cols; j++)
              std::cout << matrix[i][j] << ", ";
          std::cout << "\t" << std::endl;
      }
      std::cout << std::endl;
}
