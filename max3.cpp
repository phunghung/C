#include<stdio.h>
#include<conio.h>
int main()
{
float a, b, c, max;
printf("chuong trinh sau thuc hien tim max trong 3 so: a, b, c\n");
printf("nhap so a = "); scanf("%f", &a);
printf("nhap so b = "); scanf("%f", &b);
printf("nhap so c = "); scanf("%f", &c);
if(a>b)
{
	if(a>c) max=a;
	else max=c;
}
else if(b<c) max=c;
else max=b;
printf("max = %0.2f", max);
}
