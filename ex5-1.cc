#include <iostream>

void PrintValue(int* num);

int main()
{
    int n = 7;
    int* p_num = &n; // Address of the integer
    PrintValue(p_num);

    return 0;
}

void PrintValue(int* num)
{
    /* This function receives a pointer containing the
    address of an integer.
    */
    std::cout << *num << std::endl;
}
