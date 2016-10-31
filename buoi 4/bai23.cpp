#include<stdio.h>

void nhapmang(int &n, int a[])
{
	printf("nhap so phan tu ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf("phan tu thu %d = ",i);
		scanf("%d",&a[i]);
	}
}
main()
{
	int n,m,a[100]={0},b[100]={0};
	printf("nhap he so ai\n");
	nhapmang(n,a);
	printf("nhap he so bi\n");
	nhapmang(m,b);
	if(m>=n)
		for(int i=0;i<=m;i++)
			printf("\nhe so cua da thuc tong: i = %d ---> a%d = %d",i,i,a[i]+b[i]);
	else
		for(int i=0;i<=n;i++)
			printf("\nhe so cua da thuc tong: i = %d ---> a%d = %d",i,i,a[i]+b[i]);
	
}
