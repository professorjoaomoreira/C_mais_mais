#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<conio.h>

/*Fa�a um algoritmo onde o usu�rio cadastre 50 n�meros inteiros num vetor e o programa realoque os valores em ordem crescente*/

void main()
{
 int x[10], pma, pme,ma,me;
 cout<<"\nDigite 10 numeros inteiros:";
 for(int i=0;i<10;i++)
 {
 cin>>x[i];
 pma=i;
 pme=i;
 ma=x[i];
 me=x[i];
 }
 for(int i=0;i<9;i++)
 {
 if(x[i]>x[i+i])
 {
 if(x[i]>ma)
 {
 pma=i;
 ma=x[i];
 }
 }
 if(x[i]>x[i+1])
 {
 if(x[i]<me)
 {
 pme=i;
 me=x[i];
 }
 }
 }
 cout<<"\n\nO maior valor eh:"<<ma;
 cout<<"\n\nA posicao do maior valor eh:"<<pma;
 cout<<"\n\nO menor valor eh:"<<me;
 cout<<"\n\nA posicao do menor valor eh:"<<pme;

 getch();
 }
