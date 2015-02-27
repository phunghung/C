#include<stdio.h>
#include<conio.h>
int UCLN(int a, int b)
{
while(b!=0)
{
     int t=b;
     b=a%b;
     a=t;
}
return a;
}
int main()
{
	int x, y, z;
	printf("nhap x, y: "); scanf("%d %d", &x,&y);
	z = UCLN(x,y);
	printf("UCLN la %d ", z);
}
