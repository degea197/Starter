#include<stdio.h>

int stl(int n)
{
	int temp=n,h=0;
	while(n>0)
	{
		h=h*10+n%10;
		n/=10;
	}
	if(h==temp)	return 0;
	return 1;	
}
int cc(int n)
{
	while(n>0)
	{
		if(n%10==1||n%10==2||n%10==3||n%10==4||n%10==5||n%10==7||n%10==9)		return 0;
		n/=10;
	}
	return 1;
}
int tchc10(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	if(s%10!=0)	return 0;
	return 1;
}
main()
{
	int i;
	for(i=1000000;i<=999999999;i++)
		if(stl(i)&&tchc10(i)&&cc(i))
			printf("\n%5d",i);
}
