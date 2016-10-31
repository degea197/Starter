#include<stdio.h>
#include<math.h>
main() {
	float x, c, tong = 1, tu , mau;
	int n = 1;
	printf("\n Moi ban nhap gia tri cho so thuc x = "); scanf("%f", &x);
	printf("\n Moi ban nhap gia tri cho so thuc c (c > 0): "); scanf("%f", &c);
	while(c <=0) {
		printf("\n Gia tri cua c ma ban vua nhap khong thoa man dieu kien c > 0. \n Moi ban nhap lai:"); scanf("%f", &c);
	}
	tu = x;
	mau = 1;
	while(fabs(tu/mau) > c) {
		tong += tu/mau;
		n++;
		tu *= x;
		mau *= n;
	}
	printf("\n e^%f = %f",x, tong);
}
