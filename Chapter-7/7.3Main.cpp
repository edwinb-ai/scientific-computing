//
// Created by Edwin Bedolla on 1/25/16.
//

#include <iostream>
#include <cmath>
#include "ForwardEulerSolver.h"

// Define math function (right hand equation from the ODE)
double f1(double t)
{
    return 1 + t;
}

// Define correct answer function
double f_sol(double t)
{
    return (pow(t, 2) + 2*t + 4) / 2;
}

int main()
{
    // Define time interval
    double t_0 = 0.0, t_i = 1;

    // Define initial conditions
    double y_0 = 2;

    // Create new Euler solver and pointer function
    ForwardEulerSolver solver1;
    double (*p_f1) (double);
    p_f1 = &f1;

    // Set function and initial conditions
    solver1.SetFunction(p_f1);
    solver1.SetInitialValue(y_0);
    double h = 0.00001;
    solver1.SetStepSize(h);
    solver1.SetTimeInterval(t_0, t_i);

    // Use the Euler solver
    solver1.SolveEquation();

    // Print result for solution
    std::cout << "Correct solution: " << f_sol(t_i) << std::endl;

    return 0;

}
