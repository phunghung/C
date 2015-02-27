#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j;
	i=0; j=10;
	while(i<10 && j>4)
	{
		printf("\ni=%1d \nj=%1d\n", i, j);
		i++;
		j -= 1;
	}
}
