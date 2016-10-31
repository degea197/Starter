#include<stdio.h>
#include<math.h>

int i;

void nhapmang(int n, int a[])
{
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int ssavsx(int n ,int a[], int x)
{
	int tem1,temp,b[100];
	for(i=0;i<n;i++)
	{
		b[i]=abs(a[i]-x);
	}
	int t,min=0;
	for(i=1;i<n;i++)
	{
		if(b[min]>b[i])
		min=i;
		
	}	
	return min;
}

int main()
{
	int a[20],n,x;
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap x:");
	scanf("%d",&x);
	nhapmang( n, a);
	printf("vi tri phan tu a co gia tri gan %d nhat la : %d",x,ssavsx(n,a,x));
}
