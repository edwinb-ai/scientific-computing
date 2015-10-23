#include <iostream>

int main()
{
    double vector1[2] = {0.5, -2.3};
    double vector2[2] = {34.2, 0.015} ;
    double scalar_product = 0.0;

    for (int i = 0; i < 2; i++)
        scalar_product += vector1[i] * vector2[i];

    std::cout << scalar_product << std::endl;

    return 0;
}
