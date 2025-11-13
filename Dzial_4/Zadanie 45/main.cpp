#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	cout << " |";
	for(int i=1; i<=7; i++){
		cout << "  " << i;
	}
	cout << "\n";
	
	for(int i=0; i<23; i++){
		cout << "=";
	}
	cout << "\n";
	
	for(int i=1; i<=7; i++){
		cout << i << "|";
		for(int j=1; j<=7; j++){
			if (i*j<10) cout << "  ";
			else cout << " ";
			cout << i*j;
		}
		cout << "\n";
	}
	
	return 0;
}
