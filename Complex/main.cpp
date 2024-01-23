#include <iostream>
#include <vector>
#include <algorithm>
#include <complex.h>

using namespace std;

int main()
{

    cout << "Hello World!" << endl;

    Complex<double> c1(1,2);
    Complex<double> c2(2,1);
    cout << "-------------------" << endl;
    Complex<double> sum = c1 + c2;
    Complex<double> raz = c1 - c2;
    Complex<double> mul = c1 * c2;
    Complex<double> div = c1 / c2;
    cout << "-------------------" << endl;
    cout<<sum<<endl;
    cout<<raz<<endl;
    cout<<mul<<endl;
    cout<<div<<endl;
    cout << "-------------------" << endl;

    Complex<int> complex;
    cin>>complex;
    cout<<complex<<endl;

    cout << "GoodBye World!" << endl;
    return 0;
}
