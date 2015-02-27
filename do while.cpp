#include<stdio.h>
#include<conio.h>
int main()
{
	int value;
	do
	{
	
		printf("xin nhap so giua 1 va 10: "); scanf("%d", &value);
		if(value<1 || value > 10)
		printf("%d khong phai so nam giua 1 va 10\n", value);
    }
	while(value < 1 || value > 10);
	printf("ban da nhap so %d", value);
}
