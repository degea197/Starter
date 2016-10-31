#include<stdio.h>

int stn(int n)
{	
	int m=n,h=0;
	{
		while(n>0)
		{
			h=h*10+n%10;
			n/=10;
		}
	
	}
	if(h==m)	return 1;
	return 0;
}
int tong(int h)
{
	int s=0;
	while(h>0)
	{
		s+=h%10;
		h/=10;
	}
	if(s%10==0)	return 1;
	return 0;
}

main()
{
	int i;
	for(i=100000;i<=999999;i++)
		if(stn(i)&&tong(i)) 
			printf("%20d",i);
	
}
