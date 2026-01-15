#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
int macierz[3][3]; // deklaracja tablicy
// wczytywanie macierzy
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<3;j++)
 {
 cout << "podaj element macierzy a"<<"[" <<i<<"][" << j<<"]=";
 cin>> macierz[i][j];
 }
 }
cout << "\n"; // nowy wiersz
 for(int ii=0;ii<3;ii++)
 {
 for(int ji=0;ji<3;ji++)
 {
 cout << macierz[ii][ji]<<"\t";
 }
 cout << "\n";
 }
int max=macierz[0][0]; // nadanie wartoœci pocz¹tkowej elementowi maksymalnemu "max" - 
//tutaj pierwsza wartoœæ w tablicy
int min=macierz[0][0]; // nadanie wartoœci pocz¹tkowej elementowi minimalnemu "min"-
//tutaj równie¿ pierwsza wartoœæ w tablicy
int minx=0; // zerowanie wartoœci pocz¹tkowej dla indeksów koñcowych tabeli dla max i min
int miny=0;
int maxx=0;
int maxy=0;
 for(int z=0;z<3;z++)
 {
 for(int x=0;x<3;x++)
 {
 if (macierz[z][x]<min) // szukam punktu o min wartoœci
 {
 min=macierz[z][x]; // tu podstawiam znalezion¹ wartoœæ punktu min
 minx=z; //wstawiam jego wspó³rzêdne do koñcowej wartoœci min 
 miny=x;
 }
 if (macierz[z][x]>max) // szukam punktu o max wartoœci
 {
 max=macierz[z][x];
 maxx=z;
 maxy=x;
 }
 }
 }
 cout << "max: a["<<maxx<< "][" <<maxy <<"]= "<< max 
 << "\nmin: a["<<minx << "]["<< miny <<"]= " << min;
 cout<<"\n"; 
 system("PAUSE");
 return EXIT_SUCCESS;
}
