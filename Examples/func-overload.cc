#include <iostream>
#include "matrices.h"

void Multiply(double scalar, double* u, double* v, int n);

void Multiply(double scalar, double** A, double** B, int n);

int main()
{
    int n = 2;
    double* u = new double [n];
    double* v = new double [n];
    double** A = AllocateMatrixMemory(n, n);
    double** B = AllocateMatrixMemory(n, n);

    u[0] = -8.7; u[1] = 3.2;
    A[0][0] = 2.3; A[0][1] = -7.6;
    A[1][0] = 1.3; A[1][1] = 45.3;
    double s = 2.3, t = 4.8;

    // Vector multiplication
    std::cout << "Original vector: ";
    std::cout << *u << std::endl;
    std::cout << "Resulting vector: ";
    Multiply(s, u, v, n);
    std:: cout << *v << std::endl;

    // Matrix multiplication
    std::cout << "Original matrix: ";
    PrintMatrix(A, std::string("A"), n, n); // Function declaration parentheses in name
    std::cout << "Resulting matrix: ";
    Multiply(t, A, B, n);
    PrintMatrix(B, std::string("B"), n, n);

    delete[] u; delete[] v;
    FreeMatrixMemory(n, A); FreeMatrixMemory(n, B);
}


void Multiply(double scalar, double* u, double* v, int n)
{
    // v = scalar * u (scalar by vector)
    for (int i = 0; i < n; i++)
    {
        v[i] = scalar * u[i];
    }

}

void Multiply(double scalar, double** A, double** B, int n)
{
    // B = scalar * A (scalar by matrix)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[i][j] = scalar*A[i][j];
        }
    }

}
