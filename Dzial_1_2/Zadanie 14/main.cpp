#include <iostream>
#include <conio.h>

using namespace std;

string imie, nazwisko;
int wiek, rok;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	printf("Podaj imiê: ");
	scanf("%s",&imie);
	
	printf("Podaj nazwisko: ");
	scanf("%s",&nazwisko);
	
	printf("Podaj wiek: ");
	scanf("%d",&wiek);
	
	printf("Podaj aktualny rok: ");
	scanf("%d",&rok);
	
	printf("\nWitaj %s %s! ",&imie, &nazwisko);
	printf("Pierwsz¹ naukê podjo³eœ w roku: %d\n",rok - wiek + 7);
	printf("Urodzi³eœ siê w roku: %d",rok - wiek);
	getch();
	return 0;
}
