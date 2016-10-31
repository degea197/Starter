#include<stdio.h>
#include<math.h>

main()
{
	int n,k,i,j,s1=1,s2=1; int q1=1,q2=1,b1=0,b2=0,so1,so2;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	printf("%d co bnhieu chu so: ",n);
	scanf("%d",&k);
	int l=k/2,h=n,e=l-1;
	for(i=k-1;i>=l;i--)
	{
		so1=h/pow(10.0,i);
		h%= (int)pow(10.0,i);
		for(j=e;j<=e;j--)
		{
		 q1*=so1 *pow(10.0,j);
       	 b1+=q1;
		 
		}
		e+=2;
		q1=1;
		
	}
	printf("%d",b1);
	
}
