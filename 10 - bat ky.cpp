#include <stdio.h>
#include <conio.h>
void Chuyen10(unsigned n,unsigned k)
    {
        if (n>=k)
     	   Chuyen10(n/k,k);
           printf("%c",(n%k)["0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"]);          
    }
int main()
    {
        unsigned n,k;
        printf("Nhap vao so can chuyen: ");
        scanf("%d",&n);
        printf("Nhap vao co so can doi sang: ");
        scanf("%d",&k);
        printf("So %d sau khi chuyen sang co so %d la: ",n,k);
        Chuyen10(n,k);
    }
