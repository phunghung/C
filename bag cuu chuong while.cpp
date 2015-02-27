#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i=1;
	printf("nhap so n: "); scanf("%d", &n);
	while(i<=10)
	{
		printf("\n%d x %d = %d", n, i, n*i);
		i++;
	}
}
