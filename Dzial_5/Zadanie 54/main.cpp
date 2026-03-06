#include <iostream>
#include <conio.h>
using namespace std;

int tab_kle[7];
int j, bufor;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "sortowanie przez wstawianie\n\n";
	
	for (int i = 0; i < 7; i++) {
		cout << "Podaj element tablicy: [" << i << "] = ";
		cin >> tab_kle[i];
	}
	
	cout << "\nwygl¹d wprowadzonej tablicy tab [ ";
	for (int i = 0; i < 7; i++) {
		cout << tab_kle[i] << " ";
	}
	
	cout << "]\n\nposortowana tablica wygl¹da nastêpuj¹co: tab[ ";
	for (int i = 0; i < 7; i++) {
		j = i;
		bufor = tab_kle[j];
		while ((j > 0) && (tab_kle[j-1] > bufor)) {
			tab_kle[j] = tab_kle[j-1];
			j--;
		}
		tab_kle[j] = bufor;
	}
	
	for (int i = 0; i < 7; i++) {
		cout << tab_kle[i] << " ";
	}
	cout << "]\n";
	
	getch();
	return 0;
}
