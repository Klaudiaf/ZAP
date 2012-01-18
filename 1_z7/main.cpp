#include <iostream>

using namespace std;

int main()
{
    char x;

    cout << "Wprowadz znak" << endl;

    cin >> x;

    cout << "Czy wprowadzono duza litere?" << endl;

    if ( x >= 'A' && x <= 'Z' )
    cout << "TAK";
    else
    cout << "NIE";


    return 0;
}
