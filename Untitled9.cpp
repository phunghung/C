#include<stdio.h>
#include<conio.h>
int nhapmang(int A[100], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nA[%d] = ", i); 
		scanf("%d", &A[i]);
	}
}
int xuatmang(int A[100], int n)
{
	int i;
	for(i=0; i<n; i++)
	printf("%4d", A[i]);
}
int LaSNT(int n)
{
int i;
     for (i = 2; i < n; i++)
     if (n % i == 0)
          return 0;
else return 1;
}
int kiemtra_c3(int A[], int n)
{
for (int i = 0; i < n ; i++)
if (LaSNT(A[i]) == 0)
return 0; 
return 1;
}
void them(int a[], int &n, int vt, int x)
{
if (vt >= 0 && vt <= n)
{
for (int i = n; i > vt; i--)
a[i] = a[i - 1];
a[vt] = x;
n++;
}
}

main()
{
	int A[100],B[100], C[100], D[100], nd, nc, nb, n, z, vt, vtx;
	printf("nhap so luong phan tu cua mang A: "); scanf("%d", &n);
	printf("nhap gia tri can them: "); scanf("%d", &z);
	printf("nhap vi tri can them: "); scanf("%d", &vt);
	printf("nhap vi tri can xoa: "); scanf("%d", &vtx);
	nhapmang(A,n);
	xuatmang(A,n);
	printf("\n");
	if(kiemtra_c3(A,n))
	printf("\n mang toan so nguyen to");
	else 
	printf("\n mang khong phai tat ca deu la so nguyen to\n");
	printf("\n");
	them(A,n,vt,z);
	xuatmang(A,n);
	printf("\n");
}
