#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) 
{
	system("color 17");
	system("chcp 1250");
	system("cls");
	
	float const PI=3.14159;
	float ax=0,ay=0,bx=1,by=1,cx=0,cy=0,dx=1,dy;
	float dv1,dv2;
	float a,b,c,d;
	float cos_alfa;
	float sin_alfa,cos_alfa2;
	float tan_alfa;
	float alfax;
	float alfas;
	
	
	printf("Podaj wspó³rzêdn¹ y punktu D: ");
	scanf("%f",&dy);
	printf("\nA(%.2f;%.2f)",ax,ay);
	printf("\nB(%.2f;%.2f)",bx,by);
	printf("\nC(%.2f;%.2f)",cx,cy);
	printf("\nD(%.2f;%.2f)",dx,dy);
	
	
	printf("\n\nWspó³rzêdne wektora AB wynosz¹ = [%.2f,%.2f]",bx-ax,by-ay);
	printf("\n\nWspó³rzêdne wektora CD wynosz¹ = [%.2f,%.2f]",dx-cx,dy-cy);
	
	a = ax*ax + ay*ay;
	b = bx*bx + by*by;
	c = cx*cx + cy*cy;
	d = dx*dx + dy*dy;
	dv1 = sqrt(a+b);
	dv2 = sqrt(c+d);
	printf("\n\ndv1 = %.3f",dv1);
	printf("\n\ndv2 = %.3f",dv2);
	
	
	//cos_alfa = (a * c + b * d) / (dv1 * dv2);
	cos_alfa = dv2 / dv1;
	printf("\n\ncos_alfa = %.3f",cos_alfa);
	
	
	cos_alfa2 = cos_alfa*cos_alfa;
	sin_alfa = sqrt(1-cos_alfa2);
	printf("\n\nsin_alfa = %.3f",sin_alfa);
	
	
	tan_alfa = sin_alfa/cos_alfa;
	printf("\n\ntan_alfa = %.3f",tan_alfa);
	
	
	alfax = atan(tan_alfa);
	printf("\n\nalfa_x = %.3f",alfax);
	
	
	alfas = alfax * 180 / PI;
	printf("\n\nK¹t miêdzy wektorami AB oraz CD wynosi: %.1f stopni\n\n",alfas);
	
	return 0;
}
