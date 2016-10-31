#include<stdio.h>
FILE*f1=fopen("114.in","r");
FILE*f2=fopen("114.OUT","W");

int tong(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;n/=10;
	}
	return s;
}
int  sum10(int n)
{
	int kt=1;
	if(tong(n)%10==0)	kt=0;
	if(kt==1)	return 0;
	return 1;
}
main()
{
	int n,t;
	fscanf(f1,"%d",&t);
	while(t--)
	{
		fscanf(f1,"%d",&n);
		if(sum10(n))	fprintf(f2,"YES\n");
		else	fprintf(f2,"NO\n");
	}
	fclose(f1);
	fclose(f2);
}













