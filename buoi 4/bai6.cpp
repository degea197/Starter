#include<stdio.h>

main()
{
	int a[100],n,b,c;
	do
	{
		printf ("nhap n> 0: ");		scanf("%d",&n);
		printf ("nhap b,c (b<c): ");		scanf("%d %d",&b,&c);
		if(n<0||b>c)	printf("\n loi nhap lai\n");
	}while(n<0||b>c);
	int i,j,temp,dem=0,s=0;
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]>=b&&a[j<=c])
		{
			s+=a[j];
			dem++;
		}
	}
	printf("trung binh cong cua cac phan tu nam trong khoang %d den %d la: %f ",b,c,(float)s/dem);
}
