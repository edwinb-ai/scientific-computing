//
// Created by Edwin Bedolla on 1/27/16.
//

#include <iostream>
#include <cmath>
#include "RungeKutta4.h"

// Define right hand equation
double f_right(double t)
{
    return 1 + t;
}

// Define correct answer function
double f_sol(double t)
{
    return (pow(t, 2) + 2*t + 4) / 2.0;
}

int main()
{
    // Create Runge Kutta solver
    RungeKutta4 solution;

    // Set initial conditions
    double t_0 = 0.0, y_0 = 2.0, t_i = 1.0, h = 0.00001;
    double (*p_fright) (double);
    p_fright = &f_right;

    solution.SetInitialValue(y_0);
    solution.SetStepSize(h);
    solution.SetTimeInterval(t_0, t_i);
    solution.SetFunction(p_fright);

    // Use Runge-Kutta Solver
    solution.SolveEquation();

    return 0;
}
