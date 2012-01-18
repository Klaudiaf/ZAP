#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x= 2010;
    int y= 46000;
    int z= 3920;

    cout << "Year\t\t" << "USA\t\t" << "China" <<endl;

    do {
    cout << x << "  \t\t" << y <<"$  \t" << z <<"$  \t" << endl;

    x += 5;
    y = pow(1.025,5)*y;
    z = pow(1.09,5)*z;
    }
    while ( z<y);
    return 0;
}
