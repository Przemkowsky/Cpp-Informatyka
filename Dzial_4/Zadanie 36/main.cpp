#include <cstdlib> 
#include <iostream> 
#include <windows.h>  
using namespace std; 

void gotoxy(int x, int y) {  
	COORD coord;  
	coord.X = x;  
	coord.Y = y;  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
} 
int main(int argc, char *argv[]) { 
	for (int i=0;i<=22;i++) { 
		gotoxy(i,i); 
		cout<<"*"<<"\n";  
	}       
	return 0; 
}
