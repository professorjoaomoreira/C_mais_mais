#include<iostream.h>
#include<conio.h>

void main()
 {
	float fah, cel;

	cout<<"\nDigite o valor em graus fahrenheit";
	cin>>fah;
	cel=(((fah-32)*5)/9);
	cout<<"A conversao em graus celsius eh"<<cel;
	getch();
 }
