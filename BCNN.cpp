#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	printf("nhap a, b: "); scanf("%d %d", &a,&b);
	if(a<b)
	{
		for(i=a;i<a*b;i+=a)
			if(i%a==0 && i%b==0)
				break;
		printf("BCNN la: %d",i);
	}
	else
	{
		for(i=b;i<a*b;i+=b)
			if(i%a==0 && i%b==0)
				break;
		printf("BCNN la: %d",i);
	}
}
