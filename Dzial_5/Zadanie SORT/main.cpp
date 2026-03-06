#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int ROZMIAR;

    cout << "Podaj ile nazwisk wprowadzasz do tablicy: ";
    cin >> ROZMIAR;
    cin.ignore();
    string nazwisko[100]; 

    cout << "Podaj " << ROZMIAR << " nazwiska:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        getline(cin, nazwisko[i]);
    }
    sort(nazwisko, nazwisko + ROZMIAR);

    cout << "Nazwiska posortowane alfabetycznie:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << nazwisko[i] << endl;
    }
    return 0;
}

