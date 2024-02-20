#ifndef CIRCLE_H
#define CIRCLE_H

#include <point.h>

class Circle
{
    Point o;
    float _radius;
    float _diametr;
    float _perimeter;
    float _square;
    const float PI = 3.14;
public:
    Circle(const Point &,float);

    float radius() const;
    float diametr() const;
    float perimeter() const;
    float square() const;
};

#endif // CIRCLE_H
