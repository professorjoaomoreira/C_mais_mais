#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>

/*Exerc�cio 2 � Fa�a um programa onde o usu�rio informe um n�mero e mostre os m�ltiplos desse n�mero de zero at� 100.*/

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

