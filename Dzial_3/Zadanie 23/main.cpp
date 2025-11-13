#include <iostream>
#include <conio.h>
using namespace std;

int x;
char znak = 't';

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	do {
        do {
            cout << "DZIEÑ DOBRY" << endl;
            cout << "bêdê powtarza³ program, a¿ do wczytania liczby z przedzia³u <-3,2)" << endl;
            cout << "Podaj liczbê x: ";
            cin >> x; cout << endl;
        } while (x >= -3 && x < 2);  
        cout << "\nJeœli powtórzyæ program wciœnij klawisz t\n";
        cout << "w przeciwnym wypadku wciœnij dowolny klawisz literowy" << endl;
        cin >> znak; cout << endl;
    } while (znak == 't' || znak == 'T');
    getchar();
	return 0;
}
