#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
  // Read command line arguments for rows and columns
  int rows = atoi(argv[1]);
  int cols = atoi(argv[2]);
  size_t matrix_size = rows * cols;
  
  /* Dynamic memory allocation for matrices  */
  // Allocation for A
  double** A;
  A = new double* [rows];
  for (int i = 0; i < rows; i++)
    A[i] = new double [cols];
  // Allocation for B
  double** B;
  B = new double* [rows];
  for (int i = 0; i < rows; i++)
    B[i] = new double [cols];
  // Allocation for C
  double** C;
  C = new double* [rows];
  for (int i = 0; i < rows; i++)
    C[i] = new double [cols];
  
  /* Assign values to matrices  */
  // Assignment for A
  std::cout << "Enter values for A: " << std::endl;
  double a[matrix_size];
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	  std::cin >> a[i];
	  A[i][j] = a[i];
	}
    }
  // Print the matrix just to check if correct
  std::cout << "Matrix 'A': " << std::endl;;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << A[i][j] << ", ";
        std::cout << "\t" << std::endl;
    }
    std::cout << std::endl;
  // Assignment for B
  std::cout << "Enter values for B: " << std::endl;
  double b[matrix_size];
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	  std::cin >> b[i];
	  B[i][j] = b[i];
	}
    }
  // Print the matrix just to check if correct
  std::cout << "Matrix 'B': " << std::endl;;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << B[i][j] << ", ";
        std::cout << "\t" << std::endl;
    }
    std::cout << std::endl;

    /* Sum of matrices  */
    // Dynamically allocate a temporary vector
    double* v;
    v = new double [rows];
    // Perform addition of matrices
    for (int i = 0; i < rows; i++)
      {
	for (int j = 0; j < cols; j++)
	  {
	    v[i] = A[i][j] + B[i][j];
	    C[i][j] = v[i];
	  }
      }
    // Deallocate memory from temporary vector
    delete [] v;
    // Print the matrix just to check if correct
    std::cout << "Matrix 'C': " << std::endl;;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            std::cout << C[i][j] << ", ";
        std::cout << "\t" << std::endl;
    }
    std::cout << std::endl;
    
    /* Deallocate memory from matrices  */
    // Deallocation for A
    for (int i = 0; i < rows; i++)
      delete [] A[i];

    delete[] A;
    // Deallocation for B
    for (int i = 0; i < rows; i++)
      delete [] B[i];

    delete[] B;
    // Deallocation for C
    for (int i = 0; i < rows; i++)
      delete [] C[i];

    delete[] C;
    return 0;
}
