#include<stdio.h>

int kiemtra(int a[],int n,int i) 
{ 
    int t=a[i]; 
    for (int j=0;j<i;j++) 
        if (t==a[j])return 0; 
    return 1; 
}

main()
{
	int n,a[100];
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d]  = ",i);
		scanf("%d",&a[i]);
	}
	for(int k=0;k<n;k++)
	{
		int dem=0;
		for(int j=0;j<n;j++)
		{
			if(a[k]==a[j])
				dem++;
		}
		if(k==0)
			printf("\n so lan xuat hien cua %d la: %d ",a[k],dem);
		else if (kiemtra(a,n,k))
			printf("\n so lan xuat hien cua %d la: %d ",a[k],dem);
	}
}
