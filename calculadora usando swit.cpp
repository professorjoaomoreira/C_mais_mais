#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	float n1, n2;
	int op;

	cout<<"\nDigite dois numeros\t";
	cin>>n1>>n2;
	cout<<"\nDigite 1 para soma\nDigite2 para subtraçao\nDigite 3 para divisao\nDigite 4 para multiplicacao";
	cout<<"\n\n\tOpcao:";
	cin>>op;

	switch(op)
	{
	 case 1:
		cout<<"\nA soma e:"<<n1+n2;
	 break;
	 case 2:
		cout<<"\nA subtracao e:"<<n1-n2;
	 break;
	 case 3:
		if (n2==0)
		   cout<<"\nImpossivel dividir por zero!!";
		else
		   cout<<"\nA soma e:"<<n1/n2;
		   break;
	 case 4:
		cout<<"\nA soma e:"<<n1*n2;
	 break;
	 defaut:
	 cout<<"\nOpcao invalida!!!";
	 }
	 getch();
}
