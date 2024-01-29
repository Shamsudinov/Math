#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <point.h>

class Triangle{

    Point A;
    Point B;
    Point C;
public:
    Triangle();
    Triangle(const Point&,const Point&,const Point&);

    void square() const;
    void perimeter() const;
};

#endif // TRIANGLE_H
