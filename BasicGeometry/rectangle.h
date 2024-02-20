#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <point.h>

class Rectangle
{
    Point a;
    Point b;
    Point c;
    Point d;

    float _square;
    float _perimeter;
public:
    Rectangle(const Point&,const Point&,const Point&,const Point&);

    float square() const;
    float perimeter() const;
};

#endif // RECTANGLE_H
