#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.H>
using namespace std;
int main(int argc, char *argv[])
{
 float const PI=3.14159; short int opcja;
 float pole,obwod,r;
 printf("Umiem obliczac pole oraz obwod okregu\n");
 printf("po podaniu promienia\n");
 printf("umiem sprawdzac wczytywane dane\n");
 printf("musisz wybrac opcje\n");
 printf("*****************************************\n");
 printf("1-pole okregu\n");
 printf("2-obwod okregu\n");
 printf("*****************************************\n");
 do
 {
 printf("podaj opcje\n");
 scanf("%d",&opcja);
 }
 while((opcja!=1)&&(opcja!=2));
 do
 {
 printf("podaj promien okregu\n");
 scanf("%f",&r);
 }
 while (r<=0);
 printf("wczytane dane");
 printf("\nr=%.2f",r);
 printf(" cm");
 printf("\nwyniki");
 if (opcja==1) 
 {
 pole=PI*r*r;
 printf("\npole=%.2f",pole);
 printf(" cm2");
 }
 if (opcja==2)
 {
 obwod=2*PI*r;
 printf("\nobwod=%.2f",obwod);
 printf(" cm");
 }
 cout<<endl; 
 system("PAUSE");
 return EXIT_SUCCESS;
}
