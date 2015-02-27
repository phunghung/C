#include<stdio.h> // S = 1! - 2! + 3! - 4! +...(-1)^(n-1) * n! 
#include<conio.h>
int giaithua(int x)
{
	if(x==1 || x==0)
	return 1;
	else return x*giaithua(x-1);
}
int tong(int n)
{
	int tong =0, i, d=1;
	for(i=1;i<=n;i++)
	{
		tong = tong + (d*giaithua(i));
		d=d* (-1);
	}
	return tong;
}
int main()
{
	int n, sum;
	printf("nhap n: "); scanf("%d", &n);
	sum = tong(n);
	printf("tong can tinh = %d", sum);
}
