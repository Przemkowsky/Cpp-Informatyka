#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int prz_gal[7];
        for(int i=0; i<7;i++){
    	cout<<"Podaj t[" << i <<"]=";
    	cin>>prz_gal[i];
	}

    cout << "wyglad wprowadzonej tablicy t" << endl;
    for(int i = 0; i < 7; i++) {
        cout << prz_gal[i] << " ";
    }
    cout << endl;
    
    int n = 7;
    int schowek_gal = 0;
    int zamiana = 1;
    
    while(zamiana > 0) {
        zamiana = 0;
        for(int i = 0; i < n - 1; i++) {
            if(prz_gal[i] > prz_gal[i + 1]) {
                schowek_gal = prz_gal[i];
                prz_gal[i] = prz_gal[i + 1];
                prz_gal[i + 1] = schowek_gal;
                zamiana++;
            }
        }
    }
    
    cout << "wyglad posortowanej rosnaco tablicy t" << endl;
    for(int i = 0; i < 7; i++) {
        cout << prz_gal[i] << " ";
    }
    
    getch();

}
