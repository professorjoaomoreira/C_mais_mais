#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
  {
	int n, f=1;

	cout<<"Digite um numero para sabar o fatorial:\t";
	cin>>n;

	for(; n>1; n--)
	f*=n;

	cout<<"O fatorial eh\t"<<f;
	getch();
  }








