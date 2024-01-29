#include "point.h"

Point::Point() :
    _x(0),
    _y(0)
{

}

Point::Point(float x, float y) :
    _x(x),
    _y(y)
{

}

float Point::x() const{ return _x; }
float Point::y() const{ return _y; }

void Point::setX(float x){ _x = x; }
void Point::setY(float y){ _y = y; }
