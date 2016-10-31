#include<stdio.h>

main()
{
	int n,i=2,kt=0;
	do{
		printf("Nhap n>1: ");
		scanf("%d",&n);
		if(n<=1)
			printf("%d ko the phan thich thanh cac thua so nguyen to dc!! nhap lai di!\n");
	}while(n<=1);
	
	while(n!=1)
	{
		if(n%i==0)
		{
			printf("%d",i);
			n/=i;
			if(n==1)
			 	kt=1;
			 if(kt==0)
			 	printf("*");
		}
		else
			i++;
	}
	
}
