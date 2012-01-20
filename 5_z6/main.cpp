#include <iostream>
#include <cmath>

using namespace std;

double absolute (double x)
{
    if (x>=0)
        return x;
    else
        return -x;
}

double fahrenheitToCelsius (float t)
{
    double a;

    a = (((double)5/9)*(t-32));

    return a;
}

double power (double x, double y)
{
    double a;
    a = pow(x,y);

    return a;
}

void printPyramid (int x)
{
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<x-i-1; j++)

        cout << " ";

        for (int m=0; m<2*i+1; m++)

        cout << "*";

        cout << endl;
    }
}

int main()
{
    double x,a,y;
    float t;

    cout << "Wartoœæ absolutna liczby "<< x;
    cin >> x;
    cout <<"= " << absolute(x) << endl;

    cout << "Konwersja temperatury: "<< t<<"st C" << fahrenheitToCelsius(9) << "F" << endl;

    cout << "Potega liczby o podstawie ";
    cin >>x;
    cout<< x << " i wykladniku ";
    cin >> y;
    cout << y<<" = "<< power(x,y) <<endl;

    cout << "Piramida dla ";
    cin >> x;
    cout << x << endl;
    cout << printPyramid(x);

    return 0;
}
