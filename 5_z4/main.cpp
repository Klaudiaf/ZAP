#include <iostream>
#include <fstream>

using namespace std;

struct Tpoints
{
    double x, y;
};

int main()
{
    string nazwa;

    cout << "Podaj nazwe pliku: ";
    cin >> nazwa;

    ofstream plik_wy(nazwa.c_str());

    int i=0;
    Tpoints p[i];

    do
    {
        cin >> p[i].x;
        cin >> p[i].y;
        plik_wy << p[i] << '{' << p[i].x << ',' << p[i].y << '}' << endl;
        i++;
    }
    while (!(p[i].x==0 && p[i].y==0));


    plik_wy.close();

    string line;

    ifstream plik_we(nazwa.c_str());
    ofstream dane("results.txt");
    ofstream temp("temp.txt");

    //getline (plik_we,line);

    while (!plik_we.eof())

    plik_we >> p[i];

    if (p[i].y == 0)
    {
        dane << p[i];
        temp << p[i];
        i++;
    }

    dane.close();
    temp.close();
    plik_we.close();


    ifstream temp("temp.txt");
    ofstream dane("results.txt", ios::app);

    temp >> p[i];
    while (!temp.eof())

    if (p[i].x == 0)
    {
        dane << p[i] << endl;
    }
    temp.close();

    dane.close();

    //ifstream plik_we(nazwa.c_str());

    //ofstream dane("results.txt");

   // while (!plik_we.eof())

    //plik_we


    return 0;
}
