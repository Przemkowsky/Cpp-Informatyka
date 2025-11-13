#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n, ile = 1;
	
	cin >> n;
	while(n!=1){
		if (n % 2 != 0) n = 3*n + 1;
		else n/=2;
		ile++;
	}
	cout << ile << endl;
	
	return 0;
}
