#include <iostream>
#include <conio.h>
using namespace std;

double x;
char znak = 'p';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	while(znak == 'p' || znak == 'P'){
	cout << "Podaj liczb� x: ";
	cin >> x; cout << endl;
	
	if(x > -1 && x < 1){
		x *= x;
		printf("p(x)=%.2p",x); cout << endl;
	}
	else{
		x = 1;
		cout<< "p(x)=" << x << endl;
	}
	cout << "Je�eli powt�rzy� program wci�nij klawisz p" << endl;
	cout << "W przeciwnym wypadku wci�nij dowolny klawisz literowy" << endl;
	cin >> znak;
	}
	getchar();
	return 0;
}
