#include <iostream>
#include <cmath>

// Implementation of Newton-Raphson Iteration
double SolveNewton(double (*pFunc)(double),double (*pFuncPrime)(double),
                    double x)
{
    double step;
    do {
        step = (*pFunc)(x) / (*pFuncPrime) (x);
        x -= step;
    } while(fabs(step) > 1.0e-5);

    return x;
}

// Function to calculate x that satisfies sqrt(x) = 10
double Sqrt10(double x)
{
    return sqrt(x) - 10.0;
}

// Derivative of function to calculate x that satisfies sqrt(x) = 10;
double Sqrt10Prime(double x)
{
    return 1.0/(2.0*sqrt(x));
}

// Function to calculate x that satisfies x*x*x = 10
double Cube10(double x)
{
    return x*x*x - 10.0;
}

// Derivative of function to calculate x that satisfies x*x*x = 10
double Cube10Prime(double x)
{
    return 3.0*x*x;
}

int main()
{
    std::cout << "Root sqrt(x) = 10, with guess 1.0 is "
              << SolveNewton(Sqrt10, Sqrt10Prime, 1.0) << std::endl;
    std::cout << "Root of x*x*x = 10, with guess 1.0 is "
            << SolveNewton(Cube10, Cube10Prime, 1.0);
}
