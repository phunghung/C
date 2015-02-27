#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	double a, x, z;
	printf("nhap co so a = "); scanf("%lf", &a);
	printf("nhap vao so mu x = "); scanf("%lf", &x);
	z= pow(a, x);
	printf("z = pow(a, x)\n");
	printf("a = %g, x = %g, z = %g", a, x, z);
}
