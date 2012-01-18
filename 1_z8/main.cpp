#include <iostream>

using namespace std;

int main()
{
    char x;

    cin >> x;

    if ( x >= 'a' && x <= 'z' )
    cout << "mala litera";
    else
    if ( x >= 'A' && x <= 'Z' )
    cout << "duza litera";
    else
    if ( x >= 0 && x <= 9 )
    cout << "cyfra";

    return 0;
}
