#include<iostream.h>
#include<conio.h>

	void main()
	{

	float fah, cel;

		cout<<"\Digite o valor em fahrenheit:\n";
		cin>>fah;

		cel = (((fah-32)*5)/4);

		cout<<"O valor da conversao para graus celsius eh\n"<<cel;
		getch();
	}
