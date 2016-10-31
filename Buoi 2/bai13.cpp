#include<stdio.h>
#include<math.h>

int main()
{
    int  j,i,n,m;
	do{
		printf("nhap m > 0: ");
		scanf("%d",&m);
		printf("nhap n > m: ");
		scanf("%d",&n);
		if(m<0 || m>n)
			printf("\n loi nhap lai m va n!!!\n");
	} while(m<0||m>n);
	
	printf("so chinh phuong trong doan %d den %d la: ",m,n);
	for (i=m;i>=m && i<=n;i++)
	{
		 j=sqrt(i);
		 if(j*j==i)
		 {
		 	printf(" %d ",i);
		 }
		
	}
	
}
