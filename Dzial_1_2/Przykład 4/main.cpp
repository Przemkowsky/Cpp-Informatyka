#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) 
{
	HANDLE hOut;
	
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"Standardowy"<<endl<<endl;
	
	SetConsoleTextAttribute(hOut,BACKGROUND_RED);
	cout<<"Czerwony"<<flush<<endl<<endl;
	
	SetConsoleTextAttribute(hOut,FOREGROUND_GREEN);
	cout<<"Zielony"<<endl<<endl;
	
	SetConsoleTextAttribute(hOut,FOREGROUND_BLUE);
	cout<<"Niebieski"<<endl<<endl;
	
	system("pause");
	
	return 0;
}
