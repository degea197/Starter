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

void mts(int a[100][100],int m,int n)
{
	int b[100],s=0;
	for(int i=0;i<m;i++)
	{
		s=0;
		for(int j=0;j<n;j++)
		{
			s+=a[i][j];
		}
		b[i]=s;
	}
	int min=b[0],t,kt=0;
	for(int k=0;k<m;k++)
	{
		if(min>=b[k])
		{
			min=b[k];
			t=k;	
		}	
	}
	for(int i1=0;i1<m;i1++)
	{
		if(i1==t&&kt<1)
		{
			kt++;
			continue;	
		}	
		for(int j1=0;j1<n;j1++)
		{
			printf("%3d",a[i1][j1]);
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
	printf("\n ma tran bo di hang co tong phan tu nho nhat la: \n");
	mts(a,m,n);
	
}
