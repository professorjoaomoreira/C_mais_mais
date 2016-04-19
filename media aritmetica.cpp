#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()

{
	int n1,n2,n3,n4;
	float media;

	cout<<"\nDigite a nota1\n";
	cin>>n1;
	cout<<"\nDigite a nota2\n";
	cin>>n2;
	cout<<"\nDigite a nota3\n";
	cin>>n3;
	cout<<"\nDigite a nota4\n";
	cin>>n4;


	media = ((n1+n2+n3+n4)/4);
	cout<<"A media final eh\t"<<media;
	getch();

}
