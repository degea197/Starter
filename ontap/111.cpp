#include<stdio.h>
FILE*f1=fopen("111.input","r");
FILE*f2=fopen("111.output","w");

int sum(int a)
{
	int s=0;
	while(a>0)
	{
		s+=a%10;
		a/=10;
	}
	return s;
}
int main()
{
	int a,t,x;
	fscanf(f1,"%d",&t);
	while(t--)
	{
		fscanf(f1,"%d",&a);x=sum(a);
		fprintf(f2,"%d\n",x);
	}
	fclose(f2);
	fclose(f1);
}
