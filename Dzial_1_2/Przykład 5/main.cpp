#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
{
	//Oto program pokazuj¹cy operacje wczytywania z klawiatury i oblicznia wartoœci wyra¿enia
	
	float metry;
	float kilometry;
	float k=1000;
	
	cout<<"Podaj liczbe metrow: ";
	
	cin>>metry;			//wczytanie z klawiatury
	
	kilometry=metry / k;
	
	cout<<"Oto wynik przeksztalcenia: "<<metry<<" metrow to "<<kilometry<<" kilometrow.";
	cout<<endl;
	
	system("pause");
	return 0;
}
