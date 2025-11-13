#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	system("chcp 1250");
	system("cls");
	
	cout << setprecision(4) << fixed << endl;
	float suma;
	float calk_suma;
	float y;
	for(int i=1; i<=1000000; i++){
		suma=0;
		y = i;
		suma = 1.0/i;
		calk_suma += suma;
	}
	cout << "suma w " << y << " pêtli=" << calk_suma << endl;
	cout << "ca³kowita suma=" << calk_suma << endl;
	return 0;
}
