#include <cstdlib>
#include <iostream>
#include <conio.h> // instrukcja potrzebna do poprawnego dzialania getch()
using namespace std;
int main(int argc, char *argv[])
{
 system ("cls");
 system ("chcp 1250");
 
 int liczba1, liczba2, wynik;
 cout<<"Podaj pierwsza liczbê: ";
 cin>>liczba1;
 cout<<"\nPodaj druga liczbê: ";
 cin>>liczba2;
 wynik=liczba1%liczba2;
 cout<<"\nReszta z dzielenia liczby "<<liczba1<<" przez "<<liczba2<<" wynosi "<<wynik;
 if(wynik==0) //sprawdzenie warunku
 {cout<<"\npierwsza liczba jest podzielna przez druga"<<endl;} //instrukcja nr 1 - B£¥D !!!
 else //je¿eli nie
 {cout<<"\n\npierwsza liczba nie jest podzielna przez druga"<<endl;} //instrukcja nr 2 -B£¥D !!!
 cout<<endl;
 getch();
}
