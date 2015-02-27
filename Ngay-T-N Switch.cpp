#include<stdio.h>
#include<conio.h>
int main()
{
	int ngay, thang, nam, i;
	printf("nhap ngay: "); scanf("%d", &ngay);
	printf("\nnhap thang: "); scanf("%d", &thang);
	printf("\nnhap nam: "); scanf("%d", &nam);
	printf("\nngay %d/%d/%d la: ", ngay,thang,nam);
	switch(thang)
	{
		case 1: printf("ngay thu %d cua nam %d", ngay, nam); break;
		case 2: printf("ngay thu %d cua nam %d", ngay+31, nam); break;
		case 3: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28, nam); 
		} break;
		case 4: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31, nam); 
		} break;
		case 5:
	    {
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30, nam); 
		} break;
		case 6: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31, nam); 
		} break;
		case 7:
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30, nam); 
		} break;
		case 8: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30+31, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30+31, nam); 
		} break;	
		case 9: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30+31+31, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30+31+31, nam); 
		} break;	
		case 10: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30+31+31+30, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30+31+31+30, nam); 
		} break;	
		case 11: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30+31+31+30+31, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30+31+31+30+31, nam); 
		} break;	
		case 12: 
		{
			if(nam%4==0 && nam%100!=0 || nam%400==0)
			printf("ngay thu %d cua nam %d", ngay+31+29+31+30+31+30+31+31+30+31+30, nam);
			else printf("ngay thu %d cua nam %d", ngay+31+28+31+30+31+30+31+31+30+31+30, nam); 
		} break;	
	}
	
}
