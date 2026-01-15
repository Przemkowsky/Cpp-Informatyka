#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int n;
    int schowek;

    do
    {
        cout << "Podaj ilosc elementow tablicy a: "<<endl;
        cout << "n = ";
        cin >> n;

        if (n < 1 || n > 10)
        {
            cout << "Tablica musi zawierac minimum 1 a maksimum 10 elementow!" << endl;
        }
    } while (n < 1 || n > 10);

       for (int i = 0; i < n; i++)
    {
        cout << "Podaj a[" << i << "] = ";
        cin >> a[i];
    }

       for (int i = 0; i < n / 2; i++)//odwracanie tablicy
    {
        schowek = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = schowek;
    }

    cout << endl << "Odwrocona tablica a:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}
