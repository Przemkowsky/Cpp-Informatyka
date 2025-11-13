#include <iostream>

using namespace std;

int a, b;

int main(int argc, char** argv) 
{
	cout<<"Podaj liczbe a: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Podaj liczbe b: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Dodawanie: "<<a + b<<endl;
	cout<<endl;
	
	cout<<"Odejmowanie: "<<a - b<<endl;
	cout<<endl;
	
	cout<<"Iloczyn: "<<a * b<<endl;
	cout<<endl;
	
	cout<<"Iloraz: "<< (float) a / b<<endl;
	cout<<endl;
	
	cout<<"Reszta: "<<a % b<<endl;
	
	return 0;
}
