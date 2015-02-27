#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a, b, c, delta, k, x1,x2;
	printf("giai phuong trinh bac 2");
	printf("\n nhap he so a: "); scanf("%f", &a);
	printf("\n nhap he so b: "); scanf("%f", &b);
	printf("\n nhap he so c: "); scanf("%f", &c);
	delta = b*b - 4*a*c;
	printf("delta = %.0f \n", delta);
	(float)k = (float) sqrt( delta);
	if(delta > 0)
	{
		x1 = (float) ( (-b + k) / (2*a) );
		x2 = (float) ( (-b - k) / (2*a) );
		printf("phuong trinh co 2 nghien phan biet la: x1 = %.1f \n x2 = %.1f", x1, x2);
	}
	{
	
	if(delta == 0)
	
		x1 = x2 =(float) (-b/(2*a) );
		printf("phuong trinh co nghiem kep x1 = x2 = %.1f", x1);
	}
	else printf("phuong trinh vo nghiem")
}
