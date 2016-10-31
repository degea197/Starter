/* Bài 15: Hãy vi?t ch??ng trình tính t?ng các ch? s? c?a m?t s? nguyên b?t k?.
 Ví d?: S?  8545604 có t?ng các ch? s? là: 8+5+4+5+6+0+4= 32*/

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
