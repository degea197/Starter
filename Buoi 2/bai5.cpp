#include<stdio.h>

main()
{
	int i,n,s=0,t=1;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		t*=i;
		s+=t;
	}
	printf("tong S = 1 + 1.2 + 1.2.3 + ...+1.2.3...%d= %d ",n,s);
	
}
