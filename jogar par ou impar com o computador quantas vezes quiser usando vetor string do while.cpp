#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>

/*Faça um programa onde o usuário possa jogar par ou ímpar com o computador quantas vezes quiser*/

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
	A palavra "palíndromo" vem das palavras gregas palin ("para trás") e dromos ("corrida, pista") - que corre em sentido inverso.

Rômulo Marinho, veterano palindromista brasileiro, propõe classificar os palíndromos em:
Expliciti - trazem sempre uma mensagem direta, clara e inteligível, como "Socorram-me, subi no ônibus em Marrocos” (palíndromo de autoria anônima, provavelmente o mais conhecido em língua portuguesa).
Interpretabiles - têm coerência, mas requerem esforço intelectual do leitor para serem entendidos, como "A Rita, sobre vovô, verbos atira."
Insensati - cuidam apenas de juntar letras ou palavras sem se preocupar com o sentido, como "Olé! Maracujá, caju, caramelo."

As frases formando um palíndromo também são chamadas de anacíclicas, do grego anakúklein, significando que volta em sentido inverso, que refaz inversamente o ciclo.

Escrever literatura em palíndromos é um exemplo de escrita constrangida
SATOR
AREPO
TENET
OPERA
ROTAS

*/

