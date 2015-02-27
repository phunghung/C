#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, d, max;
	printf("\n nhap a: "); scanf("%d", &a);
	printf("\n nhap b: "); scanf("%d", &b);
	printf("\n nhap c: "); scanf("%d", &c);
	printf("\n nhap d: "); scanf("%d", &d);
	max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	if(d>max) max=d;
	printf(" so lon nhat la: %d", max);
}
