//
// Created by Edwin Bedolla on 2/6/16.
//

#include <iostream>
#include <cmath>

// Template function
template<class Number> Number Absolute(Number number1);

int main()
{
    std::cout << "Absolute value of -5: " << Absolute<int>(-5)
            << std::endl;
    std::cout << "Absolute value of -0.67: " << Absolute<double>(-0.67)
            << std::endl;

    return 0;
}

template<class Number> Number Absolute(Number number1)
{
    return std::abs(number1);
}
