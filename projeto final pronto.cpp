#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
char s[10],login[10];
float sa=1000,sq,de,li=1000;

void cadacesso();
int acesso();
void saldo();
void saque();
void deposito();

void main()
{
	int op;
	char r[3],rc[3];
	system("cls");
	cout<<"E seu primeiro acesso? ";
	gets(rc);
	strupr(rc);
	if(strcmp(rc,"SIM")==0)
		cadacesso();
	if(acesso()<=3)
	{
		do
		{
		system("cls");
		cout<<"\t*****MENU PRINCIPAL*****\n\n";
		cout<<"(1)Saldo\n(2)Saque\n(3)Deposito\n\n";
		cout<<"Opcao -> ";
		cin>>op;
		switch(op)
		{
			case 1:
				saldo();
				break;
			case 2:
				saque();
				break;
			case 3:
				deposito();
				break;
			default:
				cout<<"\n\nOpcão INVALIDA !!!";
		}
		cout<<"\n\nDeseja repetir? ";
		cin>>r;
		strupr(r);
		}while(strcmp(r,"SIM")==0);
	}
}
void cadacesso()
{
	char cs[10],clogin[10];
	do
	{
		system("cls");
		cout<<"Digite seu login: ";
		gets(login);
		cout<<"\n\nConfirme seu login: ";
		gets(clogin);
	}while(strcmp(login,clogin)!=0);
	do
	{
		system("cls");
		cout<<"Digite sua senha com pelo menos 8 caracteres: ";
		gets(s);
	}while(strlen(s)<8);
	cout<<"\nConfirme sua senha: ";
	gets(cs);
	while(strcmp(s,cs)!=0)
	{
		do
		{
			system("cls");
			cout<<"Digite sua senha com pelo menos 8 caracteres: ";
			gets(s);
		}while(strlen(s)<8);
		cout<<"\nConfirme sua senha: ";
		gets(cs);
	}
}
int acesso()
{
	int x=1;
	char vs[10], vlogin[10];
	if(strlen(s)<8)
		x=4;
	for(;x<=3;x++)
	{
		system("cls");
		cout<<"\t***** VERICACAO DE USUARIO *****";
		cout<<"\n\nDigite seu login: ";
		gets(vlogin);
		cout<<"\n\nDigite sua senha: ";
		gets(vs);
		if(strcmp(vs,s)==0 & strcmp(vlogin,login)==0)
			break;
		else
			cout<<"\n\nSenha ou Login INVALIDOS!!!";
	}
	return x;
}
void saldo()
{
	system("cls");
	cout<<"Seu saldo atual e: "<<"R$"<<sa;
	cout<<"\n\nSeu limite e: "<<"R$"<<li;
	cout<<"\n\nVoce tem disponivel para movimentacao: "<<"R$"<<sa+li<<endl;
	system("pause");
}
void saque()
{
	system("cls");
	cout<<"Digite o valor da retirada: "<<"R$";
	cin>>sq;
	if(sq>sa+li)
	{
		cout<<"\n\nSaldo Insuficiente!!!";
		sleep(2);
	}
	else
		sa-=sq;
	saldo();
}
void deposito()
{
	system("cls");
	cout<<"Digite o valor do deposito: "<<"R$";
	cin>>de;
	sa+=de;
	saldo();
}
