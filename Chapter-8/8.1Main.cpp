//
// Created by Edwin Bedolla on 2/1/16.
//

#include <iostream>
#include "Probabilities.h"

int main()
{
    Probabilities<6> p;
    p[0] = 0.5;
    std::cout << "p[0]: " << p[0] << std::endl;
    p[1] = -1e-7;
    std::cout << "p[1]: " << p[1] << std::endl;
    p[2] = 1+1e-7;
    std::cout << "p[2]: " << p[2] << std::endl;

    return 0;
}
