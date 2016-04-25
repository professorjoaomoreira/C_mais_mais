#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<conio.h>

/*Quais serão os valores dos elementos do vetor x que serão impressos no final da execução do trecho de programa a baixo*/

void main()
{
 int i,x[5];
 for(i=0;i<5;i++)
 x[i]=2;
 for(i=0;i<5;i++)
 x[i]=x[i]*i;
 for(i=0;i<5;i++)
 cout<<x[i]<<" ";
 getch();
 }

