#include <iostream>
#include <windows.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

char auto1[30],auto2[30],auto3[30];
int v1km,v1ms,v1min,v2km,v2ms,v2min,v3km,v3ms,v3min;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	printf("Prêdkoœæ maksymalna ograniczona do 280 km/h\n");
	printf("Podaj markê pierwszego samochdu: ");
	scanf("%s",&auto1);
	printf("Podaj prêdkoœæ maksymaln¹ w km/h: ");
	scanf("%d",&v1km);
	
	printf("Podaj markê drugiego samochdu: ");
	scanf("%s",&auto2);
	printf("Podaj prêdkoœæ maksymaln¹ w km/h: ");
	scanf("%d",&v2km);
	
	printf("Podaj markê trzeciego samochdu: ");
	scanf("%s",&auto3);
	printf("Podaj prêdkoœæ maksymaln¹ w km/h: ");
	scanf("%d",&v3km);
	
	
	v1min = v1km*1000/60;
	v1ms = v1km*1000/3600;
	
	v2min = v2km*1000/60;
	v2ms = v2km*1000/3600;
	
	v3min = v3km*1000/60;
	v3ms = v3km*1000/3600;
	
	printf("\nMaksymalna prêdkoœæ %s = %d m/min lub %d m/s",auto1,v1min,v1ms);
	printf("\n\nMaksymalna prêdkoœæ %s = %d m/min lub %d m/s",auto2,v2min,v2ms);
	printf("\n\nMaksymalna prêdkoœæ %s = %d m/min lub %d m/s",auto3,v3min,v3ms);
	
	//wykres
	gotoxy(0,13); cout<<"*"<<endl;
	gotoxy(0,14); cout<<"*"<<endl;
	gotoxy(0,15); cout<<"*"<<endl;
	gotoxy(0,16); cout<<"*"<<endl;
	gotoxy(0,17); cout<<"*"<<endl;
	gotoxy(0,18); cout<<"*"<<endl;
	gotoxy(0,19); cout<<"*********************************************************************************"<<endl;
	
	gotoxy(5,20); cout<<"5";
	gotoxy(10,20); cout<<"10";
	gotoxy(15,20); cout<<"15";
	gotoxy(20,20); cout<<"20";
	gotoxy(25,20); cout<<"25";
	gotoxy(30,20); cout<<"30";
	gotoxy(35,20); cout<<"35";
	gotoxy(40,20); cout<<"40";
	gotoxy(45,20); cout<<"45";
	gotoxy(50,20); cout<<"50";
	gotoxy(55,20); cout<<"55";
	gotoxy(60,20); cout<<"60";
	gotoxy(65,20); cout<<"65";
	gotoxy(70,20); cout<<"70";
	gotoxy(75,20); cout<<"75";
	gotoxy(80,20); cout<<"80";
	
	//zaznaczanie
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| FOREGROUND_INTENSITY);
	gotoxy(v1ms,17); cout<<"*"<<auto1<<endl;
	Sleep(1000);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| FOREGROUND_INTENSITY);
	gotoxy(v2ms,15); cout<<"*"<<auto2<<endl;
	Sleep(1000);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| FOREGROUND_INTENSITY);
	gotoxy(v3ms,13); cout<<"*"<<auto3<<endl;
	Sleep(1000);
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| FOREGROUND_INTENSITY);
	getch();
	return 0;
}
