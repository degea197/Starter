#include<stdio.h>

main()
{
	int a,b;
	printf ("nhap lan luot 2 so nguyen a va b: ");
	scanf("%d %d",&a,&b);
	
	if(a<b)
		printf("\n%d nho hon %d",a,b);
	else
		printf("\n%d lon hon %d",a,b);
	if(a==b)
		printf("\n%d bang hon %d",a,b);
	
		
}
