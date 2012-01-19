#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char zn;
    int liczbazn, liczbal, liczbac, liczbar;

    ifstream znaki("znaki.txt");

    if (!znaki.good())
        cerr << "Blad otwarcia pliku" << endl;
    else
    {
        liczbazn = 0;
        liczbal = 0;
        liczbac = 0;
        liczbar = 0;

        do
        {
            znaki >> zn;

            cout << zn << "\t";

            liczbazn++;

            if ((zn>='a' && zn<='z') || (zn>='A' && zn<= 'Z'))
            liczbal++;

            if (zn >= '0' && zn <= '9')
            liczbac++;

            if ((zn>= char(42) && zn <= char(47)) || zn == char(61))
            liczbar++;
        }
        while (!znaki.eof());
    }

    cout << endl << endl;
    cout << "Liczba wszystkich znakow = " << liczbazn << endl;
    cout << "Liczba wszystkich liter = " << liczbal << endl;
    cout << "Liczba cyfr = " << liczbac << endl;
    cout << "Liczba znakow operacji arytmetycznych = " << liczbar << endl;


    znaki.close();

    return 0;
}
