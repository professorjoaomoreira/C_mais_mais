#include<iostream.h>
#include<conio.h>
#include<dos.h>


/*Exerc�cio 4 � Fa�a um programa onde o usu�rio entre com 3 valores inteiros que ser�o armazenados nas vari�veis x, y, z
respectivamente, e o programa dever� ordenar esses valores de modo que o menor valor esteja em x, o valor
intermedi�rio em y e o maior valor em z.*/

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
