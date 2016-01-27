//
// Created by Edwin Bedolla on 1/25/16.
//

#include "ForwardEulerSolver.h"
#include <vector>
#include <fstream>
#include <iostream>

double ForwardEulerSolver::RightHandEquation(double t, double y = 0)
{
    return pFunc(t);
}

void ForwardEulerSolver::SolveEquation()
{
    // Set N
    double n_grid = 1.0 / stepSize;

    // Open a file to store values
    std::ofstream write_output;
    // This path is specified for the current machine
    write_output.open("/Users/Edwin/Documents/Otros/C_C++_exercises/sc_computing_c++/Chapter-7/function.dat");

    // Create vector to store values of time
    std::vector<double> array1;

    // Generate values of time
    double ti = 0;
    for (int i = 0; i < n_grid; ++i)
    {
        ti = initialTime + i*stepSize;
        array1.push_back(ti);
    }


    // Generate values for the functions
    double y_prev = initialValue, y_next = 0;
    for (int j = 0; j < n_grid; ++j)
    {
        y_next = y_prev + stepSize*RightHandEquation(array1[j], y_prev);
        y_prev = y_next;

        // Print values for test
        std::cout << y_prev << std::endl;

        // Write output to file
        write_output << array1[j] << " " << y_prev << "\n";
    }

    // Close file
    write_output.close();

}

void ForwardEulerSolver::SetFunction(double (*p_func)(double))
{
    pFunc = p_func;
}
