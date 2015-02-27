#include<stdio.h>
#include<conio.h>
int tich(int x, int y)
{
	int z;
	z = x*y;
	return z;
}
int main()
{
	int a, b, c;
	printf(" nhap so a: "); scanf("%d", &a);
	printf("\n nhap so b: "); scanf("%d", &b);
	c = tich(a,b);
	printf("\n tich cua: %d x %d = %d", a,b,c);
}
