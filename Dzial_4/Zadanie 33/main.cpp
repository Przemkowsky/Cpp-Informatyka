#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	int y = 0;
	int z = 0;
	for(int i=33; i<=255; i++){
		cout << "Kod znaku " << i << " " << (char)i << "\t";
		z++;
		if(z==3){
			cout << endl;
			z=0;
			y++;
			if(y==20){
				getchar();
				y=0;
				system("cls");
				continue;
			}
		}	
	}
	return 0;
}
