#ifndef FIGURE_H
#define FIGURE_H

class Point{

    float _x;
    float _y;

public:

    Point() : 
        _x(0),
        _y(0)
    {
        
    }
    Point(float x, float y) :
        _x(x),
        _y(y)
    {

    }

    float x() const{ return _x; }
    float y() const{ return _y; }

    void setX(float x){ _x = x; }
    void setY(float y){ _y = y; }
};

class Figure{

public:
    virtual void square() const = 0;
    virtual void perimeter() const = 0;
};

#endif // FIGURE_H
