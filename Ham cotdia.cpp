#include<stdio.h>
#include<conio.h>
int hanoi(int n, char c1, char c2, char c3)
{
	if(n==1)
	printf("%c-->%c\n", c1, c3);
	else
	{
	hanoi(n -1, c1, c3, c2);
	hanoi(1, c1, c2, c3);
	hanoi(n-1, c2, c1, c3);
	}
}
int main()
{
	int n;
	printf("nhap n: "); scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}
