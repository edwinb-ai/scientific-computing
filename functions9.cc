#include <iostream>
#include <cmath>

double CalculateCubeRoot(double& x, double K, double tolerance = 1.0e-6, int maxIter = 100);

int main()
{
    double x = 1.0;
    double K = 12.0;

    // Calculate the cube root using default values
    std::cout << "Default values: ";
    std::cout << CalculateCubeRoot(x, K) << std::endl;

    // Calculate cube root using a tolerance of 0.001 and
    // the default max number of iterations
    double tolerance = 0.001;
    std::cout << "Change tolerance, default iterations: ";
    std::cout << CalculateCubeRoot(x, K, tolerance) << std::endl;

    // Calculate cube root using a tolerance of 0.001 and
    // a maximum number of iterations of 50
    int maxIter = 50;
    std::cout << "Change tolerance and iterations: ";
    std::cout << CalculateCubeRoot(x, K, tolerance, maxIter) << std::endl;

    return 0;
}

double CalculateCubeRoot(double& x, double K, double tolerance, int maxIter)
{
    int iterations = 0;
    double residual = x*x*x - K;
    while ((fabs(residual) > tolerance) && (iterations < maxIter))
    {
        x = x - (x*x*x - K) / (3.0*x*x);
        residual = x*x*x - K;
        iterations++;
    }

    return x;
}
