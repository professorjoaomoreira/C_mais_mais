#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<conio.h>

/*Quais ser�o os valores dos elementos do vetor x que ser�o impressos no final da execu��o do trecho de programa a baixo*/

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

