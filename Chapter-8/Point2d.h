//
// Created by Edwin Bedolla on 1/28/16.
//

#ifndef CHAPTER_8_POINT2D_H
#define CHAPTER_8_POINT2D_H


class Point2d
{
public:
    double x, y;
    Point2d(double a, double b);
    bool operator<(const Point2d& other) const;

};


#endif //CHAPTER_8_POINT2D_H
