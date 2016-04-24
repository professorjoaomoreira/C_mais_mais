#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	float h, pi, r, area;
	int a, b, b1, b2, d1, d2, c, d;
	int x;
	cout<<"\nDigite 1 para triangulo\nDigite 2 para trapezio\nDigite 3 para circulo\nDigite 4 para losango";
	cout<<"\n\n\tOpcao:\t";
	cin>>x;
	system("cls");
		switch(x)
		{
		case 1:
			 if (x==1){
			 cout<<"\nDigite o valor da base do triangulo\t";
			 cin>>b;
			 cout<<"\nDigite o valor da altura do triangulo\t";
			 cin>>h;
			 a=((b*h)/2);
			 cout<<"\nO valor da area do triangulo eh\t"<<a;
			 break;
		case 2:
			 if (x==2){
			 cout<<"\nDigite o valor da base1\t";
			 cin>>b1;
			 cout<<"\nDigite o valor da base2\t";
			 cin>>b2;
			 cout<<"\nDigite o valor da altura\t";
			 cin>>h;

			 a=((b1+b2)*h)/2;
			 cout<<"\nO valor da area do trapezio eh\t"<<a;

			 }
			 break;
		case 3:
			 if (x==3){
			 cout<<"\nDigite o valor do raio\t";
			 cin>>r;

			 a= M_PI*pow(r,2);
			 cout<<"\nO valor da area do circulo eh\t"<<a;

			 }
			 break;
		case 4:
			 if (x==4)
			 {
			 cout<<"\nDigite o valor do d1\t";
			 cin>>d1;
			 cout<<"\nDigite o valor do d2\t";
			 cin>>d2;

			 a = (d1*d2)/2;
			 cout<<"\nO valor da area do losango eh\t"<<a;


			 break;
			 default:

			 cout<<"\nOpcao invalida!!!Digite um valor entre 1 e 4\t";

			 }
			 }
			 }
			 getch();
		}






