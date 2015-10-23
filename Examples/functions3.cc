#include <iostream>

void HasNoEffect(double x);

int main()
{
    double x = 2.0;
    HasNoEffect(x);
    std::cout << x << std::endl;    //Will print out 2.0

    return 0;
}

void HasNoEffect(double x)
{
    // x takes the value 2
    x += 1.0;
    // x takes the value of 3
}
