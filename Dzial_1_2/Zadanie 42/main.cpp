#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("color 80");
	system("chcp 1250");
	system("title STRINGI - autor : Ptzemysław Gałęziowski 1P");
	system("cls");
	
	string imie;
	string nazwisko;
	
	cout<<"Podaj imie: ";
	cin>>imie;
	cout<<endl;
	cout<<"Podaj nazwisko: ";
	cin>>nazwisko;
	cout<<endl;cout<<endl;
	
	cout<<"Nazwywasz si� "<<imie<<" "<<nazwisko<<endl; cout<<endl;
	cout<<"Twoje imie ma "<<imie.length()<<" liter, a nazwisko "<<nazwisko.length()<<endl; cout<<endl; 
	cout<<"��cznie Twoje dane maj� "<<imie.length()+nazwisko.length()<<" liter"<<endl; cout<<endl;
	cout<<"Twoje inicja�y to "<<imie[0]<<nazwisko[0]<<endl; cout<<endl;
	
	system("pause");
	return 0;
}
