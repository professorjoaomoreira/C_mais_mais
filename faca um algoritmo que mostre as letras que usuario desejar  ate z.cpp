#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exerc�cio 4 � Fa�a um programa que mostre as letras do alfabeto a partir de uma letra digitada pelo usu�rio.*/

void main ()
{

char i,x;


	cout<<"\nDigite uma letra para completar ate a letra z:\t";
	cin>>x;
	system("cls");

	for(i=x;i<='z';i++)


	cout<<i<<'\t';
	getch();
}

