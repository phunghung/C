#include<conio.h>
#include<stdio.h>
int nhapmang(int A[100], int n, char an)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n%c[%d] = ", an, i); 
		scanf("%d", &A[i]);
	}
}
int xuatmang(int A[100], int n)
{
	int i;
	for(i=0; i<n; i++)
	printf("%4d", A[i]);
}
void gopmang(int a[], int na, int b[], int nb,int c[], int &nc)
{
nc = 0;
for (int i = 0; i < na; i++)
{
c[nc] = a[i]; nc++; // c[nc++] = a[i];
}
for (int i = 0; i < nb; i++)
{
c[nc] = b[i]; nc++; // c[nc++] = b[i];
}
}
int hoanvi(int &x, int &y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}
void sapxeptang(int A[10], int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = i + 1; j < n; j++)
if (A[j] < A[i])
hoanvi(A[j], A[i]);
}
xuatmang(A,n);
}
main()
{
	int A[100], B[100], C[100], na,nb,nc;
	printf("Nhap so phan tu mang A: "); scanf("%d",&na);
	nhapmang(A,na, 'A');
	printf("\nNhap so phan tu mang B: "); scanf("%d",&nb);
	nhapmang(B,nb,'B');
	printf("\nGop 2 mang da nhap ta duoc: \n");
	gopmang(A,na,B,nb,C,nc);
	xuatmang(C,nc);
	printf("\nSap xep day tang sau khi da gop mang: \n");
	sapxeptang(C,nc);
}
