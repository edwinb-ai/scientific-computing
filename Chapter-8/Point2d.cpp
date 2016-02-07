//
// Created by Edwin Bedolla on 1/28/16.
//

#include "Point2d.h"
#include <cmath>

Point2d::Point2d(double a, double b)
{
    x = a;
    y = b;
}

bool Point2d::operator<(const Point2d &other) const
{
    const double epsilon = 1e-10;

    if (x < other.x)
    {
        return true;
    }

    else if (x > other.x)
    {
        return false;
    }

    //else return y < other.y;
    else return std::abs(x - other.x) <= epsilon * std::abs(x);
}
