#include<stdio.h>

main()
{
	int rong,cao,i,j;
	printf("Nhap chieu rong va chieu cao cua HCN oke ");
	scanf("%d%d",&rong,&cao);
	for(i=1;i<=cao;i++)
	{
		for(j=1;j<=rong;j++){
		if(i==1||i==cao)
			printf(" *");
		else{
			if(j==1||j==rong)
			printf(" *");
			else
			printf("  ");
		}
				
		}
		 
	
		printf("\n");
	}
}

