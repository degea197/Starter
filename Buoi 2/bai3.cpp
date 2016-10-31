#include<stdio.h>

main()
{
	int i,n;
	float s=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		s+=1.0/i;
	printf("\ntong s can tim la: %3f ",s);
	
}
