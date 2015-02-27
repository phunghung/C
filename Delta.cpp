#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a, b, c, delta, x1,x2;
	printf("giai phuong trinh bac 2");
	printf("\n nhap he so a: "); scanf("%f", &a);
	printf("\n nhap he so b: "); scanf("%f", &b);
	printf("\n nhap he so c: "); scanf("%f", &c);
	delta = pow(b,2) - 4*a*c;
	printf("delta = %.0f \n", delta);
	if(delta < 0)
	printf("phuong trinh vo nghiem");
	else if(delta==0)
	{
		x1 = -b/(2*a);
		printf("\n phuong trinh co nghiem kep x1 = x2 = %f",x1);
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("phuong trinh co 2 nghiem x1 = %f  x2 = %f", x1, x2);
	}
}

