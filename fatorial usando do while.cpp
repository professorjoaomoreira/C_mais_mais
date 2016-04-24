#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	float p, a, imc;
	char r;
	do
	{
		system("cls");
		cout<<"\nDigite seu peso e sua altura\t";
		cin>>p>>a;

imc = p/pow(a,2);

cout<<"\n\nSeu imc eh:\t"<<imc;
cout<<"\nDigite s para repetir a verificacao do imc\t";
cin>>r;
}
while(r=='s'|r=='S');

	getch();
}

