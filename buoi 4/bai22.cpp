#include<stdio.h>

main()
{
	int n,x,a[100];
	printf("nhap n: ");
	scanf("%d",&n);
	printf("nhap x: ");
	scanf("%d",&x);
	for(int i=0;i<=n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int s1=(a[n]*x+a[n-1])*x,s2=0;
	for(int j=n-2;j>0;j--)
		s2+=a[j];
	int p=(s1+s2)*x+a[0];
	printf("p(x)= %d ",p);
	
}
