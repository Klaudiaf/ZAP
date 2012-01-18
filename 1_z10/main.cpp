#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    double x, result;

    cin >> x;

    result = ( sqrt(x) + x) / ( 2 + x) ;


    if (x>10)
        cout << "Wynik = " << result;
    else
        cout << "Zla liczba";


    return 0;
}
