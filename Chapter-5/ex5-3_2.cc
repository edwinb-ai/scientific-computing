#include <iostream>

// Using reference variables

void SwapValues(double& r_x, double& r_y);

int main()
{
    double dNum1 = 10, dNum2 = 20;
    std::cout << "Values before swap: " << std::endl;
    std::cout << "Num 1: " << dNum1 << std::endl;
    std::cout << "Num 2: " << dNum2 << std::endl;
    SwapValues(dNum1, dNum2);
    std::cout << "Values after swap: " << std::endl;
    std::cout << "Num 1: " << dNum1 << std::endl;
    std::cout << "Num 2: " << dNum2 << std::endl;

    return 0;
}

void SwapValues(double& r_x, double& r_y)
{
    double temp;
    temp = r_x; r_x = r_y; r_y = temp;
}
