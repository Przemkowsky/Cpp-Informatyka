#include <iostream>

using namespace std;

int n, iloczyn, koniec;
string imie;
int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	cout<<"Podaj liczbê liter twojego imienia: ";
	cin>>imie;
	cout<<endl;
	cout<<"n= ";
	cin>>n;
	cout<<endl;
	cout<<"koniec= ";
	cin>>koniec;
	cout<<endl;
	iloczyn = 1;
	while(koniec<10){
		iloczyn *= n;
		n++;
		koniec++;
	}
	cout<<"Iloczyn wynosi: "<<iloczyn<<" ostatnia liczba: "<< koniec;
	return 0;
}
