#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <line.h>

class Triangle{

    Point p1;
    Point p2;
    Point p3;

    float dist_p1p2;
    float dist_p2p3;
    float dist_p1p3;

    float sq;

    float ah;
    float bh;
    float ch;
public:
    Triangle();
    Triangle(const Point&,const Point&,const Point&);

    float square() const;
    float perimeter() const;

    float distanceP1P2() const;
    float distanceP2P3() const;
    float distanceP1P3() const;

    float heightP1P2() const;
    float heightP2P3() const;
    float heightP1P3() const;
};

#endif // TRIANGLE_H
