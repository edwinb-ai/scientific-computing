#include <iostream>

template<class T> T GetMaximum(T number1, T number2);

int main()
{
    std::cout << GetMaximum<int>(10, -2) << "\n";
    std::cout << GetMaximum<double>(-4.6, 3.5) << "\n";

    return 0;
}

template<class T> T GetMaximum(T number1, T number2)
{
    T result;
    if (number1 > number2)
    {
        result = number1;
    }
    else
    {
        result = number2;
    }

    return result;
}