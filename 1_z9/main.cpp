#include <iostream>

using namespace std;

int main()
{
    double x, result;

    cin >> x;

    if ( x == 0)
    {
        cout << "niewykonalne";
    }
    else
    {
        result = 1/x;
        cout << "Wynik = " << result;
    }

    return 0;
}
