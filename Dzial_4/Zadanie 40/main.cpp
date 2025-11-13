#include <iostream>
#include <math.h>
using namespace std;

int numer, wynik, wynik_poczatkowy;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	cout << "Podaj numer z dziennika= ";
	cin >> numer;
	wynik = 1000+(numer*100)+15;
	cout << "Podana liczba 1000+" << numer << "*100+15 wynosi " << wynik << endl;
	
	for(;;wynik++){
		int k=0; 
    	for(int i=2;i<=sqrt(wynik);++i) { 
        	if ((wynik) % i==0){ 
        		k=1; 
        		//cout<<"liczba "<<wynik<<" to nie jest liczba pierwsza jest podzielna przez " <<i<<"\n"; 
    			break;
			} 
    	} 
    	if (k==0){ 
    		cout<<"liczba "<<wynik<<" to jest liczba pierwsza"<<"\n"; 
    		break;
		} 
	}
	 
	
	
	
	
	/*wynik_poczatkowy = wynik;
	
	for (int i=2; i<=sqrt(wynik_poczatkowy);++i){
		cout << wynik << endl;
		if (wynik % i == 0){
			cout << "Najbli¿sza liczba pierwsza to " << wynik << endl;
			break;
		}
		wynik++;
	}*/
		
	return 0;
}
