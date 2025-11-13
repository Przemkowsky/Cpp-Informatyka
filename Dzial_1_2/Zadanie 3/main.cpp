#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	cout<<endl;
	cout<<"+-------------------------------------------------------------+"<<endl; 
	cout<<endl;
	//-------------------------------------------------------------
	cout<<"!		Kolor		!	Numer koloru	      !"<<endl;
	cout<<endl;
	//"!		Kolor		!	Numer koloru	      !"
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	cout<<"!  	Wszystkie Kolory	!	.........	      !"<<endl;
	cout<<endl;
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	cout<<"!		Bia³y		!	15 oraz 7	      !"<<endl;
	cout<<endl;
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6| FOREGROUND_INTENSITY);
	cout<<"!		¯ó³ty		!	14 oraz 6   	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| FOREGROUND_INTENSITY);
	cout<<"!		Purpurowy	!	13 oraz 5	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);
	cout<<"!		Czerwony	!	12 oraz 4	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY);
	cout<<"!	Jasnoniebieski		!	11 oraz 3	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
	cout<<"!		Zielony		!	10 oraz 2     	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);
	cout<<"!	Ciemnoniebieski		!	9 oraz 1	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);
	cout<<"!		Szary		!	8 oraz 0	      !"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	cout<<"+-------------------------------------------------------------+"<<endl;
	cout<<endl;
	return 0;
}
