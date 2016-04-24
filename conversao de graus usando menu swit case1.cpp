#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	float f, c, k, con, val;
	int x;

	cout<<"\nDigite 1 para converter Celsius para fahrenheit\nDigite 2 para converter Celsius para fahrenheit \nDigite 3 para converter Celsius para kelvin\nDigite 4 para converter Kelvin, para Celsius\nDigite 5 para converter Fahrenheit, para kelvin \nDigite 6 para converter Kelvin para fahrenheit";
	cout<<"\n\n\tOpcao:\t";
	cin>>x;
		switch(x)
		{

		case 1:
			 cout<<"\nDigite o valor em celsius\t";
			 cin>>c;
			 con = (c*1.8)+32;
			 cout<<"\nO valor convertido de celsius para fahrenheit eh\t"<<con;
			 break;
		case 2:
			 cout<<"\nDigite o valor em fahreinheit\t";
			 cin>>f;
			 con = (f-32)/1.8;
			 cout<<"\nA conversao de celsius para Fahrenheit eh de\t"<<con;
			 break;
		case 3:
			 cout<<"\nDigite o valor em celsius\t";
			 cin>>c;
			 con = c+273;
			 cout<<"\nA conversao de celsius para kelvin eh de\t"<<con;
			 break;
		case 4:
			 cout<<"\nDigite o valor em kelvin\t";
			 cin>>k;
			 con = k-273;
			 cout<<"\nA conversao de kelvin para celsius eh de\t"<<con;
			 break;
		case 5:
			 cout<<"\nDigite o valor em kelvin\t";
			 cin>>k;
			 con = ((k-32)/1.8)+273;
			 cout<<"\nA conversao de kelvin para fahrenheit\t"<<con;
			 break;
		case 6:
			 cout<<"\nDigite o valor em fahrenheit\t";
			 cin>>f;
			 con = ((f-273)*1.8)+32;
			 cout<<"\nA conversao de fahrenheit para kelvin eh \t"<<con;
			 break;

			 default:
			 cout<<"\nOpcao invalida!!!Digite um valor entre 1 e 6\t";
		}
		getch();
		}








