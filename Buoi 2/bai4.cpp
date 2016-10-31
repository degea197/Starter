#include<stdio.h>

main()
{
	int temp,n,i,j,k,s1=0,s2=0,s3=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	temp=n;
	
	for ( i=1;i<temp;i+=2)
		s1+=i;
	printf("\ntong so le nho hon %d la: %d ",temp,s1);
	
	for ( j=0;j<temp;j+=2)
		s2+=j;
	printf("\ntong so chan nho hon %d la: %d ",temp,s2);
	
	for (k=1;k<temp;k++)
		s3+=k;
	printf("\ntong so tu nhien nho hon %d la: %d",temp,s3);
		
	
}
