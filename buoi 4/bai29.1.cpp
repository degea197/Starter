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
void detA(int a[100][100],int m,int n)
{
	int i,j,k,l,det=1,kt;
	if(m!=n)
		kt=0;
	else
	{
		kt=1;
		for(i=0;i<n-1;i++)
		{
			if(a[i][i]==0)
			{
				int dem=0;
				for(j=0;j<n;j++)
				{
					if(a[i][j]==0)
						dem++;
				}
				if(dem>=n)
				{
					det=0;
					break;
				}
				else
				{
					for(k=0;k<n;k++)
					{
						det=-det;
						int temp=a[k][i];
						a[k][i]=a[k][dem];
						a[k][dem]=temp;
					}
				}
			}
			for(k=i+1;k<n;k++)
			{
				l=-a[k][i]/a[i][i];
				for(j=0;j<n;j++)
				{
					a[k][j]+=l*a[i][j];
				}
			}
		}
	}
	if(kt==0)
	{
		printf("mt hcn ko co det!\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			det*=a[i][i];
		}
		printf("dinh thuc cua ma tran la: det[A]= %d",det);
	}
	
}



main()
{
	int a[100][100],m,n;
	nhapmt(a,m,n);
	printf("\n ma tran ban dau la: \n");
	mtbd(a,m,n);
	detA(a,m,n);
}
