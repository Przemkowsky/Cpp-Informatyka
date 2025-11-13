#include <iostream>
using namespace std;

int liczba, parzysta;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj miesi¹c Twojego urodzenia: ";
	cin >> liczba;
	parzysta = liczba;
	
	if(parzysta%2!=0){
		parzysta+=1;
	}
	
	for(int i=parzysta; i<=liczba+30; i=i+2){
		cout << i << " ";
	}
	
	getchar();
	
	return 0;
}
