#include<stdio.h>
#include<conio.h>
int main()
{
	int gio, phut, giay, s;
	do
	{
		printf("Nhap vao so giay (0 - 86399): "); scanf("%d", &s);
		if(s<0 || s>86399)
		printf("\nNhap chua hop le! Xin nhap lai.");
	}
	while(s<0 || s>86399);
	gio = s/3600;
	phut = (s - gio*3600) / 60;
	giay = s - ( (phut*60) + (gio*3600) );
	printf("\"%02d:%02d:%02d\"", gio, phut, giay); 
}
