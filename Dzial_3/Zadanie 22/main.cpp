#include <iostream>
using namespace std;

char p='p';
char g='g';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	cout << "Prosze poda� pierwsz� liter� kodu:" << endl;
	cin >> p;
	cout << "Prosze poda� drug� liter� kodu:" << endl;
	cin >> g;
	cout << "Podany kod to: " << p << g << endl;
	
	/*if(p == 'p' || p == 'P' && g == 'g' || g == 'G'){
		cout << "Dzie� dobry";
	}
	else{
		cout << "�egnaj";
	}*/
	
	if(p == 'p' || p == 'P' && g == 'g' || g == 'G') cout << "Dzie� dobry";
	else cout << "�egnaj";
	return 0;
}
