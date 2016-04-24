#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
int i,j;

for (j = 1; j <= 10; j++) {

system("cls");
	cout<<"*******tabuada do*******"<<j;
	for (i = 1; i <= 10; i++)
	cout<<"\n\t"<<j<<" x "<<i<< " =" <<j*i;
	getch();

	}
}
