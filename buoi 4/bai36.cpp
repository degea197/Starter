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
	printf("\n");
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
			do{
				printf("a[%d][%d]= ",i,j);
				scanf("%d",&a[i][j]);
				if(a[i][j]<0||a[i][j]>100)
					printf("\nloi roi kia!!\n");
			}while(a[i][j]<0||a[i][j]>100);
		}
	}
	printf("mt A la: \n");
	mtbd(a,m,n);
	int h,k;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for( k=0;k<m;k++)
			{
				
				for((k==j) ? h=j+1: h=0;h<n;h++)
				{
					if(a[i][j]>a[k][h])
					{
						int temp =a[i][j];
						a[i][j]=a[k][h];
						a[k][h]=temp;
					}
				}
			}
		}
	}
	printf("\nMT sx tu nho den lon: \n");
	mtbd(a,m,n);
}
