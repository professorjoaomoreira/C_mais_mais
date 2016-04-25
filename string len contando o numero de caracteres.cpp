#include<iostream.h>
#include<conio.h>
#include<string.h>
/**/
void main()
	{
	int x;
	char s[50];

	cout<<"\nDigite uma frase:\t";
	gets(s);
	x=strlen(s);
	cout<<"\n\nA frase tem "<<x<<" caracteres:\t";
	getch();
	}
