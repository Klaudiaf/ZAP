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


double fahrenheitToCelsius (float x)
{
    double a;

    a = (((double)5/9)*(x-32));

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

    cout << "Podaj 2 liczby: " << endl;
    cin >> x;
    cin >> y;

    cout << "Wartosc absolutna liczby "<< x << ": |" << x << "| "<<" = " << absolute(x) << endl;

    cout << "Konwersja temperatury:  "<< x <<" st. C" << " = "<< fahrenheitToCelsius(x) << " F " << endl;

    cout << "Potega liczby o podstawie "<< x << " i wykladniku " << y << " = " << power(x,y) << endl;

    cout << "Piramida dla " << x << endl;
    printPyramid (x);

    return 0;
}
