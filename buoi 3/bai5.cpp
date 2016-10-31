#include<stdio.h>
int i;
int odd(int n)
{
	int dem=0;
	for(i=1;i<=n;i+=2)
	{
		dem++;
	}
	return dem;
}
int even(int n)
{
	int dem=0;
	for(i=0;i<=n;i+=2)
	{
		dem++;
	}
	return dem;
}
int sxtd(int n)
{
	int a[100];
	a[0]=n%10;
	n/=10;
	i=1;
	while(n!=0)
	{
		a[i]=n%10;
		n/=10;
		if(a[i--]>=a[i])	return 0;
		i++;
	}
	return 1;
}
int sxgd(int n)
{
	int b[100];
	b[0]=n%10;
	n/=10;
	i=1;
	while(n!=0)
	{
		b[i]=n%10;
		n/=10;
		if(b[i--]<=b[i])	return 0;
		i++;
	}
	return 1;
}

main()
{
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("\nco %d so le ",odd(n));
	printf("\nco %d so chan ",even(n));
	if (sxgd(n))		printf("\n%d dc sap xep giam dan",n);
	else if(sxtd(n))	printf("\n%d dc sap xem tang dan",n);

	else    			printf("\n%d khong dc sap xep",n);
	
}
