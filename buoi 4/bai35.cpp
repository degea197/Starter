#include<stdio.h>
void mtbd(int a[10][10],int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
int mttgt(int a[][10],int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
			if(a[i][j]!=0)	return 0;
	}return 1;
}
int mttgg(int a[][10],int m)
{
	for(int i=1;i<m;i++)
	{
		for(int j=0;j<i;j++)
			if(a[i][j]!=0)	return 0;
	}return 1;
}

main()
{
	int a[10][10],b[10][10],m,n;
	printf("nhap MT vuong cap : ");		scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n ma tran A: \n");
	mtbd(a,m);
	if(mttgt(a,m)&&mttgg(a,m))
		printf("ko phai MT tg");
	else if(mttgt(a,m))
		printf("MT tam giac tren");
	else if(mttgg(a,m))
		printf("MT tam giac giuoi");
	else
		printf("ko phai MT tg");
}
