#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

/*Fa�a um programa onde o usu�rio possa jogar par ou �mpar com o computador quantas vezes quiser*/

void main()
	{
	char x[100], resp[3];
	do
	{
		int j,cont=0,i=0;
	system("cls");
	cout<<"\nDigite uma palavra:\t";
	gets(x);
	j=strlen(x)-1;
	for(;j>=0;j--)
	{
	if(x[i]==x[i])
	cont++;
	i++;
	}
	if(strlen(x)==cont)
	cout<<"\n\nA palavra e um Palindromo";
	else
	cout<<"\n\nA palavra nao e um palindromo";
	sleep(2);
	cout<<"\n\nDeseja testar outra palavra?:";
	gets(resp);
	}
	while(strcmp(resp, "sim")==0 ||strcmp(resp, "SIM")==0);
	}


	/*
	A palavra "pal�ndromo" vem das palavras gregas palin ("para tr�s") e dromos ("corrida, pista") - que corre em sentido inverso.

R�mulo Marinho, veterano palindromista brasileiro, prop�e classificar os pal�ndromos em:
Expliciti - trazem sempre uma mensagem direta, clara e intelig�vel, como "Socorram-me, subi no �nibus em Marrocos� (pal�ndromo de autoria an�nima, provavelmente o mais conhecido em l�ngua portuguesa).
Interpretabiles - t�m coer�ncia, mas requerem esfor�o intelectual do leitor para serem entendidos, como "A Rita, sobre vov�, verbos atira."
Insensati - cuidam apenas de juntar letras ou palavras sem se preocupar com o sentido, como "Ol�! Maracuj�, caju, caramelo."

As frases formando um pal�ndromo tamb�m s�o chamadas de anac�clicas, do grego anak�klein, significando que volta em sentido inverso, que refaz inversamente o ciclo.

Escrever literatura em pal�ndromos � um exemplo de escrita constrangida
SATOR
AREPO
TENET
OPERA
ROTAS

*/

