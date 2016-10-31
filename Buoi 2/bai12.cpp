#include<stdio.h>

int main()
{
	int n;
	do{
		printf("Nhap 2 <= n <= 90 : ");
		scanf("%d",&n);
		if(n <= 2 || n >= 90)
			printf("n phai lon hon 2 va nho hon 90 xin hay nhap lai.\n");
	}while(n<2||n>90);
	int a[100],i;
	a[0]=1;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf(" so Fibonacci  thu %d la: %d \n",i,a[i]);
		
	}
	
	
}
