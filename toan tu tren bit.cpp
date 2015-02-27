#include<stdio.h>
#include<conio.h>
int main()
{
	int a=52; // phep 0011 0100
	int b=29; // phep 0001 1101
	int c;
	c = a & b; // phep AND 0001 0100
	printf("%d & %d = %d \n", a, b, c);
}
