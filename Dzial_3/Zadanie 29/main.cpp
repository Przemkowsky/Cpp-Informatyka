#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int a, b, c, d;
int sumawagi = 0, suma = 0;
int ciezar = 0;
int uzytych = 0;
char podaj = ' ';
char strona = ' ';
int czy_uzyto_a = 0, czy_uzyto_b = 0, czy_uzyto_c = 0, czy_uzyto_d = 0;
int lewa = 0, prawa = 1;


void gotoxy(int x, int y)  
{  
   COORD coord;  
   coord.X = x;  
   coord.Y = y;  
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
}
int main() {
	system("chcp 1250");
	system("cls");
	
	cout << "Suma czêœci musi daæ 40 kg" << endl;
	
	do{
		cout << "Podaj wagê pierwszej czêœci: ";
		cin >> a;
		cout << "Podaj wagê drugiej czêœci: ";
		cin >> b;
		cout << "Podaj wagê trzeciej czêœci: ";
		cin >> c;
		cout << "Podaj wagê czwartej czêœci: ";
		cin >> d;
		suma = a + b + c + d;
		
	if(suma != 40){
		cout << "Suma wagi odwa¿ników nie równa siê 40 kg!" << endl;
	}
	else if(a == b && a == c && a == d && b == c && b == d && c == d){
		cout << "Ciê¿arki nie mog¹ mieæ takiej samej wagi!" << endl;
	}
	}while(suma != 40 || a == b && a == c && a == d && b == c && b == d && c == d);
	
	cout << "Waga 1 czêœci: " << a << endl;
	cout << "Waga 2 czêœci: " << b << endl;
	cout << "Waga 3 czêœci: " << c << endl;
	cout << "Waga 4 czêœci: " << d << endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
	cout << "Uwaga! \nTowar wa¿ymy na szalce prawej!" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	
	do{
		cout << "Ciê¿ar jaki mamy zwa¿yæ to: ";
		cin >> ciezar;
	}while(ciezar > 40);
	
	cout << "Jakich ciê¿arków chcesz u¿yæ?" << endl;
	while(uzytych < 4 && sumawagi < ciezar){
		cout << "Lewa strona= " << lewa << " (" << sumawagi << ")\t" << "\tprawa strona= " << prawa << " (" << ciezar << ")" << endl;
		cout << "Podaj ciê¿arek: ";
		cin >> podaj;
		switch(podaj){
			case 'a':
			case 'A':
			{
			if(czy_uzyto_a == 1){
				cout << "Nie mo¿na u¿ywac tych samych ciê¿arków!" << endl;
				break;
			}
			else{
			uzytych++;
			czy_uzyto_a = 1;
			cout << "Po której stronie chesz daæ: ";
			cin >> strona;
			if(strona == 'p' || strona == 'P'){
				prawa++;
				ciezar+=a;
			}
			else if(strona == 'l' || strona == 'L'){
				lewa++;
				sumawagi += a;
			}
			break;
			}
			}
			case 'b':
			case 'B':
			{
			if(czy_uzyto_b == 1){
				cout << "Nie mo¿na u¿ywac tych samych ciê¿arków!" << endl;
				break;
			}
			else{
			uzytych++;
			czy_uzyto_b = 1;
			cout << "Po której stronie chesz daæ: ";
			cin >> strona;
			if(strona == 'p' || strona == 'P'){
				prawa++;
				ciezar+=b;
			}
			else if(strona == 'l' || strona == 'L'){
				lewa++;
				sumawagi += b;
			}
			break;
			}
			}
			case 'c':
			case 'C':
			{
			if(czy_uzyto_c == 1){
				cout << "Nie mo¿na u¿ywac tych samych ciê¿arków!" << endl;
				break;
			}
			else{
			//sumawagi += c;
			uzytych++;
			czy_uzyto_c = 1;
			cout << "Po której stronie chesz daæ: ";
			cin >> strona;
			if(strona == 'p' || strona == 'P'){
				prawa++;
				ciezar += c;
			}
			else if(strona == 'l' || strona == 'L'){
				lewa++;
				sumawagi += c;
			}
			break;
			}
			}
			case 'd':
			case 'D':
			{
			if(czy_uzyto_d == 1){
				cout << "Nie mo¿na u¿ywac tych samych ciê¿arków!" << endl;
				break;
			}
			else{
			//sumawagi += d;
			uzytych++;
			czy_uzyto_d = 1;
			cout << "Po której stronie chesz daæ: ";
			cin >> strona;
			if(strona == 'p' || strona == 'P'){
				prawa++;
				ciezar += d;
			}
			else if(strona == 'l' || strona == 'L'){
				lewa++;
				sumawagi += d;
			}
			break;
			}
			}
			default: cout << "Nie ma takiego ciê¿arku!" << endl;
		}
		
	}
	
	if(ciezar == sumawagi){
		cout << "Lewa strona= " << lewa << " (" << sumawagi << ")\t" << "\tprawa strona= " << prawa << " (" << ciezar << ")" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
		cout << "Brawo - udana próba wa¿enia!!!!";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	}
	else{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);
		cout << "Niestety - nie uda³o ci siê dobraæ ciê¿arków!";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	}
	if(czy_uzyto_a == 1 && ciezar == sumawagi){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);
		gotoxy(41,0); cout << "***" << endl;
		gotoxy(40,1); cout << "*****" << endl;
		gotoxy(41,2); cout << "|||" << endl;
		gotoxy(38,3); cout << "*********" << endl;
		gotoxy(38,4); cout << "*********" << endl;
		gotoxy(38,5); cout << "*********" << endl;
		gotoxy(36,6); cout << "*************" << endl;
		gotoxy(45,0); cout << a << endl;
		gotoxy(0,18);
	}
	if(czy_uzyto_b == 1 && ciezar == sumawagi){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
		gotoxy(59,0); cout << "***" << endl;
		gotoxy(58,1); cout << "*****" << endl;
		gotoxy(59,2); cout << "|||" << endl;
		gotoxy(56,3); cout << "*********" << endl;
		gotoxy(56,4); cout << "*********" << endl;
		gotoxy(56,5); cout << "*********" << endl;
		gotoxy(54,6); cout << "*************" << endl;
		gotoxy(63,0); cout << b << endl;
		gotoxy(0,18);
	}
	if(czy_uzyto_c == 1 && ciezar == sumawagi){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);
		gotoxy(77,0); cout << "***" << endl;
		gotoxy(76,1); cout << "*****" << endl;
		gotoxy(77,2); cout << "|||" << endl;
		gotoxy(74,3); cout << "*********" << endl;
		gotoxy(74,4); cout << "*********" << endl;
		gotoxy(74,5); cout << "*********" << endl;
		gotoxy(72,6); cout << "*************" << endl;
		gotoxy(81,0); cout << c << endl;
		gotoxy(0,18);
	}
	if(czy_uzyto_d == 1 && ciezar == sumawagi){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);
		gotoxy(95,0); cout << "***" << endl;
		gotoxy(94,1); cout << "*****" << endl;
		gotoxy(95,2); cout << "|||" << endl;
		gotoxy(92,3); cout << "*********" << endl;
		gotoxy(92,4); cout << "*********" << endl;
		gotoxy(92,5); cout << "*********" << endl;
		gotoxy(90,6); cout << "*************" << endl;
		gotoxy(99,0); cout << d << endl;
		gotoxy(0,18);
	}
	if(ciezar == sumawagi){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);
		gotoxy(113,0); cout << "***" << endl;
		gotoxy(112,1); cout << "*****" << endl;
		gotoxy(113,2); cout << "|||" << endl;
		gotoxy(110,3); cout << "*********" << endl;
		gotoxy(110,4); cout << "*********" << endl;
		gotoxy(110,5); cout << "*********" << endl;
		gotoxy(108,6); cout << "*************" << endl;
		gotoxy(117,0); cout << ciezar << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
		gotoxy(105,4); cout << "=" << endl;
		gotoxy(0,18);
	}
	getch();
	return 0;
}
