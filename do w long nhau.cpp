#include<stdio.h>
#include<conio.h>
int main()
{
	char x, c;
	printf("nhap mot ky tu: "); scanf("%c", &c);
	printf("ky tu da nhap la %c", c);
	fflush(stdin);
	printf("nhap them mot ky tu: (Y/N)?"); scanf("%c", &x);
	fflush(stdin);
	while(x == 'Y' || x =='y');
	{
		do{
			printf("nhap ky tu: "); scanf("%c", &c);
			fflush(stdin);
			printf("ky tu da nhap la %c\n", c);
		} while(c != 'E' && c != 'e');
		printf("nhap hon ky tu (Y/N)?");
		scanf("%c", &x);
		fflush(stdin);
	}
}
