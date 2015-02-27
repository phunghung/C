#include "stdio.h"  // S = 1 + 1/2! + 1/3! +...+ 1/n!
#include "conio.h"
main()
{
int i,n,s;
float s1;

printf("Nhap so n: ");
scanf("%d",&n);
if (n>0)
{
    s=1;
    for (i=1;i<=n;i++)
    {
        s = s*i;
        s1 = s1 + (float)1/s;
    }
    printf("ket qua S = %f",s1);
}
else printf("Ban phai nhap so nguyen duong!");
getch();
return 0;
}
