#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <figure.h>

class Triangle : public Figure{

    Point A;
    Point B;
    Point C;
public:
    Triangle();
    Triangle(const Point&,const Point&,const Point&);

    void square() const override;
    void perimeter() const override;
};

#endif // TRIANGLE_H
