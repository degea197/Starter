#include<stdio.h>s

main()
{
	int i,j,n,h;
	printf("nhap gia tri n >1 : ");
	scanf("%d",&n);
	h=n;
	if(n<=1)
		printf("%d khong la so nguyen to",n);
	else if(n==2)
		printf("%d la so nguyen to",n);
	else
	{	
		printf("\n so nguyen to tu %d ve 2 la:  ",n);
		for(j=(h-1);j>=2;j--)
		{
			int k=1;
			for(i=2;i<j;i++)
			{
				if(j%i==0)
				{
					k=2;
					break;
				}
			
			}
				if(k==1)
				printf("%d ",j);
		}
		
		
		
		
	}
	
}
