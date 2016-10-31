#include<stdio.h>

main()
{
	int a[1000],n,i,k,maxx,temp;
	printf("Nhap n: ");
	scanf("%d",&n);
	maxx=0;
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
		 temp=a[i];
		if (temp>=maxx)
			maxx=temp;
	}
	printf("so lon nhat la: %d",maxx);
		
}
