
#include<stdio.h>

int kt(int n,int a[])
{
	for(int j=0;j<n;j++)
	{
		if(a[n]==a[j])	return 0;
	}
	return 1;
}

main()
{
	int a[50],j,n,i=1,temp;
	printf("nhap n: ");
	scanf("%d",&n);

	printf("nhap a[0] = ");
	scanf("%d",&a[0]);
	for(i=1;i<n;)
	{
		temp = i;
		printf("nhap a[%d] = ",i);
		scanf("%d",&a[i]);
		if(kt(i,a)==1)
			i++;
		else
			printf("\n nhap lai\n");		
		}
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
}
