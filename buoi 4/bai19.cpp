#include<stdio.h>

main()
{
	int a[50],b,i,n,x=0,c[50];
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap mang a : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for(int j=0;j<n-1;j++)
	{
		i=j+1;
		if(a[j]>a[i])	
		{
			b=i;
			x=1;
			break;
		}
	}
	if(x==1)
	{
		printf("mang ko dc sx tang dan.");
			printf("\nPhan tu dau tien lam mat t/c tren la:  %d ",b);
	}
	else
		printf("mang dc sx tang dan");
}
