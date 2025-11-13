#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) 
{
	float x,y;
	float wynik;
 
	printf("Zamieniam ulamki zwykle na dziesietne\n");
	printf("\nPodaj licznik ulamka:");
	scanf("%f",&x); 	//pobiera liczbe z klawiatury
	printf("\nPodaj mianownik ulamka:");
	scanf("%f",&y);
 
	wynik=x/y; 		//tu wykonuje sie dzielenie
 
	printf("\n%f : %f=%f", x,y, wynik);
	cout<<endl;
 
	system("PAUSE");
	return 0;
}
