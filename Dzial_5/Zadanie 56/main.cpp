#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int A[10];
	int n;
	cout<<"Pamietaj ze ilosc podanych elementow tablicy a[] nie przekroczyla 10!"<<endl;
	do{
		cout<<"\nPodaj ilosc elementow tablicy a:"<<endl;
		cout<<"\nn = ";
		cin>>n;
	}while(n>10);
	for(int i=0; i<n; i++){
		cout<<"Podaj a["<<i<<"] = ";
		cin>>A[i];
	}
	return 0;
}