#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, s;
	printf("nhap so n: "); scanf("%d", &n);
	printf("so vua nhap la %d\n", n);
	for(i=1; i<=n; i++)
	{
	
		if(i %2 !=0) continue;
		printf("%2d", i);
    }
}
