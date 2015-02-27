#include<stdio.h>
#include<conio.h>
struct date
{
	int day, month, year;
};
struct nhanvien
{
	char nvid[10];
	char name[40];
	date birth;
}employee[50];
int main()
{
	int i, n;
    printf("Enter the number employee: "); scanf("%d", &n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
	     printf("\nEnter the information of employee %d: \n",i+1);
	     printf("\nEnter ID: "); gets(employee[i].nvid);
	     printf("\nName employee: "); gets(employee[i].name);
	     printf("\nBirth (day month year): "); scanf("%d %d %d", &employee[i].birth.day, &employee[i].birth.month, &employee[i].birth.year);
	     fflush(stdin);
    }
    printf("--------------------------------------------------------------------------------");
    printf("\nDisplay the information of employee: \n");
    printf("\nID \t\tFull name \t\tBirth year \n");
    for(i=0;i<n;i++)
    {
    	printf("%-15s %-20s %5d/%d/%d \n",employee[i].nvid, employee[i].name, employee[i].birth.day, employee[i].birth.month, employee[i].birth.year);
	}
}
