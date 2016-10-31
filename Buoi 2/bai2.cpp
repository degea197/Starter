#include<stdio.h>

main()
{
	int i,n,s;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	s=n;
	for (i=1;i<n;i++)
		s+=i;
	printf("tong tu 1 den %d la: %d ",n,s);
	
}
