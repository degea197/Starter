#include<stdio.h>

main()
{
	int m,n;
	do{
		printf("nhap n > 1: ");
		scanf("%d",&n);
		printf("nhap m >1: ");
		scanf("%d",&m);
		if(n<1||m<1)
			printf("loi! nhap lai \n");
	}while(n<1||m<1);
	int i,kt=0;
	if(m<n)
	{
		for(i=2;i<=m;i++)
		{
			if(m%i==0&&n%i==0)
			{
				kt=1;
				break;
			}
		}
		printf("%d, %d %s so nguyen to cung nhau",m,n,(kt==0) ? "la" : "khong la");
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			if(m%i==0&&n%i==0)
			{
				kt=1;
				break;
			}
		}
		printf("%d, %d %s so nguyen to cung nhau",m,n,(kt==0) ? "la" : "khong la");
	}
	}
	

