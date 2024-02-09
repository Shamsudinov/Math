#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <line.h>

class Triangle{

    Point A;
    Point B;
    Point C;

    float ab;
    float bc;
    float ca;
public:
    Triangle();
    Triangle(const Point&,const Point&,const Point&);

    void square() const;
    void perimeter() const;
};

#endif // TRIANGLE_H
