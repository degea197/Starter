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
void mt(int a[100][100],int &m,int &n)
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
void max_min(int a[100][100],int &m,int &n)
{
	int max=0,min=9,hangmax,cotmax,hangmin,cotmin;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				hangmax=i;
				cotmax=j;
			}
			if(min>a[i][j])
			{
				min=a[i][j];
				hangmin=i;
				cotmin=j;
			}
		}
	}
	printf("\nmax = %d , vtri: a[%d][%d] ",max,hangmax,cotmax);
	printf("\nmin = %d , vtri: a[%d][%d] ",min,hangmin,cotmin);
}
main()
{
	int a[100][100],m,n;
	nhapmt(a,m,n);
	mt(a,m,n);
	max_min(a,m,n);
}
