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
	int a[10][10],b[10][10],m,n;
	printf("nhap so hang m: ");		scanf("%d",&m);
	printf("nhap so cor n: ");		scanf("%d",&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("mt A la: \n");
	mtbd(a,m,n);
	printf("ma tran chuyen vi cua MT A la: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	mtbd(b,n,m);
	int c[10][10];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][i];
		}
	}
	printf("\n MT A*B= C:  \n");
	mtbd(c,m,m);
}
