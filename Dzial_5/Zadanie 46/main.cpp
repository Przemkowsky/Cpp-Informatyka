#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int L_mniejsze=0, L_wieksze=0, L_rowne=0, A[8],n;
	
	for(int i=0;i<8;i++){
		cout<<"Podaj A["<<i<<"]=";
		cin>>n;
		if(n>0){
			L_wieksze++;
		}
		if(n<0){
			L_mniejsze++;
		}
		if(n==0){
			L_rowne++;
		}
	}
	
	cout<<"Liczba wyrazow ciagu ktore sa wieksze od zera wynosi "<<L_wieksze<<endl;
	cout<<"Liczba wyrazow ciagu ktore sa rowne zero wynosi "<<L_rowne<<endl;
	cout<<"Liczba wyrazow ciagu ktore sa mniejsze od zera wynosi "<<L_mniejsze;
	return 0;
}