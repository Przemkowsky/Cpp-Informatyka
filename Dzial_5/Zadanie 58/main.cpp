#include <iostream>
#include <vector>
using namespace std;

int main() {
    int skok;
    
    cout << "Podaj ilosc skokow narciarskich odnotowanych przez trenera:" << endl;
    cin >> skok;
    
    vector<long long> dlugosci_skokow(skok);
    
    cout << "Podaj jakie wyniki skokow uzyskal zawodnik: (liczby rozdziel enterem):" << endl;
    for (int i = 0; i < skok; i++) {
        cin >> dlugosci_skokow[i];
    }
    
    int a, b;
    
    cout << "Podaj dlugosc sprawdzanego okresu (liczby rozdziel enterem):" << endl;
    cin >> a >> b;

    if (a >= b || b >= skok) {
        cout << "Nic z tego - za malo bananow!" << endl;
        return 0;
    }

    for (int i = a; i < b; i++) {
        if (dlugosci_skokow[i] >= dlugosci_skokow[i + 1]) {
            cout << "Nic z tego - za malo bananow!" << endl;
            return 0;
        }
    }
    
    cout << "TAK - jedziemy na zawody" << endl;
    
    return 0;
}	