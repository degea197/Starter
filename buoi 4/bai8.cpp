#include<stdio.h>

int snt(int a,int n)
{
	int j;
	if(a<2)		return 0;
	for(j=2;j*j<=n;j++)
	{
		if(a%j==0)	return 0;
	}
	return 1;
}
main()
{
	int N,a[10000];
	do
	{
		printf("nhap vao N (0<N<=10000): ");
		scanf("%d",&N);
		if(N<=0 || N>10000)
		printf("loi!!!!");
		
	}while(N<=0 || N>10000);
	int temp1,temp2,dem1=0,dem2=0,s1=0,s2=0,i,j;
	for(i=0;i<N;i++)
	{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{		
		if(a[i]<0)
		{	
			temp1=i;
			dem1++;
			s1+=a[temp1];	
		}
		else
		{	
			temp2=i;
			dem2++;
			s2+=a[temp2];
		}	
	}
	if(dem1 !=0 )
	printf("TB cong cua so am la: %f\n",(float)s1/dem1);
	if(dem2 !=0 )
	printf("TB cong cua so am la: %f\n",(float)s2/dem2);
	
	printf("so NT la: 2\t ");
	for(i=0;i<N;i++)
	{
		if(snt(a[i],N))
			printf("%d\t",a[i]);
		
	}
}
