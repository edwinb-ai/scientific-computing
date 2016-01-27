//
// Created by Edwin Bedolla on 1/25/16.
//

#include "AbstractOdeSolver.h"

void AbstractOdeSolver::SetStepSize(double h)
{
    stepSize = h;
}

void AbstractOdeSolver::SetTimeInterval(double t0, double t1)
{
    initialTime = t0;
    finalTime = t1;
}

void AbstractOdeSolver::SetInitialValue(double y0)
{
    initialValue = y0;
}
