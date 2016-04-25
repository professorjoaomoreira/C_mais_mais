#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<string.h>

char s[10], login[10];
void cadacesso();
void main()
{
	int op;
	char r[3], rc[3];
	do
	{
		system("cls");
		cout<<"Eh seu primeiro acesso:";
		gets(rc);
		strupr(rc);
		if(strcmp(rc,"SIM")==0)
		cadacesso();
		//acesso();
		system("cls");
		cout<<"\t*****MENU PRINCIPAL*****\n\n";
		cout<<"(1)Saltodo\n(2)Saque\n(3)Deposito\n\n";
		cout<<"opcao -> ";
		cin>>op;
		switch(op)
		{
			case 1:
			//saldo();
			break;
			case 2:
			//saque();
			break;
			case 3:
			//deposito();
			break;
			default:
			cout<<"\n\nOpcao INVALIDA!!!";
		}
		cout<<"\n\nDeseja repetir";
		cin>>r;
		strupr(r);
		}while(strcmp(r,"SIM")==0);
		}
		void cadacesso()
		{
		char cs[10], clogin[10];
		do
		{
		system("cls");
		cout<<"Digite seu login:";
		gets(login);
		cout<<"\n\nConfirme seu login:";
		gets(clogin);
		}while(strcmp(login,clogin))!=0);
		do
		{
			system("cls");
			cout<<"Digite sua senha com pelo menos 8 caracteres:";
			gets(s);
		}while(strlem(s)<8);
			cout<<"\nConfirme sua senha:"
		gets(cs);
		while(strcmp(s,cs)!=0)
		{
			do
			{
				system("cls")
				cout<<"Digite sua senha com pelo menos 8 caracteres:";
				gets(s);
			}while(strlen(s)<8);
		cout<<"\nconfirme sua senha:";
		gets(cs);
		}










		}
	}
}


