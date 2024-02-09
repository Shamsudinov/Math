#include "triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(const Point &a, const Point &b, const Point &c) : 
    A(a), B(b), C(c)
{

    Line temp_ab(a,b);
    Line temp_bc(b,c);
    Line temp_ca(c,a);
    ab = temp_ab.distance();
    bc = temp_bc.distance();
    ca = temp_ca.distance();

}

void Triangle::square() const
{

}

float Triangle::perimeter() const { return ab + bc + ca; }

float Triangle::distanceAB() const { return ab; }
float Triangle::distanceBC() const { return bc; }
float Triangle::distanceCA() const { return ca; }
