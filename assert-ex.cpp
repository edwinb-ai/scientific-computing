#include <iostream>
#include <cmath>
#include <cassert>

int main()
{
    double a;

    std::cout << "Enter a non-negative number: " << std::endl;
    std::cin >> a;
    assert(a >= 0.0);
    std::cout << "The square root of " << a
        << " is " << sqrt(a) << std::endl;

    return 0;
}
