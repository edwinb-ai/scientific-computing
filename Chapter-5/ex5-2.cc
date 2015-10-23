#include <iostream>

double ChangeValue(double* p_num);

int main()
{
    double n = 10;
    double* p_n = &n;
    std::cout << "Value before function: " << n << std::endl;
    ChangeValue(p_n);
    std::cout << "Value after function: " << n << std::endl;

    return 0;
}

double ChangeValue(double* p_num)
{
    *p_num = 13;
    return *p_num;
}
