#include <stdio.h>
        
main()
{
	int i,j,h;
	printf("Nhap chieu cao h:");
	scanf("%d",&h);
	for (i=1;i<=h;i++)
	{
	 for (j=1;j<=h-i;j++) printf(" ");
	 for (j=1;j<=(2*i-1)/2+1;j++) printf("%d",j);
	 for (j=(2*i-1)/2;j>=1;j=j-1) printf("%d",j);
	 printf("\n");
	}
	
	 
}
      
