#include<stdio.h>
#include<conio.h> 
int main() 
{ 
int thang,nam; 
printf("\nnhap vao thang:"); scanf("%d",&thang); 
printf("\nnhap vao nam:"); scanf("%d",&nam); 
//du lieu hop le hay khong
if (thang < 1 || thang >12 || nam <0) 
{
 //sai 
printf("\ndu lieu khong hop le!");
return 0;
}
if(thang==1 || thang ==3 || thang==5|| thang==7 || thang==8||thang==10||thang==12) 
{ 
printf("\nthang co 31 ngay!"); 
} 
else if (thang == 4||thang ==6||thang==9||thang==11) 
{ 
printf("\nthang co 30 ngay");
} 
else 
{
 if((nam % 4 ==0 && nam % 100 !=0)|| nam % 400 ==0) 
{ 
printf("\nthang co 29 ngay!"); 
} 
else 
{
printf("\nthang co 28 ngay"); 
} 
} getch(); 
return 0; 
}
