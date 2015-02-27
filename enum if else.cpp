#include<stdio.h>
#include<conio.h>
enum week {SUN, MON=2, TUE, WED, THU, FRI, SAT};
int main()
{
	enum week today = THU;
	printf("Hom nay la: ");
	if(today == MON) printf("Thu 2");
	else if(today == TUE) printf("Thu 3");
	else if(today == WED) printf("Thu 4");
	else if(today == THU) printf("Thu 5");
	else if(today == FRI) printf("Thu 6");
	else printf("Cuoi tuan");
	return 0;
}
