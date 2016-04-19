#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int idade;
	char sexo;
	float peso, altura;

	cout<<"Digite sua idade:";
	cin>>idade;
	cout<<"\nDigite seu sexo:";
	cin>>sexo;
	cout<<"\nDigite seu peso e sua altura:";
	cin>>peso>>altura;
	system("cls");
	cout<<"Seus dados pessoais são:\n\n";
	cout<<"idade:"<<idade<<"\nsexo:"<<sexo;
	cout<<"\nPeso:"<<peso<<"\nAltura:"<<altura;
getch();


}
