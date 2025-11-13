#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	
	float const PI=3.14159;
	float c=30;
	float a,b;
	float pole,cosa,sina,tga;
	float kata;
	float pa,pb,pc;
	
	printf("Podaj miarê boku a = ");
	scanf("%f",&a);
	
	pa = a * a;
	pb = b * b;
	pc = c * c;
	pb = pc - pa;
	
	b = sqrt(pb);
	printf("Bok b = %.3f cm",b);
	
	pole = (b*a)/2;
	printf("\nPole trójk¹ta = %.3f cm^2",pole);
	
	cosa=b/c;
	printf("\nCosinus alfa = %.3f",cosa);
	
	sina=a/c;
	printf("\nSinus alfa = %.3f",sina);
	
	tga=a/b;
	printf("\nTangens alfa = %.3f",tga);
	
	kata = tga * 180 /PI;
	printf("\nK¹t alfa = %.3f stopnii", kata);
	
	return 0;
}
