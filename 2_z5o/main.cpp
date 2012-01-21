#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Podaj liczbe:" << endl;
    cin >> x;

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x-i; j++)
        {
            cout << " ";
        }

        for(int j=1; j<=2*i-1; j++)
        {
            cout << char (42);
        }
        cout << endl;
    }
    return 0;
}
