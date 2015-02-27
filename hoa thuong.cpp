#include<stdio.h> //chuyen ky tu in hoa sang in thuong
#include<conio.h>
int main()
{
	char c;
	printf(" xin nhap ky tu: "); scanf("%c", &c);
	if(c>='A' && c<='Z')
	printf("\n ky tu chuyen doi: %c", c+'a'-'A');
	else printf("\n ky tu da nhap: %c", c);
	getch();
}
