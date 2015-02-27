#include<stdio.h>
#include<conio.h>
int nhapmang(int A[10][10], int m, int n, char an)
{
	int i, j;
	for(i=0; i<m; i++)
	 for(j=0; j<n; j++)
	{
		printf("%c[%d][%d] = ",an, i, j);
		scanf("%d", &A[i][j]);
	}
}
int hienthi(int A[10][10], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		printf(" %4d", A[i][j]);
		printf("\n");
	}
}
int tong(int A[10][10], int B[10][10], int C[10][10], int m, int n)
{
	int i, j, k, l;
	nhapmang(A,m,n,'X');
	printf("\n");
	nhapmang(B,m,n,'Y');
	for(i=0; i<m; i++)
	for(j=0; j<n; j++)
	C[i][j] = A[i][j] + B[i][j];
}
int tich(int A[10][10], int B[10][10], int C[10][10], int m, int n, int q)
{
	int i, j, k;
	for(i = 0; i < m; i++)  
    for(j = 0; j < q; j++)  
        {
             C[i][j] = 0;  
             for(k = 0; k < n; k++)   
                  C[i][j] += A[i][k] * B[k][j]; 
        }
}
int timkiem(int a[10][10], int m, int n, int x)
{
int i, j;
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
if (a[i][j] == x)
return 1;
return 0;
}
int tongdong(int a[10][10], int m, int n, int d)
{
int j, tong;
tong = 0;
for (j = 0; j < n; j++) // Duy?t các c?t
tong = tong + a[d][j];
return tong;
}
int main()
{
	int X[10][10], Y[10][10], Z[10][10], i, j, m, n, p, q, dong, sum;
	printf("nhap co cua ma tran X (hang, cot): "); scanf("%d %d", &m, &n);
	printf("\nnhap co cua ma tran Y (hang, cot): "); scanf("%d %d", &p, &q);
	if(n!=p)
	{
		printf("\nNhan ma tran khong hop le!");
		return 0;
	}
	printf("\nnhap ma tran X la: \n");
	nhapmang(X,m,n,'X');
	printf("\nnhap ma tran Y la: \n");
	nhapmang(Y,p,q,'Y');
	printf("\ntich 2 ma tran X x Y la: \n");
	tich(X,Y,Z,m,n,p);
	hienthi(Z,m,q);
	printf("\nTinh tong cac phan tu cua ma tran X tren dong: "); scanf("%d", &dong);
	sum = tongdong(X,m,n,dong);
	printf("\nTong = %d", sum);
}
