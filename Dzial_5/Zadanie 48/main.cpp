#include <iostream>
using namespace std;

int main() {
    const int W = 5;
    const int K = 2;

    int m[W][K];
    double A[W];

    for (int i = 0; i < W; i++) {
        for (int j = 0; j < K; j++) {
            cout << "Podaj element a[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < W; i++) {
        double suma = 0;
        for (int j = 0; j < K; j++) {
            cout << m[i][j] << " ";
            suma += m[i][j];
        }
        A[i] = suma / K;
        cout << "\tsrednia w wierszu " << i << " macierzy wynosi \t" << A[i] << endl << endl;
    }

    cout<< "Tablica srednich wyglada nastepujaco: A[";
    for (int i = 0; i < W; i++) {
        cout <<A[i] << " ";
    }
	cout<<"]";
    double min = A[0], max = A[0];
    int imin = 0, imax = 0;

    for (int i = 1; i < W; i++) {
        if (A[i] < min) {
            min = A[i];
            imin = i;
        }
        if (A[i] > max) {
            max = A[i];
            imax = i;
        }
    }

    cout << endl << endl;
    cout << "max: A[" << imax << "] = " << max << endl;
    cout << "min: A[" << imin << "] = " << min << endl;

	system("PAUSE");
    return 0;
}
