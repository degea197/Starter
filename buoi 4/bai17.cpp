#include<stdio.h>

main()
{
	int a[50],b,i,n,x,c[50];
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap x: ");
	scanf("%d",&x);
	printf("nhap mang a theo thu tu tang dan: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x<a[i])
		{
			b=i;
			break;
		}
	}
	int k=b;
	for(i=0;i<=n;i++)
	{
		if(i<b)
		{
			c[i]=a[i];
		}
		else if(i==b)
		{
			c[i]=x;
		}
		else
		{
			c[i]=a[k];
			k++;
		}
	
	}
	for(i=0;i<=n;i++)
	{
		printf("%5d",c[i]);
	}

}
