#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
/*Exercício 8 – Faça um programa, utilizando laço while, em que o usuário entre com um número e o programa mostre a respectiva sequência Fibonacci. (1, 1, 2, 3, 5, 8, 13,21…)*/
void main()
{
char i;
	do
	{
	int proximo = 0;
	int anterior = 0, atual = 1;
	int limite = 0;
	cout<<"\nQuantos numeros fibonacci deseja gerar?:\t";
	cin>>limite;
	cout<<atual<<'\t';
	for(int n=1;n<limite;n++)
	{
	proximo = (anterior+atual);
	cout<<proximo<<'\t';
	anterior=atual;
	atual=proximo;
	}
	cout<<"\n\nPressione S para repetir:";
	cin>>i;
	system("cls");
	}while(i=='s'|i=='S');
	}






