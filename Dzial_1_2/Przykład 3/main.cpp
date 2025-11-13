#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main(int argc, char** argv) 
{
	cout<<"Tekst nie jest kolorowany\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY); 
	cout<<"Tekst pokolorowany\n\n";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);
	//11 to kolor jasno niebieski
	cout<<"Tekst nie jest kolorowany\n\n";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	//15 to kolor bialy
	gotoxy(10,10);
	cout<<"F";
	cout<<endl;
	
	return 0;
	
}
