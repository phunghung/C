#include<stdio.h>
#include<conio.h>
main()
{
	int n, reverse = 0;
	printf("nhap vao 1 so tu nhien: \n"); scanf("%d", &n);
	while(n!=0)
	{
		reverse = reverse*10;
		reverse = reverse + n%10;
		n = n/10;
	}
	printf("dao so vua nhap la: %d", reverse);
}
