//
// Created by Edwin Bedolla on 1/27/16.
//

#ifndef CHAPTER_7_RUNGEKUTTA4_H
#define CHAPTER_7_RUNGEKUTTA4_H

#include "AbstractOdeSolver.h"

class RungeKutta4 : public AbstractOdeSolver
{
private:
    double (*p_Func) (double);

public:
    void SetFunction(double (*pFunc) (double));
    virtual double RightHandEquation(double t, double y);
    virtual void SolveEquation();
};


#endif //CHAPTER_7_RUNGEKUTTA4_H
