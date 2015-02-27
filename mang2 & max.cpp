#include<stdio.h>
#include<conio.h>
main()
{
	int m, n, i, j;
	float A[10][10], max;
	printf(" nhap so hang cua ma tran : "); scanf("%d", &m);
	printf("\n nhap so cot cua ma tran: "); scanf("%d", &n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{
		printf("A[%d][%d] = ",i,j);
		scanf("%f", &A[i][j]);
        }
	max = A[0][0];
	for(i=0; i<m; i++)	
	 for(j=0; j<n; j++)
	if(max<A[i][j])
	max = A[i][j];
	printf("\n phan tu lon nhat trong ma tran la: %.1f\n", max);
    
    for(i=0; i<m; i++)
    {	
    	for(j=0; j<n; j++)
    	printf("A[%d][%d] = %2.1f \t",i,j, A[i][j]);
    	printf("\n");
    }
	getch();
}
