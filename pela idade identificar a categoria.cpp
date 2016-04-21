#include<iostream.h>
#include<conio.h>
#include<dos.h>

/*Exercício 6 – Faça um programa onde o usuário digite a idade de um jogador de futebol e o programa
mostre sua categoria de acordo com as seguintes condições:
Se a idade for inferior a 5 anos -> idade invalida
Se a idade for maior ou igual a 5 e menor ou igual a 7 -> infantil A
Se a idade for maior que 7 e menor ou igual a 10 -> infantil B
Se a idade for maior que 10 e menor ou igual a 13 -> juvenil A
Se a idade for maior que 13 e menor ou igual a 17 -> juvenil B
Se a idade for maior ou igual a 18 -> adulto
*/

void main()
{
	string a, b, c, d, e, f;
	int idade;


	cout<<"\nDigite sua idade\t";
	cin>>idade;

	if (idade<5)
		cout<<"Idade invalida!!";
	else
	{
		if (idade>=5 && idade<=7)
			cout<<"Sua categoria eh INFANTIL A!!";
	else {
		if (idade>7 && idade<=10)
			cout<<"Sua categoria eh INFANTIL B!!";
	else {
/*Se a idade for maior que 10 e menor ou igual a 13 -> juvenil A
Se a idade for maior que 13 e menor ou igual a 17 -> juvenil B
Se a idade for maior ou igual a 18 -> adulto*/

	   if (idade>10 && idade <=13)
			cout<<"Sua categoria eh JUVENIL A!!";
	else {
	   if (idade>13 && idade<=17)
			cout<<"Sua categoria eh JUVENIL B!!";
	else {
			cout<<"Sua categoria eh ADULTO!!";
	}
	}
	}
	}
	}
	getch();
	}
