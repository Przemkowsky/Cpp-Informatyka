#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char** argv) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY); 
	gotoxy(15,0);cout<<"**"<<endl;
	gotoxy(14,1);cout<<"****"<<endl;
	gotoxy(13,2);cout<<"******"<<endl;
	gotoxy(15,3);cout<<"**"<<endl;
	gotoxy(14,4);cout<<"*"<<endl;
	gotoxy(17,4);cout<<"*"<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
	
	gotoxy(15,4); cout<<"/\\"<<endl;
	gotoxy(14,5);cout<<"//\\\\"<<endl;
	
	
	gotoxy(13,6);cout<<"///\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY); 
	gotoxy(17,6);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY); 
	gotoxy(13,6);cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(12,7);cout<<"////\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| FOREGROUND_INTENSITY); 
	gotoxy(15,7);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4| FOREGROUND_INTENSITY); 
	gotoxy(12,7);cout<<"i"<<endl;
	gotoxy(19,7);cout<<"i"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	
	gotoxy(13,8);cout<<"///\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
	gotoxy(13,8);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(12,9);cout<<"////\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY); 
	gotoxy(14,9);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
	gotoxy(19,9);cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	
	gotoxy(11,10);cout<<"/////\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY); 
	gotoxy(16,10);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(10,11);cout<<"//////\\\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| FOREGROUND_INTENSITY);
	gotoxy(18,11);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY); 
	gotoxy(12,11);cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4| FOREGROUND_INTENSITY); 
	gotoxy(10,11);cout<<"i"<<endl;
	gotoxy(21,11);cout<<"i"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(11,12);cout<<"/////\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
	gotoxy(17,12);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(10,13);cout<<"//////\\\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| FOREGROUND_INTENSITY); 
	gotoxy(15,13);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(9,14);cout<<"///////\\\\\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY); 
	gotoxy(13,14);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| FOREGROUND_INTENSITY); 
	gotoxy(19,14);cout<<"O"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	gotoxy(8,15);cout<<"////////\\\\\\\\\\\\\\\\"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| FOREGROUND_INTENSITY); 
	gotoxy(11,15);cout<<"o"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY); 
	gotoxy(8,15);cout<<"i"<<endl;
	gotoxy(23,15);cout<<"i"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY); 
	
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| FOREGROUND_INTENSITY);
	gotoxy(14,16); cout<<"||||"<<endl;
	gotoxy(14,17); cout<<"||||"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| FOREGROUND_INTENSITY);
	gotoxy(13,18); cout<<"8----8"<<endl;
	gotoxy(12,19); cout<<"//||||\\\\"<<endl;
	gotoxy(11,20); cout<<"//      \\\\"<<endl;
	gotoxy(6,21); cout<<"---------------------"<<endl;



	
	
	
	return 0;
}
