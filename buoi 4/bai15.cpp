#include<stdio.h>

main()
{
	int a[50],b[50],c[50],dem,k,m,n,p,i=1;
	printf("nhap m: ");
	scanf("%d",&m);
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap vtri p: ");
	scanf("%d",&p);
	for (int l=1;l<=n;l++)
	{
		printf("nhap a[%d] = ",l);
		scanf("%d",&a[l]);
	}
	
	for (int j=1;j<=m;j++)
	{
		printf("nhap b[%d] = ",j);
		scanf("%d",&b[j]);
	}
	printf("\n");
	for(k=1;k<=m+n;k++)
	{
		if(k==p)
			 dem = p+1;
		if(k<=p)
			c[k]=a[k];
		else if(k<=p+m)
		{
			c[k]=b[i];
			i++;
		}
		else
		{
			c[k]=a[dem];
			dem++;
		}
		printf("\t %d ",c[k]);		
	}
}

