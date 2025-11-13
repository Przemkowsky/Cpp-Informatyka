#include <iostream>
#include <conio.h>
using namespace std;

int wyn=0, d=2, n;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj wartoœæ N: ";
	cin >> n;	cout << endl;
	
	do{
		if(n % d == 0){
			wyn += 1;
		}
		d += 1;
	}while(d <= n / 2);
	
	cout << "wynik = " << wyn <<endl;
	cout << "d = " << d;
	getch();
	return 0;
}
