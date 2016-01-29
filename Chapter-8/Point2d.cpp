//
// Created by Edwin Bedolla on 1/28/16.
//

#include "Point2d.h"

Point2d::Point2d(int a, int b)
{
    x = a;
    y = b;
}

bool Point2d::operator<(const Point2d &other) const
{
    if (x < other.x)
    {
        return true;
    }
    else if (x > other.x)
    {
        return false;
    }
    else if (y < other.y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
