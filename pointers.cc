#include <iostream>

int main()
{
    int total_sum = 10;

    std::cout << "Address of variable: " << &total_sum << "\n";

    /* Example use of pointers */
    double y, z;
    double* p_x;

    z = 3.0;
    p_x = &z;
    y = *p_x + 1.0;
    std::cout << "y: " << y << std::endl;

    /* Using "new" and "delete" */
    double* p_y;
    p_y = new double;   // Use new to assign an address to p_y
    *p_y = 1.0;
    std::cout << *p_y << std::endl;
    delete p_y;         // Release memory for re-use

    /* Vectors */
    double* x;
    x = new double [10];
    std::cout << x << std::endl;
    std::cout << &x[0] << std::endl;   // Prints the same value
    delete [] x;

    // Two vectors
    double* vec_x;
    double* vec_y;
    vec_x = new double [10];
    vec_y = new double [10];

    for (size_t i = 0; i < 10; i++)
    {
        vec_x[i] = ((double)(i));
        std::cout << "vec_x: " << vec_x[i] << std::endl;
        vec_y[i] = 2.0*vec_x[i];
        std::cout << "vec_y: " << vec_y[i] << std::endl;
    }
    delete [] vec_x;
    delete [] vec_y;

    /* Dynamic memory allocation for a matrix*/
    int rows = 5, cols = 3;
    double** A;
    A = new double* [rows];
    for (size_t i = 0; i < rows; i++)
        A[i] = new double [cols];

    for (size_t i = 0; i < rows; i++)
        delete [] A[i];

    delete[] A;

    return 0;
}
