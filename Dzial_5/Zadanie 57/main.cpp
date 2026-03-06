#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Podaj ktory element ciagu chcesz wyswietlic:" << endl;
    cin >> n;

    if (n <= 0) {
        cout << "Cos nie tak z liczba!" << endl;
        return 0;
    }

    long long fib[1000];
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " wyraz ciagu Fibonacciego wynosi: " << fib[i] << endl;
    }

    if (n > 1) {
        double phi = (double)fib[n - 1] / fib[n - 2];
        cout << fixed << setprecision(5);
        cout << "\nprzyblizenie zlotej liczby dla: " << n << " wyrazu ciagu wynosi: " << phi << endl;
    }

    return 0;
}