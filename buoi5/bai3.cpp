#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stn(char a[])
{
	for(int j=0;j<=(strlen(a))/2;j++)
	{
		if(a[j]!=a[strlen(a)-1-j])	return 0;
	}
	return 1;
}
main()
{
	char a[1000];
	for(int i=100000;i<=999999;i++)
	{
	    if(stn(itoa(i,a,10)))
			printf("%d\t",i);
	}
}
