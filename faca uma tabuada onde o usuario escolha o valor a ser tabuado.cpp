#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exerc�cio 5 � Fa�a um programa onde o usu�rio informe o n�mero da tabuada que ser� mostrada.*/

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

