#include<stdio.h>

main()
{
	int i,n,s=0;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	for (i=7;i<n;i+=7)
	{
		s+=i;
	}
	printf("tong các so tu nhien ko lon hon %d và chia het cho 7 la: %d ",n,s);
	
}
