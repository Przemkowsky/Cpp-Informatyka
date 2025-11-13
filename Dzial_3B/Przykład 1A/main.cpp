#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int x,i;
 
 cout<<"Podaj x= ";
 cin>>x;
 
 if (x==1) 
 cout<<"NIE"<<endl;
 else
 { //1
 if (x==2)
 cout<<"TAK"<<endl;
 else
 { //2
 i=2;
 
 if (x%2==0)
 cout<<"NIE"<<endl;
 else
 do
 { 
 i++;
 if (i==x)
 cout<<"TAK"<<endl;
 }
 while (i!=x);
 }//2
 }//1
 system("PAUSE");
 return EXIT_SUCCESS;
}

