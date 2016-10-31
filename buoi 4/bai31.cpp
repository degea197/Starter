#include<stdio.h>

void nhapmt(int a[100][100],int &m,int &n)
{
	printf("nhap so hang m: ");		scanf("%d",&m);
	printf("nhap so cot n: ");		scanf("%d",&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

}
void mtbd(int a[100][100],int m,int n)
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
void mtcv(int a[100][100],int m,int n)
{
	int b[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	
}
main()
{
	int a[100][100],m,n;
	nhapmt(a,m,n);
	printf("\n ma tran ban dau la: \n");
	mtbd(a,m,n);
	printf("\n ma tran chuyen vi la: \n");
	mtcv(a,m,n);
	
}
