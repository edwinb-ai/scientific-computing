//
// Created by Edwin Bedolla on 2/1/16.
//

#include <iostream>
#include <cmath>
#include "Probabilities.h"

int main()
{
    Probabilities<6> p;
    p[0] = 0.5;
    std::cout << "p[0]: " << p[0] << std::endl;
    p[1] = -1e-3;
    std::cout << "p[1]: " << p[1] << std::endl;
    p[2] = 1+1e-3;
    std::cout << "p[2]: " << p[2] << std::endl;
    // p[3] = -0.5;
    // std::cout << "p[3]: " << p[3] << std::endl;
    // p[4] = 2;
    // std::cout << "p[4]: " << p[4] << std::endl;

    bool test = 1+1e-3 >= 1.0 && 
        std::abs(1+1e-3 - 1.0) >= 1e-6;
    std::cout << test << std::endl;
    printf("1+1e-6: %f \n", 1+1e-6);
    printf("1+1e-3: %f", 1+1e-3);
    
    // std::cout << std::abs(1+1e-3 - 1.0) << std::endl;
    
    return 0;
}
