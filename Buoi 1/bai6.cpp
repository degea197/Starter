#include<stdio.h>

main()
{
	int i,n;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	for(i=n;i<=n*n;i++)
		printf("  %d",i);
}
