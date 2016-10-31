#include<stdio.h>

main()
{
	int i,n,k=1,h;
	printf("nhap gia tri n >1 : ");
	scanf("%d",&n);
	h=n;
	if(n<=1)
		printf("%d khong la so nguyen to",n);
	else if(n==2)
		printf("%d la so nguyen to",n);
	else
	{
		for(i=2;i<h;i++)
		{
			if(h%i==0)
			{
				k=2;
				break;
			}
		}
		
		printf("%d %s so nguyen to ",n,(k==2) ? "ko la" : "la");
		
		
		
	}
	
}
