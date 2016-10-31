#include<stdio.h>

int kt(int n)
{
	if(n<2)	return 0;
	int j;
	for(j=2;j*j<=n;j++)
	if(n%j==0)		return 0;
	return 1;
}
main()
{
	int n,i=2;
	do
	{
		printf("a,\nnhap n >1 : ");
		scanf("%d",&n);
		if(n<1)
		printf("loi! nhap lai\n");
	}while (n<1);
	int dem=0;
	while(dem<n)
	{
		if(kt(i)){
			printf("%5d",i);
			dem++;
		}
		i++;
	}
	int a[94],j=2,k;
	a[0]=0;
	a[1]=1;
	printf("\nb.dau so fibonaci la: \n");
	while(j<n)
	{
		a[j]=a[j-1]+a[j-2];
		j++;
	}
	for(k=0;k<n;k++)
	{
		printf ("%5d",a[k]);
	}
}
