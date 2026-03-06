#include <iostream>
using namespace std;

int main() {
    int prz_gal[7];
    
    for(int i=0; i<7;i++){
    	cout<<"Podaj t[" << i <<"]=";
    	cin>>prz_gal[i];
	}
    
    cout << "\nwyglad wprowadzonej tablicy tab [ ";
    for(int i = 0; i < 7; i++) {
        cout << prz_gal[i] << " ";
    }
    cout << "]" << endl;
    
    int n = 7;
    int bufor_gal = 0;
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
        	if (prz_gal[j]<prz_gal[i]) {
        		bufor_gal = prz_gal[i];
            	prz_gal[i] = prz_gal[j];
            	prz_gal[j] = bufor_gal;
			}
        }
        
        
       
        
    }
    
    cout << "\nposortowana tablica wyglada nastepujaco: tab[ ";
    for(int i = 0; i < 7; i++) {
        cout << prz_gal[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}
