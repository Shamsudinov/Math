#include "triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3) :
    p1(p1), p2(p2), p3(p3)
{

    Line temp_ab(p1,p2);
    Line temp_bc(p2,p3);
    Line temp_ca(p3,p1);
    dist_p1p2 = temp_ab.distance();
    dist_p2p3 = temp_bc.distance();
    dist_p1p3 = temp_ca.distance();

}

void Triangle::square() const
{

}

float Triangle::perimeter() const { return dist_p1p2 + dist_p2p3 + dist_p1p3; }

float Triangle::distanceP1P2() const { return dist_p1p2; }
float Triangle::distanceP2P3() const { return dist_p2p3; }
float Triangle::distanceP1P3() const { return dist_p1p3; }

float Triangle::heightP1P2() const
{
    const float P = perimeter()/2;
    float height = (2*sqrt(P*(P-dist_p1p2)*(P-dist_p1p3)*(P-dist_p2p3)))/dist_p1p2;
    return height;
}

float Triangle::heightP2P3() const
{
    const float P = perimeter()/2;
    float height = (2*sqrt(P*(P-dist_p1p2)*(P-dist_p1p3)*(P-dist_p2p3)))/dist_p2p3;
    return height;
}

float Triangle::heightP1P3() const
{
    const float P = perimeter()/2;
    float height = (2*sqrt(P*(P-dist_p1p2)*(P-dist_p1p3)*(P-dist_p2p3)))/dist_p1p3;
    return height;
}












