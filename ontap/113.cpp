#include<stdio.h>
FILE*f1=fopen("113.in","r");
FILE*f2=fopen("113.out","w");
int UCLN(int a,int b)
{
	return b?UCLN(b,a%b):a;
}
int bcnn(int  a,int b)
{
 return a/UCLN(a,b)*b;
}
main()
{
	int t,a,b; int k;
	fscanf(f1,"%d",&t);
	while(t--)
	{
		fscanf(f1,"%d %d",&a,&b);
		k=bcnn(a,b);
		fprintf(f2,"\n%d",k);
	}
}
