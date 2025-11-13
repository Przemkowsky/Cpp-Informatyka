#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 cout<<"podaj liczbe naturalna, ktora sprawdze czy jest pierwsza=";
 int pierwsza;
 int k;
 cin>>pierwsza;
 int i;
 k=0;
 for( i=2;i<=sqrt(pierwsza);++i)
 {
 if ((pierwsza) % i==0) 
 {
 k=1;
 cout<<"liczba "<<pierwsza<<" to nie jest liczba pierwsza jest podzielna przez "
 <<i<<"\n";
 }
 }
 if ( k==0)
 {
 cout<<"liczba "<<pierwsza<<" to jest liczba pierwsza"<<"\n";
 } 
 system("PAUSE");
 return EXIT_SUCCESS;
}
