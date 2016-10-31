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
int snt(int temp)
{
	
	for(int i=2;i*i<=temp;i++)
	{
		if(temp%i==0)	return 0;
	}return 1;
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
	printf("so nguyen to trong ma tran la: \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int temp=a[i][j];
			if(snt(temp))
				printf("%d\t",a[i][j]);
		}
	}
	
	
}
