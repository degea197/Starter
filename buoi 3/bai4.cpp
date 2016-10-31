#include<stdio.h>

int tong(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
main()
{
	int i,n;
	do
	{
		printf("nhap n: ");
		scanf("%d",&n);
		if(n<0)
			printf("loi! nhap lai! \n");
	}while(n<0);
	int temp=n;
	printf("\ntong ca chu so chua %d la: %d \n",n,tong(n));
		int h,k=2,kt=0;
	printf("%d= ",temp);
	while(n!=0)
	{
		if(n%k==0)	
		{
			n/=k;
			printf("%d ",k);
			if(n==1)	kt=1;
			if(kt==0)	printf("*");		
		 } 
		 else
		 {
		 	k++;
		 }
	}
}
