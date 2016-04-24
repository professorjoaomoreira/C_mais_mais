#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	float f, c, k, con, a;
	int x;

	cout<<"\nDigite 1 para converter Kelvin para fahrenheit\nDigite 2 para converter Celsius para fahrenheit \nDigite 3 para converter Celsius para kelvin\nDigite 4 para converter Kelvin, para Celsius\nDigite 5 para converter Fahrenheit, para kelvin \nDigite 6 para converter Kelvin para fahrenheit";
	cout<<"\n\n\tOpcao:\t";
	cin>>x;
		switch(x)
		{

		case 1:
			 if (x==1){
			 cout<<"\nDigite o valor em celsius\t";
			 cin>>c;
			 con = ((c/5)*9)+32;
			 cout<<"\nO valor convertido de celsius para fahrenheit eh\t"<<con;
			 }
			 break;
		case 2:
			 if (x==2){
			 cout<<"\nDigite o valor em fahreinheit\t";
			 cin>>f;
			 con = (f - 32) * 5 / 9;
			 cout<<"\nA conversao de celsius para Fahrenheit eh de\t"<<con;
			 }
			 break;
		case 3:
			 if (x==3){
			 cout<<"\nDigite o valor em fahreinheit\t";
			 cin>>f;
			 con = (f - 32) * 5 / 9;
			 cout<<"\nA conversao de celsius para Fahrenheit eh de\t"<<con;
			 }
			 break;


			 break;
			 defaut:
			 }
			 cout<<"\nOpcao invalida!!!Digite um valor entre 1 e 4\t";
             getch();
			 }





