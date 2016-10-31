#include<stdio.h>

main()
{
	int a,b,i,j,ucln,bcnn;
	printf("Nhap lan luot a,b: ");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		for(i=1;i<=a;i++)
		{
			if(a%i==0&&b%i==0)
				ucln=i;
		}
		bcnn=(a*b)/ucln;
	}
	if(a>b)
	{
			for(i=1;i<=b;i++)
		{
			if(a%i==0&&b%i==0)
				ucln=i;
		}
		bcnn=(a*b)/ucln;
		
	}
	
	printf("\nuoc chung lon nhat va boi chung nho nhat lan luot la: %d %d ",ucln,bcnn);
	
}
