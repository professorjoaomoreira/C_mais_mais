#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
	char x;

	cout<<"\nDigite uma letra\t";
	cin>>x;
	if(x=='a'|x=='e'|x=='i'|x=='o'|x=='u')
		cout<<"\nVoce digitou uma vogal!!!";

	else
		cout<<"\nVoce digitou uma consoante";
	getch();
	}
