#include <iostream.h>
#include <math.h>
#include <conio.h>
void convert(int a)
	{
		if (a>0)
			{
				convert (a/2);
				cout<<a%2;
			}
	}
void main ()
	{
		clrscr();
		int b;
		cout<<"Chuyen so thap phan sang nhi phan"<<"\nNhap so thap phan: ";
		cin>>b;
		cout<<"\nKet qua: ";
		convert(b);
		getch();
	}
