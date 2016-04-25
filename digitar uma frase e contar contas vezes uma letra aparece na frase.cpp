#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

/*Faça um programa onde o usuário digite uma frase e uma letra,
o programa deverá informar quantas vezes a letra aparece na frase.*/

void main()
	{
	char x[100], y;
	int cont=0;
	system("cls");
	cout<<"\nDigite uma frase:\t";
	gets(x);
	cout<<"\nDigite uma letra:\t\t";
	cin>>y;
	for(int i;i<20;i++)
	{
	if(x[i]==y)
	cont++;
	}
	cout<<"\n\tA letra\t" <<y<<"\t aparece\t"<<cont<<"\tvezes na frase\t"<<x;
	getch();
	}

