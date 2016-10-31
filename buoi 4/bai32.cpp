#include<stdio.h>

void mtbd(int a[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int m,n,k;
	int a[10][10],b[10][10];
	printf("nhap mt a(mxn): \n");
	printf("nhap so hang mt a: ");
	scanf("%d",&m);
	printf("nhap so cot mt a: ");
	scanf("%d",&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	mtbd(a,m,n);
	printf("nhap mt b(nxk): \n");
	printf("nhap so cot mt b: ");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	mtbd(b,n,k);
	int c[10][10];
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<k;j++)
		{
			c[i][j]=0;
			for(int h=0;h<n;h++)
				c[i][j]+=a[i][h]*b[h][j];
		}	
	}
	printf("\n\n\n axb= \n");
	mtbd(c,m,k);
}
