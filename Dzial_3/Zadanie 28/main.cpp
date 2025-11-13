#include <iostream>
using namespace std;

char znak = ' ';

int main() 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Dzieñ dobry" << endl;
	goto pytanie;
	
	tutaj:
		cout << "Jestem u góry" << endl;
	
	pytanie:
		cout << "Jeœli chcesz skoñczyæ wciœnij klawisz y lub Y" << endl;
		cout << "Podaj jakiœ znak: ";
		cin >> znak;
	
	if(znak == 'y' || znak == 'Y'){
		goto koniec;
	}
	else{
		cout << "Jestem na dole" << endl;
		goto tutaj;
	}
	
	koniec:
		return 0;
}
