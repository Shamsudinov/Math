#include "line.h"

Line::Line()
{
    _distance = 0;
}

Line::Line(const Point &x, const Point &y)
{
    _x = x;
    _y = y;
    float temp_x = pow(_x.x() - _y.x(),2);
    float temp_y = pow(_x.y() - _y.y(),2);
    _distance = sqrt(temp_x + temp_y);
}

float Line::distance() const { return _distance; }

Point Line::x() const { return _x; }
Point Line::y() const { return _y; }

void Line::setX(const Point &x) { _x = x; }
void Line::setY(const Point &y) { _y = y; }

