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
void mt(int a[100][100],int m,int n)
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
void sum(int a[100][100],int m,int n )
{
	int sc=0,sp=0,kt=1;
	if(m!=n)
		printf("\nmt hcn khong co duong cheo chinh va duong chep phu ");
		
	else
	{
		kt=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
					sc+=a[i][j];
				if(j==n-1-i)
					sp+=a[i][j];
			}
		
		}
	}
	if(kt==0)
		printf("tong cac phan tu cua duong cheo chinh va duong chep phu la: %2d %2d ",sc,sp);
}
main()
{
	int a[100][100],m,n;
	nhapmt(a,m,n);
	mt(a,m,n);
	sum(a,m,n);
}
