#include <windows.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
 char str[20];
 str[0] = 'A';
 str[1] = 'h';
 str[2] = 'o';
 str[3] = 'j';
 str[4] = '\0';

 cout << str;

 getch();
}
