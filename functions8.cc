#include <iostream>
#include <cmath>

void RealandImaginary(double r, double theta, double& real, double& imaginary);

int main()
{
    double r = 3.4;
    double theta = 1.23;
    double x, y;
    RealandImaginary(r, theta, x, y);
    std::cout << "Real part = " << x << std::endl;
    std::cout << "Imaginary part = " << y << std::endl;

    return 0;
}

void RealandImaginary(double r, double theta, double& real, double& imaginary)
{
    real = r*cos(theta);
    imaginary = r*sin(theta);
}
