#include<stdio.h>
main()
{
	int n,i,odd=0,even=0,a[50];
	printf("nhap n: ");		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("a co %d so chan %d so le ",even,odd);
}
