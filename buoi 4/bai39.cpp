#include<stdio.h>

main()
{
	int a[10][10],k,dem=0,n;
	printf("nhap mt vuong cap: ");
	scanf("%d",&n);
	for(k=1;k<=4*n;k++)
	{
		if(dem<n){
			a[1][k]=k;
			dem++;
			if(dem==n)continue;
		}
	   if(dem<2*n-1&&dem>=n){
			int i=2;
			a[i][n]=k;
			i++;
			dem++;
			if(dem==2*n-1)continue;
		}
		if(dem<3*n-2&&dem>=2*n-1){
			int h=n-1;
			a[n][h]=k;
			h--;
			dem++;
			if(dem==3*n-2)continue;
		}
		 if(dem<3*n&&dem>=3*n-2){
			int l=n-1;
			a[l][n]=k;
			l--;
			dem++;
			if(dem==3*n)continue;
		}
		 if(dem<4*n-2&&dem>=3*n){
			int p=2;
			a[2][p]=k;
			p++;
			dem++;
			if(dem==4*n-2)continue;
		}
		 if(dem<4*n&&dem>=4*n-2)
		{
			int b=2,q=4*n;
			a[3][b]=q;
			q--;
			b++;
			dem++;
			if(dem==4*n)continue;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
