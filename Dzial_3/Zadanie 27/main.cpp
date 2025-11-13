#define przelacz switch
#define przypadek case

#include <iostream>
#include <conio.h>
using namespace std;

char panstwo = ' ';

int main()
{
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj pierwsz¹ literê kraju, z którym graniczy Polska:\n";
	
	cin >> panstwo;
	przelacz(panstwo){
		przypadek 'n': {
			cout << "Niemcy";
			break;
		}
		przypadek 'N': {
			cout << "Niemcy";
			break;
		}
		przypadek 'c':{
			cout << "Czechy";
			break;
		}
		przypadek 'C':{
			cout << "Czechy";
			break;
		}
		przypadek 'S':{
			cout << "S³owacja";
			break;
		}
		przypadek 's':{
			cout << "S³owacja";
			break;
		}
		przypadek 'u':{
			cout << "Ukraina";
			break;
		}
		przypadek 'U':{
			cout << "Ukraina";
			break;
		}
		przypadek 'b':{
			cout << "Bia³oruœ";
			break;
		}
		przypadek 'B':{
			cout << "Bia³oruœ";
			break;
		}
		przypadek 'l':{
			cout << "Litwa";
			break;
		}
		przypadek 'L':{
			cout << "Litwa";
			break;
		}
		przypadek 'r':{
			cout << "Rosja";
			break;
		}
		przypadek 'R':{
			cout << "Rosja";
			break;
		}
		default: cout << "Nie ma takiego kraju na granicy z Polsk¹!";
	}
	getch();
	return 0;
}
