#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5, b;
	b = a++; printf("b = a++; a = %d, b = %d. \n", a, b);
	b += a; printf("b += a; a = %d, b = %d. \n", a, b);
	b -= a; printf("b -= a; a = %d, b = %d. \n", a, b);
	b *= a; printf("b *= a; a = %d, b = %d. \n", a, b);
	b /= a; printf("b /= a; a = %d, b = %d. \n", a, b);
	b=40;
	b %= a; printf("b %= a; a = %d, b = %d. \n", a, b);
	b &= a; printf("b &= a; a = %d, b = %d. \n", a, b);
	b |= a; printf("b |= a; a = %d, b = %d. \n", a, b);
	b ^= a; printf("b ^= a; a = %d, b = %d. \n", a, b);
	return 0;
}
