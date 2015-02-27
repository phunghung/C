#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("nhap a: "); scanf("%d", &a);
	printf("nhap b: "); scanf("%d", &b);
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else b=b-a;
	}
		printf("USCLN cua 2 so la %d \n", a);
}
