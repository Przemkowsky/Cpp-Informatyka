#define pisz printf //zast¹pieniu w tekœcie programu jednych ³añcuchów znaków printf przez 
#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
 int Numer_Dnia;
 pisz("\nPodaj numer dnia tygodnia\n");
 scanf("%d",&Numer_Dnia);
 switch(Numer_Dnia)
 {
 case 1: {pisz("PONIEDZIALEK");break;}
 case 2: {pisz("WTOREK");break;}
 case 3: {pisz("SRODA");break;}
 case 4: {pisz("CZWARTEK");break;}
 case 5: {pisz("PIATEK");break;}
 case 6: {pisz("SOBOTA");break;}
 case 7: {pisz("NIEDZIELA");break;}
 default: pisz("\nniema takiego dnia tygodnia!!!");
 } 
 cout<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
