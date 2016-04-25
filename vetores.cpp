#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<conio.h>

void imprime(int x[], int y)
{
	for (int i=0; i<y;i++)
		cout<<x[i]<<" ";
}
void main()
{
 int s[10]={1,2,3,4,5,6,7,8,9,10}, j[5]={0,2}, k[2]={1,3};
 cout<<"Digite um numero:";
 cin>>j[4];
 j[2]=69;
 j[3]=51;
 imprime(s,10);
 cout<<"\n\n";
 imprime(j,5);
 cout<<"\n\n";
 imprime(k,2);
 getch();
 }

