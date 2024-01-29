#ifndef LINE_H
#define LINE_H

#include <point.h>

class Line
{

    Point _x;
    Point _y;
public:
    Line();

    Line(const Point &, const Point &);

    float distance();

    Point x() const;
    Point y() const;

    void setX(const Point &);
    void setY(const Point &);
};

#endif // LINE_H
