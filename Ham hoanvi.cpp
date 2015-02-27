#include<stdio.h>
#include<conio.h>
int hoanvi(int &x, int &y)
{
	int tam;
	tam = x;
	x=y;
	y=tam;
}
int main()
{
	int a, b;
	printf("nhap a: "); scanf("%d", &a);
	printf("\nnhap b: "); scanf("%d", &b);
	printf(" truoc khi hoan vi: a = %d, b = %d", a, b);
	hoanvi(a,b);
	printf("\n sau khi hoan vi: a = %d, b = %d", a, b);
}

