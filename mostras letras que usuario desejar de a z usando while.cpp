#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

/*Exerc�cio 6 � Fa�a um programa utilizando la�o while que mostre as letras do alfabeto a partir de uma letra digitada pelo usu�rio..*/

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
