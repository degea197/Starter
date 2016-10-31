#include<stdio.h>

int ucll(int i ,int j )
{
	while(i!=j)
	{
		if(i>j)
		i=i-j;
		else
		j=j-i;
	}
	if(i==1||j==1)	return 1;
	return 0;
}

main()
{
	int temp,i,j,a,b;
	do
	{
		printf("nhap a: ");		scanf("%d",&a);
		printf("nhap b: ");		scanf("%d",&b);
		if(a>b)
			printf("loi! nhap lai a<=b oke");
	}while(a>b);
	for(i=a;i<b;i++)
		for(j=a+1;j<=b;j++)
			if((ucll(i,j)))		printf("%d va %d\n",i,j);
		
}
