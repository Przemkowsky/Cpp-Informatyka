#include <iostream>
using namespace std;

int n, k = 0, d;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj N= ";
	cin >> n;
	
	while(n!=0){
		d = n % 10;
		n = n / 10;
		k += d;
	}
	cout << "Wartoœæ K= " << k << endl;
	cout << "Wartoœæ d= " << d;
	
	return 0;
}
