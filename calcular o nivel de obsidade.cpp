#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

/*Exerc�cio 7 � Fa�a um Um programa que calcule e mostre o imc do usu�rio
e uma das seguintes informa��es de acordo com o que segue:

Abaixo de 17 -> Muito abaixo do peso
Entre 17 e 18,49 -> Abaixo do peso
Entre 18,5 e 24,99 -> Peso Normal
Entre 25 e 29,99 -> Acima do peso
Entre 30 e 34,99 -> Obesidade I
Entre 35 e 39,99 -> Obesidade II (severa)
Acima 40 -> Obesidade III (m�rbida)
*/

void main()
{
	double altura, peso, imc;


	cout<<"\nDigite sua altura\t";
	cin>>altura;
	cout<<"\nDigite seu peso\t";
	cin>>peso;

	imc=peso/pow(altura,2);

	if (imc<17)
		cout<<"Muito abaixo do peso!!";
	else
	{
		if (imc>=17 && imc<=18,49)
			cout<<"Abaixo do peso";
	else {
		if (imc>18,5 && imc<=24,99)
			cout<<"Peso normal";
	else {
	   if (imc>25 && imc<=29,99)
			cout<<"Acima do peso";
	else {
		if (imc>30 && imc<=34,99)
			cout<<"Obsidade I";
	else {
		if (imc>35 && imc<=39,99)
			cout<<"Obsidade II(Severa)";
	else {
			cout<<"Obesidade III (m�rbida)";
	}
	}
	}
	}
	}
	}
	getch();
	}
