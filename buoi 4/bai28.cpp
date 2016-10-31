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
	for(int i=0;i<n;i++)
	{
		s=0;
		for(int j=0;j<m;j++)
		{
			s+=a[j][i];
		}
		b[i]=s;
		
	}
	int max=b[0],t,kt=0;
	for(int k=0;k<n;k++)
	{
		if(max<=b[k])
		{
			max=b[k];   
			t=k;	
		}	
	}
	for(int i1=0;i1<m;i1++)
	{
		
		for(int j1=0;j1<n;j1++)
		{
			if(j1==t&&kt<m)
			{
				kt++;
				continue;	
			}	
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
	printf("\n ma tran bo di cot co tong phan tu lon nhat la: \n");
	mts(a,m,n);
	
}
