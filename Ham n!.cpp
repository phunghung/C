#include<stdio.h>
#include<conio.h>
int giaithua(int x)
{
	int i, a=1;
	for(i=1; i<=x; i++)
	a*=i;
	return a;
}
int main()
{
	int n, kq;
	printf(" nhap n: "); scanf("%d", &n);
	kq = giaithua(n);
	printf("%d! = %d", n, kq);
}
