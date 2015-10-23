#include <iostream>

void DoSomething(double* u, double** A);

int main()
{
    double* u = new double [10];
    double** A = new double* [10];
    for (int i = 0; i < 10; i++)
    {
        A[i] = new double [10];
    }

    DoSomething(u, A);

    /* This will print the values allocated in the
    function DoSomething */

    std::cout << u[2] << std::endl;
    std::cout << A[2][3] << std::endl;

    delete[] u;
    for (int i = 0; i < 10; i++)
    {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

void DoSomething(double* u, double** A)
{
    u[2] = 1.0;
    A[2][3] = 4.0;
}
