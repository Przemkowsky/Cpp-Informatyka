#include <iostream>
using namespace std;

int a, b;
int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Program wykonuj¹cy dzielenie" << endl;
	cout << "Podaj pierwsz¹ liczbê: ";
	cin >> a;
	cout << endl;
	cout << "Podaj drug¹ liczbê: ";
	cin >> b;
	cout << endl;
	
	if(b == 0)
	{
		cout << "B³¹d! Dzielenie przez 0";
	}
	else
	{
		cout << "Wynik dzielenia to " << a/b;
	}
	return 0;
}
