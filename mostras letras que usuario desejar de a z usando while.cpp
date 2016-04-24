#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

/*Exercício 6 – Faça um programa utilizando laço while que mostre as letras do alfabeto a partir de uma letra digitada pelo usuário..*/

void main()
{

char x;
	cout<<"\nDigite uma letra para completar ate a letra z:\t";
	cin>>x;
	while(x<='z')
	{
	cout<<x<<'\t';
	x++;
	}
	getch();
}
