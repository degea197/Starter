#include<stdio.h>

main()
{
	int h=1,j,i,n,a[1000];
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=h;j++)
		{
		if (a[i]==a[j])
		dem+=1;
		}
		h++;	
	}
	
	printf(" co %d cap 2 phan tu lien tiep bang nhau", dem);
}
