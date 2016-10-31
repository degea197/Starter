#include<stdio.h>

main()
{
	int i,n,l=0;
	printf("nhap so tu nhien n: ");
	scanf("%d",&n);
	printf("cac uoc so cua %d la: ",n);
	for (i=1;i<=n/2;i++)
	{
		if(n % i == 0 )
		{
			printf("  %d",i);
			l+=1;
		}
		
	}
		printf("\n co %d uoc so ",l);
}
