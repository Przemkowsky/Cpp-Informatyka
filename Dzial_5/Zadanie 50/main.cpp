#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][5];
	int dodatnie = 0, ujemne = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Podaj element tablicy a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            b[i][j] = a[i][j];

        b[i][3] = a[i][0];
        b[i][4] = a[i][1];
    }

    cout << "\nPelna macierz ze skopiowanymi elementami wyglada nastepujaco:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }


    for (int j = 0; j < 3; j++)
        dodatnie += b[0][j] * b[1][j + 1] * b[2][j + 2];

    for (int j = 0; j < 3; j++)
        ujemne += b[2][j] * b[1][j + 1] * b[0][j + 2];

    int wyznacznik = dodatnie - ujemne;

    cout << "\nWyznacznik tablicy a = " << wyznacznik << endl;

    return 0;
}
