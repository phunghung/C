#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int SquareCal(int x);
	for(i=1; i<=15; i++)
	printf("\n Square of %d is %d ", i, SquareCal(i));
}
int SquareCal(int x)
{
	int sq;
	sq = x*x;
	return (sq);
}
