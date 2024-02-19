#include "circle.h"

Circle::Circle(const Point &center,float r)
    : o(center) ,
      _radius(r)
{
    _diametr = _radius + _radius;
    _perimeter = 2*PI*_radius;
    _square = PI*(_radius * _radius);
}

float Circle::radius() const{

    return _radius;
}

float Circle::diametr() const{

    return _diametr;
}

float Circle::perimeter() const{

    return _perimeter;
}

float Circle::square() const{

    return _square;
}
