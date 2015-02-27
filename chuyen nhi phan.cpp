#include<stdio.h>
#include<conio.h>
main()
{
	int A[10], i, n, m;
	printf("Nhap so can chuyen: "); scanf("%d", &n);
	m=n;
	printf("%d chuyen sang co so 2 la: ",n);
	for(i=0; i<8; i++) // sau khi chay song i=8; nhi phan bieu dien o 8bit
	A[i] = 0;
	while(n!= 0&& i>=0)
	{
		A[--i] = n%2;  // cho i chay tu i=8 ve i=0
		n=n/2;
	}
	for(i=0;i<8;i++)
       printf("%d", A[i]);
	printf("\n%d chuyen sang co so 8 la: %o", m,m);
	printf("\n%d chuyen sang co so 16 la: %X",m,m);
}
