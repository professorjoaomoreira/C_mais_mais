#include<iostream.h>
#include<conio.h>
#include<string.h>
/**/
void main()
	{

	char s[10], x[10];
	cout<<"\nDigite uma palavra:\t";
	gets(s);
	cout<<"\nDigite outra palavra:\t";
	gets(x);
	if (strcmp (s,x)==0)
		cout<<"\n\nAs palavras sao iguais!!!";
	else
		cout<<"\n\nAs palavras sao diferentes";
	getch();
	}
