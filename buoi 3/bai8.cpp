#include<stdio.h>
int j;

int snt(int n)
{
	for(j=2;j*j<=n;j++)
		if(n%j==0)	return 0;
	return 1;
}
int stn(int n)
{
	int h=0,temp=n;
	while(n>0)
	{
		h=h*10+n%10;
		n/=10;
	}
	if(h!=temp)		return 0;
	return 1;
}
int kocoso4(int n)
{
	while (n>0)
	{
		if(n%10==4)		return 0;
		n/=10;
	}
	return 1;
}

main()
{
	int i;
	for(i=10000;i<9999999;i++)
		if(stn(i)&&snt(i)&&kocoso4(i))
			printf("%5d\n",i);
}
