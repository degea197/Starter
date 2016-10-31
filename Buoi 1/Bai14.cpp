#include<stdio.h>

main()
{
	int rong,cao,i,j;
	printf("Nhap chieu rong va chieu cao cua HCN oke ");
	scanf("%d%d",&rong,&cao);
	for(i=1;i<=cao;i++)
	{
		for(j=1;j<=rong;j++)
		printf(" *");
		printf("\n");
	}
}

