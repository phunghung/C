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
int timmax(int A[100], int n)
{
	int i, max;
	max=A[0];
	for(i=0; i<n; i++)
	if(max<A[i])
	max = A[i];
	printf("\n gia tri lon nhat la: %d", max);
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
int timkiem(int A[], int n, int x)
{
for (int vt = 0; vt < n; vt++)
if (A[vt] == x)
return vt;
return 0;
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
void TachSNT(int a[100], int na, int b[100], int &nb)
{
nb = 0;
for (int i = 0; i < na; i++)
if (LaSNT(a[i]) == 1)
{
b[nb] = a[i];
nb++;
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
int main()
{
	int A[100],B[100], C[100], D[100], nd, nc, nb, n, z, vtx;
	printf("nhap so luong phan tu cua mang A: "); scanf("%d", &n);
	printf("nhap gia tri can tim: "); scanf("%d", &z);
	nhapmang(A,n);
	xuatmang(A,n);
	timmax(A,n);
	printf("\n");
	if(vtx = timkiem(A,n,z))
	printf("\n gia tri z = %d nam o vi tri %d", z, vtx);
	else printf("\n gia tri z = %d khong nam trong mang", z);
	printf("\n");	
	if(kiemtra_c3(A,n))
	printf("\n mang toan so nguyen to");
	else 
	printf("\n mang khong phai tat ca deu la so nguyen to\n");
	printf("\n");
	printf(" sap xep gia tri tang dan: \n");
	sapxeptang(A,n);
	printf("\n");
	printf("\nTach cac so nguyen to trong mang A sang mang B la: ");
	TachSNT(A, n, B, nb);
	xuatmang(B,nb);
	
}
