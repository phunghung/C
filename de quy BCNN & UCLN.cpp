#include<stdio.h>
#include<conio.h>
float UCLN(int a, int b)
{
	if(a%b==0)
		return b;
	    else return UCLN(b,a%b);
}
main()
{
	int x,y;
	printf("nhap 2 so x, y: "); scanf("%d %d", &x, &y);
	printf("BCNN la: %.2f", (x*y) / UCLN(x,y));
}
