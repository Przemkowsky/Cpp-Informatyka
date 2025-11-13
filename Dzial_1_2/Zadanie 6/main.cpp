#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	const float PI = 3.14159;
	int k;
	cout<<"Podaj wartosc radianow: "<<endl;
	cin>>k;
	cout<<k * 180 /PI <<endl;
	return 0;
}
