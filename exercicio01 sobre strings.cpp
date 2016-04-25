#include<iostream.h>
#include<conio.h>
#include<string.h>
/**/
void main()
	{

	char s1[10], s2[10], s3[10], s4[10];
	cout<<"\nDigite uma palavra para s1:\t";
	gets(s1);
	cout<<"\nDigite uma palavra para s2:\t";
	gets(s2);
	cout<<"\nDigite uma palavra para s3:\t";
	gets(s3);
	cout<<"\nDigite uma palavra para s4:\t";
	gets(s4);

	strcat(s1, " ");
	strcat(s2, " ");
	strcat(s3, " ");
	strcat(s4, " ");

	cout<<"\n\n\t"<<s1<<s2<<s3<<s4;
	getch();
	}
