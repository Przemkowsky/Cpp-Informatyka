#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int A[10],n,licznik=0,zmiana=0;
	cout<<"Pamietaj ze ilosc podanych elementow tablicy a[] nie przekroczyla 10!"<<endl;
	do{
		cout<<"\nPodaj ilosc elementow tablicy a:"<<endl;
		cout<<"\nn = ";
		cin>>n;
		cout<<"\nPamietaj ze ilosc podanych elementow tablicy a[] nie przekroczyla 10!"<<endl;
	}while(n>10);
	for(int i=0; i<n; i++){
		cout<<"Podaj a["<<i<<"] = ";
		cin>>A[i];
		
		if(A[i-1] < 0 && A[i] > 0){
			zmiana++;
		}
		else if(A[i-1]>0&&A[i]<0){
			zmiana++;
		}
	}
	cout<<"\nIlosc zmian znakow: " << zmiana;
	
	return 0;
}
