#include "line.h"

Line::Line()
{

}

Line::Line(const Point &x, const Point &y)
{
    _x = x;
    _y = y;
}

float Line::distance(){

}

Point Line::x() const{
    return _x;
}

Point Line::y() const{
    return _y;
}

void Line::setX(const Point &x){
    _x = x;
}

void Line::setY(const Point &y){
    _y = y;
}

