#include <iostream>

using namespace std;

int A[7], suma=0, srednia=0;

int main(int argc, char** argv) {
	
	for(int i=0;i<7;i++){
		cout<<"Podaj A["<<i<<"]=";
		cin>>A[i];
		suma+=A[i];
	}
	srednia=suma/7;
	cout<<"Suma elementow wczytanych do tablicy A jest rowna "<<suma<<endl;
	cout<<"Srednia elementow wczytanych do tablicy A jest rowna "<<srednia;
	
	return 0;
}
