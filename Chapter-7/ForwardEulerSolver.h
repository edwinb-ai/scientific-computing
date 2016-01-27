//
// Created by Edwin Bedolla on 1/25/16.
//

#ifndef CHAPTER_7_FORWARDEULERSOLVER_H
#define CHAPTER_7_FORWARDEULERSOLVER_H

#include "AbstractOdeSolver.h"

class ForwardEulerSolver : public AbstractOdeSolver
{
private:
    double (*pFunc) (double);
public:
    void SetFunction(double (*p_func) (double));
    virtual double RightHandEquation(double t, double y);
    virtual void SolveEquation();
};


#endif //CHAPTER_7_FORWARDEULERSOLVER_H
