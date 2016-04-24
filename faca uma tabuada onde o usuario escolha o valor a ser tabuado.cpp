#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exercício 5 – Faça um programa onde o usuário informe o número da tabuada que será mostrada.*/

void main ()
{

int i,x;


	cout<<"\nDigite um valor para construir uma tabuada:\t";
	cin>>x;
	system("cls");



	for(i=1;i<=10;i++)


	cout<<x<<"x" <<i<< "=" <<i*x<<'\n';



	getch();
}

