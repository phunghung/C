#include<stdio.h>
#include<conio.h>
int nhapmang (int X[20][20], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	{
		printf("[%d][%d] = ", i,j); scanf("%d", &X[i][j]);
	}
}
int hienthi(int X[20][20], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		printf("%6d", X[i][j]);
		printf("\n");
	}
}
int vtmax(int X[20][20], int m, int n)
{
	int i, j, max;
	max=X[0][0];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		if(max<X[i][j]) max=X[i][j];
		printf("\n   gia tri lon nhat la: %d", max);
	{   
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		if( X[i][j]==max ) printf("\nGia tri lon nhat o vi tri: [%d][%d]",i,j);  
	}
}
int tong(int X[20][20], int Y[20][20], int Z[20][20], int m, int n)
{
	int i, j;
	Z[i][j] = 0;
	for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	Z[i][j] = X[i][j] + Y[i][j];
}
int tich(int X[20][20], int Y[20][20], int Z[20][20], int m, int n)
{
	int i,j, k;
	for(i=0; i<m; i++)
	for(j=0;j<n;j++)
	{
		Z[i][j] = 0;
		for(k=0; k<n; k++)
		Z[i][j] = Z[i][j] + X[i][k]*Y[k][j];
	}
}
int tongam(int X[20][20], int m, int n)
{
	int i,j, Sam;
    Sam=0;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    if(X[i][j]<0) Sam = Sam + X[i][j];
    printf("\nTong cac phan tu am cua ma tran A la: %d", Sam);
}
int main()
{
	int m, n, i, j, A[20][20], B[20][20], C[20][20];
	printf("Nhap so hang cua ma tran: "); scanf("%d", &m);
	printf("\nNhap so cot cua ma tran: "); scanf("%d", &n);
	nhapmang(A,m,n); printf("\nMa tran A la:\n"); hienthi(A,m,n);
	nhapmang(B,m,n); printf("\nMa tran B la:\n"); hienthi(B,m,n);
	printf("\nTong 2 ma tran A + B la:\n");
	tong(A,B,C,m,n); hienthi(C,m,n);
	printf("\nTich 2 ma tran A x B la:\n");
	tich(A,B,C,m,n); hienthi(C,m,n);
	printf("\nGia tri lon nhat trong ma tran A:");
	vtmax(A,m,n);
	tongam(A,m,n);
}
