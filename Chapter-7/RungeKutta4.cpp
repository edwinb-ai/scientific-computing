//
// Created by Edwin Bedolla on 1/27/16.
//

#include "RungeKutta4.h"
#include <fstream>
#include <iostream>
#include <vector>

void RungeKutta4::SetFunction(double (*pFunc)(double))
{
    p_Func = pFunc;
}

double RungeKutta4::RightHandEquation(double t, double y = 0)
{
    return p_Func(t);
}

void RungeKutta4::SolveEquation()
{
    // Set N
    double n_grid = 1.0 / stepSize;

    // Open a file to store values
    std::ofstream write_output("/Users/Edwin/Documents/Otros/"
                                       "C_C++_exercises/sc_computing_c++/Chapter-7/rungekutta.dat");

    // Create a vector to store values of time and generate them
    std::vector<double> time_arr;
    double ti = 0;
    for (int i = 0; i < n_grid; ++i)
    {
        ti = initialTime + stepSize*i;
        time_arr.push_back(ti);
    }

    // Implement Runge-Kutta method
    double k1, k2, k3, k4, y_prev = initialValue, y_next = 0;
    for (int j = 0; j < n_grid; ++j)
    {
        k1 = stepSize * RightHandEquation(time_arr[j], y_prev);
        k2 = stepSize * RightHandEquation(time_arr[j] + (0.5 * stepSize), y_prev + (0.5 * k1));
        k3 = stepSize * RightHandEquation(time_arr[j] + (0.5 * stepSize), y_prev + (0.5 * k2));
        k4 = stepSize * RightHandEquation(time_arr[j] + stepSize, y_prev + k3);
        y_next = y_prev + ((k1 + 2*k2 + 2*k3 + k4) / 6.0);
        y_prev = y_next;

        // Write output to file
        write_output << time_arr[j] << " " << y_prev << "\n";
    }

    // Close file
    write_output.close();

}
