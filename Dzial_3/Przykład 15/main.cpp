#include <cstdlib>
#include <iostream>
#include <conio.h> // instrukcja potrzebna do poprawnego dzialania getch()
using namespace std;
int main()
{
const int pin=1753; //pin jest liczb¹ calkowit¹, jej wartoœæ to 1753
int podany_pin; //podany pin jest równie¿ liczb¹ ca³kowit¹ ;-)
cout<<"Prosze podac czterocyfrowy kod PIN: "<<endl; //prosimy o podanie kodu PIN
cin>>podany_pin; //wczytujemy kod z klawiatury
cout<<"Podany kod PIN to: "<<podany_pin<<endl; //dla wprawy, potwierdzamy
if(podany_pin==pin) //sprawdzamy warunek: je¿eli podany_pin RÓWNA SIÊ pin
{ //to
 cout<<"Kod PIN jest poprawny"<<endl; //tu mamy blok instrukcji, gdy pin jest poprawny
 cout<<"Oto Twoje dane:"<<endl<<endl;
 cout<<"Jan Kowalski"<<endl;
 cout<<"Kominki 56"<<endl;
 cout<<"34-683 Kielce"<<endl<<endl;
 cout<<"jankowalski@domena.pl"<<endl<<endl;
 cout<<"Dowolny klawisz, aby zakonczyc"<<endl;
}
else //je¿eli natomiast kod PIN jest b³êdny to wtedy:
{
 cout<<"kod PIN nie jest poprawny"<<endl;
 cout<<"Dowolny klawisz, aby zakonczyc"<<endl;
}
getch(); 
}

