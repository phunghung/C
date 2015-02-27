#include<stdio.h>
int nguyento(int a)
{
	int i;
	for(i=2; i<a; i++)
	    if(a%i==0) 
		   return 0;
	else return 1;
}
int main()
{
	int n;
	printf("nhap n: "); scanf("%d", &n);
	if(nguyento(n))
	printf("\n%d la so nguyen to! ", n);
	else
	printf("\n%d khong phai la so nguyen to!", n);
}
