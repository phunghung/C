#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i;
	printf("bang cuu chuong so: "); scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		printf("\n%d x %d = %d",n, i, n*i);
	}
}
