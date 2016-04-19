#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()

	{
		int n1,n2;

		cout<<"\nDigite o primeiro valor\t";
		cin>>n1;

		cout<<"\nDigite o segundo valor\n";
		cin>>n2;

		system("cls");

		cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
		cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
		cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
		cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
		cout<<n1<<"%"<<n2<<"="<<n1%n2<<endl;

		getch();
	}
