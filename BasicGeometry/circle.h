#ifndef CIRCLE_H
#define CIRCLE_H

#include <point.h>

class Circle
{
    Point o;
    float _radius;
    float _diametr;
public:
    Circle();

    float radius() const;
    float diametr() const;
};

#endif // CIRCLE_H
