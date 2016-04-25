#include<iostream.h>
#include<conio.h>
#include<string.h>
/**/
void main()
	{
	char s1[100], s2[100];
	cout<<"\nDigite uma palavra:\t";
	gets(s1);
	cout<<"\nDigite outra palavra:\t";
	gets (s2);
	strcat(s1," ");
	strcat(s1, s2);
	cout<<"\n\n\t"<<s1;
	getch();
	}
