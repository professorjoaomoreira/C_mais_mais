#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
/*Exerc�cio 7 � Fa�a um programa, em que o usu�rio escolha a tabuada que deseja visualizar. O usu�rio poder� repetir o processo quantas vezes quiser. (utilize o comando do while).*/
void main()
{

int i,j;
char r;
	do
	{
	cout<<"\nDigite um numero para fazer uma tabuada:\t";
	cin>>j;
	for(i=1;i<=10;i++)
	cout<<j <<" X " <<i<<" = "<<i*j<<endl;
	cout<<"\n\nDigite S para repetir:";
	cin>>r;
	system("cls");
	}while(r=='s'|r=='S');
getch();
	}




