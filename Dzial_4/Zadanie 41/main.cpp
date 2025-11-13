#include <iostream>
#include <math.h>
using namespace std;

int dol, gor, j=0, suma=0, k=0;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	
	do{
		cout << "Podaj doln¹ wartoœæ dol=";
		cin >> dol;
		cout << "Podaj górn¹ wartoœæ gora=";
		cin >> gor;
	}while(dol<1 && gor<1 && dol>gor);
	
	for (int i=dol; i<=gor; i++){
		k=0;
		for(j=2;j<=sqrt(i);++j) {
        	if ((i) % j==0) {
           		k=1;
          	} 
        } 
     	if (k==0){ 
       		cout<<"liczba "<<i<<" to jest liczba pierwsza"<<endl;
       		j=i;
       		suma+=j;
    	}
	}
	cout << "suma=" << suma << endl;
	
	return 0;
}
