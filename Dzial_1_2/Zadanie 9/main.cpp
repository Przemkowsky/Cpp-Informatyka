#include <iostream>
#include <stdio.h>

using namespace std;

int gal,w1,w2;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	printf("Podaj liczb� naturaln�: ");
	scanf("%d",&gal);
	printf("\nWczytana liczba x = %d",gal);
	w1=gal*gal;
	printf("\nKwadrat liczby x = %d  %d ^ 2 = %d",gal,gal,w1);
	w2=gal*gal*gal;
	printf("\nSze�cian liczby x = %d  %d ^ 3 = %d",gal,gal,w2);
	
	return 0;
}
