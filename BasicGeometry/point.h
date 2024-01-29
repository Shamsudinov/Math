#ifndef POINT_H
#define POINT_H


class Point{

    float _x;
    float _y;

public:

    Point();
    Point(float,float);

    float x() const;
    float y() const;

    void setX(float);
    void setY(float);
};

#endif // POINT_H
