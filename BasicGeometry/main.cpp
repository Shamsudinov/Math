#include <iostream>
#include <line.h>
using namespace std;

int main()
{

    cout << "START MAIN()!" << endl;
    Point a(3,4);
    Point b(3,10);
    Line line(b,a);
    cout << "dist: " << line.distance() << std::endl;
    cout << "FINISH MAIN()!" << endl;

    return 0;
}
