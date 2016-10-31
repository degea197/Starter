#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int i,j;
void nhapmang(int n, int a[])
{
	for(i=0;i<n;i++)
	{
		a[i]=0+ rand() % 1000;
	}
}
int cout(int n, int a[])
{
	int b[100],temp;
	for(i=0;i<n;i++)
	{
		int dem=0,kt=0;
		for(j=i+1;j<n-1;j++)
		{
			if(a[i]==a[j])
			{
			
			i++;
			kt=1;
			break;
			}
		}
		if(kt==0)
		printf("%d ",a[i]);
	}
}
main()
{
int n,a[100];
printf("nhap n: ");
scanf("%d",&n);
nhapmang(n,a);
cout(n,a);

}

