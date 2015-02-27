#include<stdio.h>
struct sinhvien
{
	char ten[20];
	char diachi[40];
	int namsinh;
};
int main()
{
	struct sinhvien sv1, sv2;
	printf("Nhap sinh vien thu nhat: ");
	printf("\nTen: "); gets(sv1.ten);
	printf("\nDia chi: "); gets(sv1.diachi);
	printf("\nNam sinh: "); scanf("%d", &sv1.namsinh);
	fflush(stdin);
	printf("\nNhap sinh vien thu 2: ");
	printf("\nTen: "); gets(sv2.ten);
	printf("\nDia chi: "); gets(sv2.diachi);
	printf("\nNam sinh: "); scanf("%d", &sv2.namsinh );
	printf("\n Display information of two students: \n");
	printf("\n %s \n %s", sv1.ten , sv1.diachi );
	printf("\n %d", sv1.namsinh);
	printf("\n %s \n %s", sv2.ten , sv2.diachi );
	printf("\n %d", sv2.namsinh);
	return 0;
}
