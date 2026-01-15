#include <iostream>
using namespace std;

int main() {
    const int A = 3;
    const int B = 4;

    int a[A][B];
    int suma = 0;
    int liczba;

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }


    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout <<a[i][j] << "\t ";
            suma += a[i][j];
        }
        cout << endl;
    }

    cout << endl;
    cout << "suma wszystkich elementow macierzy a = " << suma << endl;

    cout << "Podaj liczbe przez ktora chcesz pomnozyc macierz: ";
    cin >> liczba;

    cout << endl;

    for (int i = 0; i < A; i++) {//mno¿enie macierzy
        for (int j = 0; j < B; j++) {
            cout << a[i][j] * liczba << "\t ";
        }
        cout << endl;
    }
    return 0;
}
