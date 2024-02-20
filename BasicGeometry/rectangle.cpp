#include "rectangle.h"

Rectangle::Rectangle(const Point& a,const Point& b,const Point& c,const Point& d) :
    a(a) , b(b) , c(c) , d(d)
{

}

float Rectangle::square() const{

    return _square;
}

float Rectangle::perimeter() const{

    return _perimeter;
}
