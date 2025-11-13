#include <iostream>
using namespace std;

int a, b, c, najm, najw;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj wartoœci a, b, c rozdzielaj¹c je spacjami: ";
	cin >> a >> b >> c;
	cout << "Wprowadzone liczby to: " << a << " " << b << " " << c << endl;
	
	if(a > b){
		najw = a;
		najm = b;
	}
	else{
		najw = b;
		najm = a;
	}
	if(c < najm){
		cout << "Wypisujê liczby rosn¹co: " << c << " " << najm << " " << najw;
	}
	else{
		if(c < najw){
			cout << "Wypisujê liczby rosn¹co: " << najm << " " << c << " " << najw;
		}
		else{
			cout << "Wypisujê liczby rosn¹co: " << najm << " " << najw << " " << c;
		}
	}
	
	return 0;
}
