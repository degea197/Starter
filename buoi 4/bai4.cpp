#include<stdio.h>

main()
{
	int x,h=1,j,i,n,a[1000];
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf(" nhap x = ");
	scanf("%d",&x);
	int dem=0;
	for(j=0;j<n;j++)
	{
		if (a[j]==x)
		dem+=1;
	
	}
	
	printf(" so lan xuat hien x la: %d", dem);
}
