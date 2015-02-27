#include<stdio.h>
#include<conio.h>
int GiaiThua(int x)
{       if(x==1||x==0) return 1;
        else return x*GiaiThua(x-1);
}
float KetQua(int k,int m)
{       float kq= (float)(GiaiThua(m)/(GiaiThua(k)*GiaiThua(m-k)));
        return kq;
}
int main()
{       int k=0,m=0;
        do{             printf("nhap vao gia tri cua k : ");
                scanf("%d",&k);
        }
        while(k<=1||k>10);
        do{             printf("nhap vao gia tri cua m : ");
                scanf("%d",&m);
        }
        while(m<k||m>10);
        printf("m = %d k = %d",m,k);
        float kq= KetQua(k,m);
        printf("\nGia tri can tinh la %0.2f",kq);
        getch();
}
