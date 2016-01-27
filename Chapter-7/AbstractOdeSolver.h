//
// Created by Edwin Bedolla on 1/25/16.
//

#ifndef CHAPTER_7_ABSTRACTODESOLVER_H
#define CHAPTER_7_ABSTRACTODESOLVER_H


class AbstractOdeSolver
{
protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;
public:
    void SetStepSize(double h);
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);
    virtual double RightHandEquation(double y, double t) = 0;
    virtual void SolveEquation() = 0;
};


#endif //CHAPTER_7_ABSTRACTODESOLVER_H
