#include<stdio.h>

main()
{
	int t,k=0,j,b[100],a[100],n,dem=0,temp;
	printf("nhap n: ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("nhap a[%d] = ",j);
		scanf("%d",&a[j]);
	}
	for(int i=0;i<n;i++)
	{
		int dem=1;
		for(j=i;j<n-1;j++)
			if(a[j]<=a[j+1])	dem++;
			else	break;
		b[i]=dem;
	}
	int max=b[0];
	for(k=0;k<n;k++)
	{
		if(b[k]>max)	max=b[k];
	}
	for(t=0;t<n;t++)
	{
		if(b[t]==max)
		{
			temp=t;
		}	
	}
	int l=0;
	while(l<max)
	{
		printf("%5d",a[temp]);
		temp++;
		l++;
	}
}
