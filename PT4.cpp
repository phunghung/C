#include<iostream.h>   //giai pt bac 4 ax4+bx2+c=0
#include<conio.h>
#include<math.h>
int a,b,c;
float t,delta,t1,t2;
void nhap(int &n)
{
	cout<<"Nhap gia tri: ";
	cin>>n;
}

void main()
{
	clrscr();
	nhap(a);
	nhap(b);
	nhap(c);
	if (a,b,c ==0)
		cout<<"Pt co vo so nghiem";
	else if (a==0)
	{
		if (b==0)
			cout<<"Pt vo nghiem";
		else
		{
			t=-c/b;
			if (-c/b<0)
				cout<<"Pt vo nghiem";
			else 	cout<<"Pt co nghiem: x= "<<t<<" va x= -"<<t;
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if (delta>0)
		{
			t1=(b-sqrt(delta))/(2*a);
			t2=(b+sqrt(delta))/(2*a);
			cout<<"Phuong trinh co 4 nghiem la: \n";
			cout<<"x= "<<sqrt(t1)<<endl;
			cout<<"x= -"<<sqrt(t1)<<endl;
			cout<<"x= "<<sqrt(t2)<<endl;
			cout<<"x= -"<<sqrt(t2);
		}
		else if (delta==0)
		{
			t=-b/2*a;
			cout<<"Pt co 2 nghiem la: \n";
			cout<<"x= "<<sqrt(t)<<endl;
			cout<<"x= -"<<sqrt(t);
		}
		else	cout<<"Pt vo nghiem";
	}
	getch();
}
