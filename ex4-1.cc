#include <iostream>

int main()
{
    int i = 5;
    int* p_j;
    p_j = &i;   //Store address of i in p_j
    std::cout << "p_j: " << p_j << std::endl;

    // Multiply the value of i
    i = *p_j * 5;
    std::cout << "i: " << i << std::endl;

    int* p_k = new int;
    *p_k = i;
    std::cout << "p_k: " << p_k << std::endl;
    delete p_k;

    return 0;
}
