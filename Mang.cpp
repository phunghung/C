/*De bai: nhap vao mang 1 chieu gom n phan tu, tinh tong giai thua tu 1-n, in ra so co gia tri lon nhat trong mang va tinh so phan tu chan le trong mang*/
#include<stdio.h>
#include<conio.h>
 
int GiaiThua(int m)
{
        int i,kq=1;
        for(i=2;i<=m;i++)
                kq=kq*i;
        return kq;
}
 
int TongGT(int n)
{
        int i,t=0;
        for(i=1;i<=n;i++)
        {
                t=t+GiaiThua(i);
        }
         return t;
}
 
void Nhap(int A[30],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("nhap A[%d]= ",i);
                scanf("%d",&A[i]);
        }
}
 
int FindMax(int A[30],int n)
{
        int i,max;
        max=A[0];
        for(i=1;i<n;i++)
        {
                if(A[i]>max)
                        max=A[i];
        }
        return max;
}
void TimC(int A[30],int n)
{
        int i,dc=0,dl=0;
        for(i=0;i<n;i++)
        {
                if(A[i]%2==0) dc++;
                else dl++;
        }
        printf("So phan tu chan la %d \n",dc);
        printf("So phan tu le la %d ",dl);
}
int main()
{
        int n,A[30],i;
        printf("gia tri cua n");
        scanf("%d",&n);
        Nhap(A,n);
        int t=TongGT(n);
        printf("tong giai thua 1-n la %d \n",t);
        printf("gia tri lon nhat cua mang la %d \n",FindMax(A,n));
        TimC(A,n);
        getch();
}
//1! + 2! + 3! + 4! ......+ n!
