#include<stdio.h>
main()
{
	float a1, a2, b1, b2, c1, c2, D, D1, D2, x, y;
	printf("nhap lan luot cac he so: a1, b1, c1, a2, b2, c2  "); scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
	printf("gia tri cac he so da nhap la: a1 = %.1f, b1 = %.1f, c1 = %.1f, a2 = %.1f, b2 = %.1f, c2 = %.1f\n", a1,b1,c1,a2,b2,c2);
	D = a1*b2 - a2*b1;
	D1 = c1*b2 - c2*b1;
	D2 = a1*c2 - a2*c1;
	if(D==0)
	{
		if(D1==0 && D2==0)
		printf("he phuong trinh co vo so nghiem!");
		if(D1 != 0 || D2 != 0)
		printf("he phuong trinh vo nghiem!");
	}
	else
		printf("he phuong trinh co nghiem duy nhat: x = %.1f va y = %.1f", D1/D, D2/D);
}
