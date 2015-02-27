#include<stdio.h> //chuyen ky tu thuong sang in hoa
#include<conio.h>
int main() 
{
char c;
printf(" nhap ky tu: "); scanf("%c", &c);
if(c>='a' && c<='z')
printf("\n ky tu chuyen doi la: %c", c -'a'+'A');
else printf("\n ky tu da nhap: %c", c);
getch();
}
