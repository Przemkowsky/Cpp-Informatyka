#include <iostream>
#include <windows.h>
using namespace std;

int numer, wiersz, kolumna;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj swój numer w dzienniku: ";
	cin >> numer;
	wiersz = (numer%3);
	wiersz += 5;
	cout << "Wiersz: " << wiersz << endl;
	kolumna = (numer%2);
	kolumna += 11;
	cout << "Kolumna: " << kolumna << endl;
	
	int wiersz_koniec = wiersz;
	int kolumna_koniec = kolumna;
	
	gotoxy(kolumna, wiersz); 
	for (int i=0; i<=4; i++){
		gotoxy(kolumna, wiersz++);
		cout << "*" << endl;
	}
	
	for (int i=0; i<=4; i++){
		gotoxy(kolumna--, wiersz);
		cout << "*" << endl;
	}
	
	for (int i=0; i<=4; i++){
		gotoxy(kolumna, wiersz--);
		cout << "*" << endl;
	}
	
	for (int i=0; i<=4; i++){
		gotoxy(kolumna++, wiersz);
		cout << "*" << endl;
	}
	
	gotoxy(0, wiersz_koniec+=8);
	return 0;
}
