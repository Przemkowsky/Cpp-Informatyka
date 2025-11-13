#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(int argc, char** argv) 
{
	int numer;
	cout << "Podaj numer w dzienniku: ";
	cin >> numer;
	for(int i=180+numer; i<=200+numer; i++){
		cout << setprecision(2) << fixed << "SQRT(" << i << ")=" << sqrt(i) << endl;
	}
	return 0;
}
