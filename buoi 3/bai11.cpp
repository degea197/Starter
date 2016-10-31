#include<stdio.h>

int snt(int n)
{
	int j;
	for(j=2;j*j<=n;j++)
		if(n%j==0)	return 0;
	return 1;
}
int allsnt(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	snt(s);
}
int dsnt(int n)
{
	int h=0,temp=n;
	while(n>0)
	{
		h=h*10+h%10;
		n/=10;
	}
	snt(h);
}
main()
{
	int i;
	for(i=1000000;i<=9999999;i++)
		if(snt(i)&&allsnt(i)&&dsnt(i))
			printf("%5d\n",i);
}
