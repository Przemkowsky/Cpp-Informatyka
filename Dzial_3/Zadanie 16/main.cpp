#include <iostream>
using namespace std;

int n, m;
int obliczNWD(int n, int m) {
    while (m != 0) {
        int nwd = n % m; 
        n = m;
        m = nwd;
    }
    return n;
}

int main() {
    system("chcp 1250");
    system("cls");
	
	cout << "Podaj pierwsz¹ liczbê n= ";
    cin >> n;
    cout << "Podaj drug¹ liczbê m mniejsz¹ lub równ¹ pierwszej m= ";
    cin >> m;

    cout << "NWD(" << n << "," << m << ")=" << obliczNWD(n, m) << endl;
	cout << endl;
	
    system("pause");
    return 0;
}
