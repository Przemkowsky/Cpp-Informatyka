#include <iostream>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std;

int a, b, c, opcja;
float p, s, R, r;

int main(){
	system("chcp 1250");
	system("cls");
	
	cout << "Umiem obliczac pole trójk¹ta oraz promieñ ko³a wpisanego lub opisanego na trójk¹cie" << endl;
	cout << "po podaniu d³ugoœci boków trójk¹ta \n umiem sprawdzaæ wczytywane dane" << endl;
	cout << "musisz wybrac opcje" << endl;
	
	cout << "****************************************" << endl;
	cout << "1-pole trójk¹ta" << endl;
	cout << "2-promieñ ko³a opisanego na trójk¹cie" << endl;
	cout << "3-promieñ ko³a wpisanego w trójk¹cie" << endl;
	cout << "****************************************" << endl;
	
	do{
	cout << "podaj opcje" << endl;
	cin >> opcja; 
	}while(opcja != 1 && opcja != 2 && opcja != 3);
	do{
	cout << endl;
	cout << "Podaj d³ugoœæ boku A w centymetrach:" << endl;
	cin >> a;
	cout << "Podaj d³ugoœæ boku B w centymetrach:" << endl;
	cin >> b;
	cout << "Podaj d³ugoœæ boku C w centymetrach:" << endl;
	cin >> c;
	
	
	if(opcja == 1 && a + b > c && a + c > b && b + c > a){
		p = (a + b + c)/2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
		cout << "Boki tworz¹ trójk¹t" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
		cout << "Wczytane dane:" << endl;
		cout << "A=" << a << " cm" << endl;
		cout << "B=" << b << " cm" << endl;
		cout << "C=" << c << " cm" << endl;
		cout << "Wyniki" << endl;
		cout << "Pole trójk¹ta = " << s << " cm^2" << endl;
	}
	
	else{
		
		if(opcja == 2 && a + b > c && a + c > b && b + c > a){
			p = (a + b + c)/2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			R = (a * b * c) / (4 * s);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
			cout << "Boki tworz¹ trójk¹t" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			cout << "Wczytane dane:" << endl;
			cout << "A=" << a << endl;
			cout << "B=" << b << endl;
			cout << "C=" << c << endl;
			cout << "Wyniki" << endl;
			cout << "Promieñ ko³a opisanego na trójk¹cie = " << R << endl;
		}
		
		else{
			if(opcja == 3 && a + b > c && a + c > b && b + c > a){
			p = (a + b + c)/2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			r = s / p;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
			cout << "Boki tworz¹ trójk¹t" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			cout << "Wczytane dane:" << endl;
			cout << "A=" << a << endl;
			cout << "B=" << b << endl;
			cout << "C=" << c << endl;
			cout << "Wyniki" << endl;
			cout << "Promieñ ko³a wpisanego w trójk¹cie = " << r << endl;
			}
			
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
				cout << "Boki nie tworz¹ trójk¹ta" << endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY); 
			}
			
		}
	}
	}while(!(a + b > c && a + c > b && b + c > a));
	getchar();
	return 0;
}
