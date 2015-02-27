#include<stdio.h>
#include<conio.h>
enum week {SUN, MON, TUE, WED, THU, FRI, SAT};
int main()
{
	enum week today;
	int date;
	date=5;
	today = SUN;
	printf("Hom nay la ");
	(today == 0) ? printf("Chu nhat") : printf("Thu %d", today+1);
	printf("\n Ngay hen la: ");
	if(date==SAT || date==SUN)
	printf("Cuoi tuan");
	else printf("Ngay trong tuan");
}
