//
// Created by Edwin Bedolla on 2/6/16.
//

#include <iostream>
#include "/Users/Edwin/Documents/Otros/C_C++_exercises/sc_computing_c++/Chapter-6/Examples/ComplexNumber.h"
#include <vector>

int main()
{
    std::vector<ComplexNumber> complex_v1;

    // Reserve 4 spaces
    complex_v1.reserve(4);

    // Create and initialize 3 complex numbers
    ComplexNumber n1(3, 2), n2(4, 3), n3(8, 9);

    // "Push back" numbers in the vector
    complex_v1.push_back(n1);
    complex_v1.push_back(n2);
    complex_v1.push_back(n3);

    // Print elements from vector using different types of vector methods
    std::cout << "First element of complex vector: " << complex_v1[0]
            << std::endl;
    std::cout << "Size of vector: " << complex_v1.size() << std::endl;
    std::cout << "Elements of vector: " << std::endl;
    std::vector<ComplexNumber>::const_iterator c;
    for (c = complex_v1.begin(); c != complex_v1.end(); c++)
    {
        std::cout << *c << std::endl;
    }

    return 0;
}