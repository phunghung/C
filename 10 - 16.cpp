#include<iostream.h>
#include<conio.h>
int n;
void DK(int m)
	{
		switch(m%16)
			{
				case 1: 	cout<<1;break;
				case 2: 	cout<<2;break;
				case 3: 	cout<<3;break;
				case 4: 	cout<<4;break;
				case 5: 	cout<<5;break;
				case 6: 	cout<<6;break;
				case 7: 	cout<<7;break;
				case 8: 	cout<<8;break;
				case 9: 	cout<<9;break;
				case 10:	cout<<"A";break;
				case 11:        cout<<"B";break;
				case 12:        cout<<"C";break;
				case 13:        cout<<"D";break;
				case 14:        cout<<"E";break;
				case 15:        cout<<"F";break;
			}
	}
void convert(int n)
	{
		if (n>0)
			{
				convert(n/16);
				DK(n);
			}
	}
void main()
	{
		clrscr();
		cout<<"This Program will change Dec to HexaDec\n";
		cout<<"Press Dec Num: ";
		cin>>n;
		cout<<"This is your result: ";
		convert(n);
		getch();
	}
