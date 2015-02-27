#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, s;
	printf("nhap so tu nhien n: "); scanf("%d", &n);
	i=0; s=0;
	for(i=0; i<=n; i++)
	s += i;
	printf("tong cua %d so tu nhien dau tien la: %d", n, s);
}
