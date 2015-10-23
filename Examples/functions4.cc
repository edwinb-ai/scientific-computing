#include <iostream>
#include <string>

double** AllocateMatrixMemory(int numRows, int numCols);
void FreeMatrixMemory(int numRows, double** matrix);
void PrintMatrix(double** matrix, std::string nameMatrix, int rows, int cols);

int main()
{
    double** A;
    int numRows = 5, numCols = 3;
    A = AllocateMatrixMemory(numRows, numCols);
    A[0][1] = 2.0;
    A[4][2] = 4.0;
    PrintMatrix(A, "A", numRows, numCols);
    FreeMatrixMemory(5, A);

    return 0;
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
