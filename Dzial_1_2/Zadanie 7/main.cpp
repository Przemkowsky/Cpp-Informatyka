#include <iostream>

using namespace std;

int stopnie;

int main(int argc, char** argv) 
{
	const float PI = 3.14159;
	cout<<"Podaj wartosc stopni: ";
	cin>>stopnie;
	cout<<stopnie * PI / 180<<endl;
	return 0;
}
