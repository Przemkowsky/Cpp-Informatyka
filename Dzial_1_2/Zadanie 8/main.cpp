#include <iostream>

using namespace std;

int x;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout<<"Wprowadzam liczbê x w postaci dziesiêtnej"<<endl;
	cout<<"Podaj liczbê x: ";
	cin>>x;
	cout<<endl;
	cout<<endl;
	
	cout<<"Wczytana niczba = ";
	cout<<x;
	
	cout<<" liczba w formie szesnastkowej wynosi = ";
	printf("%x",x);
	cout<<endl;
	cout<<endl;
	
	cout<<"liczba w formie ósemkowej wynosi = ";
	printf("%o",x);
	
	return 0;
}
