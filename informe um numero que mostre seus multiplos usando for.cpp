#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exercício 2 – Faça um programa onde o usuário informe um número e mostre os múltiplos desse número de zero até 100.*/

void main ()
{
int i, j;


	cout<<"\nDigite o um valor para realizar o calculo dos seus multiplos\t";
	cin>>j;
	system("cls");

	for(i=j;i<=100;i+=j)


	cout<<i<<'\t';
	getch();
}

