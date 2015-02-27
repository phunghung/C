#include<stdio.h>
#include<conio.h>
int main()
{
	char choice;
	printf("enter a choice: "); scanf("%c", &choice);
	switch (choice)
	{
		case '+': printf("\n choice addition: %c", choice);
		break;
		case '-': printf("\n choice subtraction: %c", choice);
		break;
		case '*': printf("\n choice mutiplication: %c", choice);
		break;
		case '/': printf("\n choice division: %c", choice);
		break;
		default:
			printf("\n invalid choice!");
			break;
	}
}
