#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str_array[20][100];
	int i, n;
	printf("so luong chuoi: "); scanf("%d", &n);
	fflush(stdin);
	for(i=0; i<n; i++)
	{
		printf("\n chuoi so %d: ", i+1);
		gets(str_array[i]);
	}
	printf("-------------------------------------------------------------------------------\n");
	printf("chuoi so da nhap la: \n");
	printf("\n");
	for(i=0; i<n; i++)
	printf("%s\n", str_array[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf("chuoi so %d co %d ky tu \n", i, strlen(str_array[i]));
	printf("\n Dao nguoc chuoi so: \n");
	for(i=0;i<n;i++)
	{
		strrev(str_array[i]);
	    puts(str_array[i]);
	}
}
