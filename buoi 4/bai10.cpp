#include<stdio.h>


void nhapmang(int n, int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}

int ssmang(int n, int a[], int x)
{	
	int temp=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x);
		temp++;
	}
	return temp;
	
}	
int cout(int n,int a[])
{
	int i,kt=0,temp1,temp=ssmang(n,a,a[0]);
	for(i=1;i<n;i++)
	{
		temp1=ssmang(n,a,a[i]);
		if(temp<temp1)
		{
			temp=temp1;
			kt=i;
		}
	}
	return a[kt];
}
int main()
{
	int a[20],n;
	printf("nhap n:");
	scanf("%d",&n);
	nhapmang( n, a);
	printf("phan tu co so lan xuat hien nhieu nhat trong a la: %d",cout(n,a) );
}
