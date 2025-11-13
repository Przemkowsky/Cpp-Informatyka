#include <iostream>
#include <stdio.h>


int main(int argc, char** argv) 
{
	system("chcp 1250");
	system("cls");
	float japka,gruszki,cenajap,cenagru;
	printf("Podaj wagê jab³ek w gramach: \n");
	scanf("\n%f",&japka);
	printf("\nPodaj wagê gruszek w tonach: \n");
	scanf("\n%f",&gruszki);
	
	japka = japka / 1000;
	gruszki = gruszki * 1000;
	
	printf("\nPodaj cenê jab³ek w kilogramach: \n");
	scanf("%f",&cenajap);
	printf("\nPodaj cenê gruszek w kilogramach: \n");
	scanf("%f",&cenagru);
	
	printf("\nWartoœæ jab³ek  =\t%.2f kg *%.2f z³\t=\t%.2f z³",japka,cenajap,japka*cenajap);
	printf("\nWartoœæ gruszek =\t%.2f kg *%.2f z³\t=\t%.2f z³",gruszki,cenagru,gruszki*cenagru);
	printf("\n\t\t\t\tSuma\t\t=\t%.2f z³\n",japka*cenajap+gruszki*cenagru);
	
	system("pause");
	
	return 0;
}
