#include<stdio.h>

main()
{
	int temp,n,i,j;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	temp=n;
	printf("so le nho hon %d la:",temp);
	for ( i=1;i<temp;i+=2)
		printf("  %d",i);
		printf("\n");
		printf("so chan nho hon %d la: ",temp);
	for ( j=0;j<temp;j+=2)
		printf("  %d",j);
	
}
