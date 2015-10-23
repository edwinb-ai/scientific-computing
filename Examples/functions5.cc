#include <iostream>
#include <cmath>

void CalculateRealandImaginary(double r, double theta,
                                double* pReal, double* pImaginary);

int main()
{
    double r = 3.4, theta = 1.23;
    double x, y;
    CalculateRealandImaginary(r, theta, &x, &y);
    std::cout << "Real part = " << x << std::endl;
    std::cout << "Imaginary part = " << y << std::endl;

    return 0;
}

void CalculateRealandImaginary(double r, double theta,
                                double* pReal, double* pImaginary)
{
    *pReal = r*cos(theta);
    *pImaginary = r*sin(theta);
}
