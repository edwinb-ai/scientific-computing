#include <iostream>

int main()
{
    double p, q, x, y;
    int j;

    std::cout << "p: "; std::cin >> p;
    std::cout << "q: "; std::cin >> q;
    std::cout << "y: "; std::cin >> y;
    std::cout << "j: "; std::cin >> j;

    if ( (p >= q) || (j != 10) )
    {
        x = 5;
        std::cout << "p greater or equal than q or j is different from 10"
            << std::endl;
    }

    if ( (y >= q) && (j == 20) )
    {
        x = 5;
        std::cout << "y is greater than q and j is equal to 20"
            << std::endl;
    }
    else
    x = p;

    if (p > q)
    {
        x = 0;
        std::cout << "p is greater than q" << std::endl;
    }

    else if ( (p <= q) && (j == 10) )
    {
        x = 1;
        std::cout << "p is less or equal than q and j is equal to 10"
            << std::endl;
    }
    else
    {
        x = 2;
        std::cout << "x is equal to 2" << std::endl;
    }

    //printf("p: %.1f, q: %.1f, y: %.1f, j: %d\n", p, q, y, j);   //A print test for the infile

    return 0;
}
