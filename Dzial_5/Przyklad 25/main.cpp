#include <windows.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
 float T[2][3] = {{1,2.22}, {.5}};
 cout << endl;
 for( int i = 0; i < 2; i++ )
 {
 for( int j = 0; j < 3; j++ )
 {
 printf("%.2f\t", T[i][j]);
 }
 cout << endl;
 }
 getch();
}
