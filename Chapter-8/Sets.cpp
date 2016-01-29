//
// Created by Edwin Bedolla on 1/28/16.
//

#include <set>
#include <iostream>
#include "Point2d.h"

int main()
{
    std::set<Point2d> points;
    Point2d origin(0, 0);
    points.insert(origin);
    points.insert(Point2d(-2, 1));
    points.insert(Point2d(-2, 5));
    points.insert(Point2d(0, 0));

    std::cout << "Number of points in set = " << points.size() << "\n";

    std::set<Point2d>::const_iterator c;
    for (c = points.begin() ; c != points.end() ; c++)
    {
        std::cout << c->x << " " << c->y << "\n";
    }

    return 0;
}
