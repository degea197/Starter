/* B�i 15: H�y vi?t ch??ng tr�nh t�nh t?ng c�c ch? s? c?a m?t s? nguy�n b?t k?.
 V� d?: S?  8545604 c� t?ng c�c ch? s? l�: 8+5+4+5+6+0+4= 32*/

#include<stdio.h>
#include<math.h>

main()
{
	int n,k,i,h,s=0,l;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	printf("%d co bnhieu chu so: ",n);
	scanf("%d",&k);
	h=n;
	for(i=k-1;i>=0;i--)
	{
		l=h/(int)pow(10.0,i);
		h%=(int)pow(10.0,i);
		s+=l;
	}
	printf("tong cac chu so trong %d la: %d",n,s);
	
}
