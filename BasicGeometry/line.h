#ifndef LINE_H
#define LINE_H

#include <point.h>
#include <math.h>

class Line
{

    Point _x;
    Point _y;
    float _distance;
public:
    Line();

    Line(const Point &, const Point &);

    float distance() const;

    Point x() const;
    Point y() const;

    void setX(const Point &);
    void setY(const Point &);
};

#endif // LINE_H
