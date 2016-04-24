#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exercício 6 – Faça um programa utilizando laço while que mostre as letras do alfabeto a partir de uma letra digitada pelo usuário.*/

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

