#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a=1;
printf("nhap so n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
a=a*i;
printf("%d giai thua la: %d", n, a);
}
