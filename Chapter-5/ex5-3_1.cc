#include <iostream>

void SwapValue(double* p_x, double* p_y);

int main()
{
    double dNum1 = 10, dNum2 = 20;
    double* p_Num1 = &dNum1, *p_Num2 = &dNum2;
    std::cout << "Values before function: " << std::endl;
    std::cout << "Num 1: " << *p_Num1 << std::endl;
    std::cout << "Num 2: " << *p_Num2 << std::endl;
    SwapValue(p_Num1, p_Num2);
    std::cout << "Values after function: " << std::endl;
    std::cout << "Num 1: " << *p_Num1 << std::endl;
    std::cout << "Num 2: " << *p_Num2 << std::endl;

    return 0;
}

void SwapValue(double* p_x, double* p_y)
{
    double *p_temp;
    *p_temp = *p_x;
    *p_x = *p_y;
    *p_y = *p_temp;
}
