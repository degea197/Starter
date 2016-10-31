#include<stdio.h>

int nhapmang(int a[],int &n)
{
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void sxchen(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(a[j]>temp&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(int k=0;k<n;k++)
		printf("%5d",a[k]);
}
main()
{
	int a[100],n;
	nhapmang(a,n);
	sxchen(a,n);
}
