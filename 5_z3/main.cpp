#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string x, text, line;
    int n;

    cout << "Podaj nazwe pliku: ";
    cin >> x;
    getchar();

    ofstream plik_wy(x.c_str());

    cout << "Podaj liczbe wierszy: ";
    cin >> n;
    cout << "Wpisz tekst:" << endl;

    for (int i=0; i<n; i++)
    {
        cin >> text;
        plik_wy << text << endl;

    }

    plik_wy.close();

    int i;
    ifstream plik_we(x.c_str());
    getline (plik_we, line);
    ofstream dane("results.txt");
    if ((line[0] >= 'A' && line[0] <= 'Z') && i <= 10)
    {
        dane << line << endl;
    }

    dane.close();
    plik_we.close();

    string wiersz;

    ifstream plik("results.txt");
    if (!plik.good())
        cerr << "Blad otwarcia pliku" << endl;
    else
        getline (plik, wiersz);
        while (!plik.eof())
        {
            cout << wiersz << endl;
            getline (plik, wiersz);
        }
    plik.close();

    return 0;
}
