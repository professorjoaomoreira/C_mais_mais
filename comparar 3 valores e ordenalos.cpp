#include<iostream.h>
#include<conio.h>
#include<dos.h>


/*Exercício 4 – Faça um programa onde o usuário entre com 3 valores inteiros que serão armazenados nas variáveis x, y, z
respectivamente, e o programa deverá ordenar esses valores de modo que o menor valor esteja em x, o valor
intermediário em y e o maior valor em z.*/

void main()
{
	int x,y,z,troca;

	cout<<"\nDigite os valores para x,y,z\t";
	cin>>x>>y>>z;

	if (x>y)
		{
		troca=y;
		y=x;
		x=troca;
		}
	if (y>z)
		{
		troca=z;
		z=y;
		y=troca;
		}
	if (x>y)
		{
		troca=y;
		y=x;
		x=troca;
		}
	cout<<"\nx="<<x<<"\ny="<<y<<"\nz="<<z;
		getch();
		}
