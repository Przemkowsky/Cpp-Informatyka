#include <iostream>

using namespace std;

int A[5], iloczyn=1;
int main(int argc, char** argv) {
	
	for(int i=0;i<5;i++){
		cout<<"Podaj A["<<i<<"]=";
		cin>>A[i];
		iloczyn*=A[i];
	}
	cout<<"Iloczyn wczytanego ciagu 5 elementowego wynosi "<<iloczyn;
	return 0;
}