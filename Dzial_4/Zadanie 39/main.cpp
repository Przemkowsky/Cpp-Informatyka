#include <iostream>
#include <windows.h>
using namespace std;

int kolumna, wiersz, d;

void gotoxy(int x, int y) {  
	COORD coord;  
	coord.X = x;  
	coord.Y = y;  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
}

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj zmienn¹ (kolumnê ekranu)x= ";
	cin >> kolumna;
	cout << "Podaj zmienn¹ (wiersz ekranu)y= ";
	cin >> wiersz;
	cout << "Podaj d³ugoœæ linii D= ";
	cin >> d;

	int kolumna_koniec = kolumna;
	
	/*d--;
	gotoxy(kolumna+(d/2), wiersz);
	cout << "0";
	
	for (int i=0; i<d/2;i++){
		gotoxy(kolumna++,wiersz);
		cout << "-";
	}
	for (int i=d/2; i>0;i--){
		gotoxy((kolumna+d)-1,wiersz);
		cout << "-";
	}*/
	gotoxy(kolumna, wiersz);
	for (int i=0; i<=d; i++){
		cout << "-";
		gotoxy(kolumna++, wiersz);
	}
	
	gotoxy(kolumna_koniec+d/2, wiersz);
	cout << "0";
	
	gotoxy(0, wiersz+1);
	return 0;
}
