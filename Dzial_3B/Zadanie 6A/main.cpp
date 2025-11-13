#include <iostream>
using namespace std;

int n, k, wynik = 1;

int main(int argc, char** argv) {
	
	cout << "Podaj n= ";
	cin >> n;
	cout << "Podaj k= ";
	cin >> k;
	
	for (int i = 0; i < k; i++){
		wynik *= n;
	}
	
	cout << "wynik= " << wynik;
	return 0;
}
