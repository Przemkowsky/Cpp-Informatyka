#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


void gotoxy(int x, int y) { 
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord );
} 

int main(int argc, char** argv) {
	int y[33] = {22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 7, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
	int x[33] = {3, 4, 5, 6, 7, 8, 9, 11, 13, 15, 17, 20, 23, 26, 29, 32, 35, 40, 43, 46, 49, 52, 55, 56, 58, 60, 62, 64, 65, 66, 67, 68, 69};
	int kolory[6] = {4, 6, 2, 3, 1, 5};
	int k;
	
	for (int i = 0; i < 16; i++) {
		gotoxy(x[i], y[i]);
		k = 0;
		Beep(900, 10);
		for (int j = 0; j < 6; j++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kolory[k]| FOREGROUND_INTENSITY);
			cout << "*";
			k++;
			Sleep(10);
		}
	}
	
	for (int i = 16; i < 33; i++) {
		gotoxy(x[i], y[i]);
		k = 0;
		Beep(900, 10);
		for (int j = 6; j > 0; j--) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kolory[k]| FOREGROUND_INTENSITY);
			cout << "*";
			k++;
			Sleep(10);
		}
	}
	
	gotoxy(0, 24);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7| FOREGROUND_INTENSITY);
	getch();
	return 0;
}