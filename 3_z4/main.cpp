
#include <iostream>

using namespace std;

int main()
{
    const int k=9;
    double A[k][k];
    double n=0;
    double suma=0;
    //int i,j;

    for (int i=0; i<k; i++)
    {
        for (int j=0; j<k; j++)
        {
            A[i][j]= double (5*n)/(n+1);
            n += 1;
            cout << A[i][j] << "\t";

        //if (j==i || j==k-1-i)
        //suma += A[i][j];
        }
        cout << endl;
    }

    for (int i=0; i<k; i++)
    {
        suma = suma + A[i][i] + A[k-1-i][i];
    }
    cout << endl << "Suma wartosci z przekatnych= "<< (suma - A[5][5]) << endl << endl;

    int liczba1=0;

    for (int i=0; i<k-1; i++)
    {
        for (int j=i=1; j<k-i-1; j++)
        {
        if (A[i][j]>=4.7 && A[i][j]<=4.8)
        liczba1 += 1;
        }
    }
    cout << "Liczba elementow z przedz [4.7,4.8]= " << liczba1 << endl;

    for (int i=0; i<k/2; i++)
    {
        double temp, temp2;

        temp = A[i][i];
        A[i][i] = A[k-1-i][k-1-i];
        A[k-1-i][k-1-i]=temp;

        temp2 = A[k-1-i][i];
        A[k-1-i][i] = A[i][k-1-i];
        A[i][k-1-i] = temp2;
    }

    for (int i=0; i<k; i++)
    {
        for (int j=0; j<k; j++)
        {
        cout << A[i][j] <<"\t";
        }
    cout << endl;
    }

    return 0;
}
