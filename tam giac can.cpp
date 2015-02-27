#include<stdio.h>
void intamgiac(int h)
{
        int i,j;
        int c=h-1;                // chinh la so khoang trong
        for(i=0;i<h;i++)
        {
                for(j=0;j<c;j++)        // 2 hang nay la
                        printf(" ");    // de in dau cach    
                c--;                    // in song 1 hang thi so dau cach giam 1  
                for(j=1;j<=2*i+1;j++)
                        printf("*");    //in * tren tung hang la 1,3,5...
                printf("\n");           // in song 1 hang xuong dong
        }
}
int main()
{
        int h;
        printf("nhap chieu cao cua tam giac: ");
        scanf("%d",&h);
        intamgiac(h);
}
