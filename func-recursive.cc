#include <iostream>
#include <cassert>

double CalculateFactorial(double n);

int main()
{
    double n = 100;

    std::cout << "The factorial of " << n
                << " is " << CalculateFactorial(n) << std::endl;

    return 0;
}

double CalculateFactorial(double n)
{
    assert (n > 0);
    if (n == 1)
        return 1;
    else //( n > 1)
        return n*CalculateFactorial(n - 1);
}
