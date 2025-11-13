#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	cout<<"Lp.	Typ			Typowy rozmiar w bajtach	Rozmiar"<<endl;
	cout<<endl;
	cout<<"13	Double			10 bajtów			1.2 E-4932 do 1.2E+4932"<<endl;
	cout<<endl;
	cout<<"17	Unsigned long		4 bajty				Od 0 do 4294967295"<<endl;
	cout<<endl;
	cout<<"21	Short int		2 bajty				Od -32768 do 32767"<<endl;
	cout<<endl;
	cout<<"25	Long long		8 bajtów			Od -9223372036854775808 do 9223372036854775807"<<endl;
	cout<<endl;
	cout<<"1	Char signed		1 bajt				-128 do 127"<<endl;
	cout<<endl;
	cout<<"5	Unsigned int		4 bajty				0 do 65535"<<endl;
	cout<<endl;
	cout<<"9	Unsigned long int	4 bajty				0 do 4294967295"<<endl;
	cout<<endl;
	return 0;
}
