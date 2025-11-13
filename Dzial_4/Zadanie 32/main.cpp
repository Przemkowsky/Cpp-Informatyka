#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	int x=0,y=0;
	
	for(;;){
		cout << "Podaj liczbe do sumowania" << endl;
		cin >> y;
		
		if(y>0){
			x+=y;
		}
		else if(y<0){
			continue;
		}
		else{
			cout << "Nast¹pi³ BREAK";
			break;
		}
		cout << "SUMA CZESCIOWA: " << x << endl;
	}
	return 0;
}
