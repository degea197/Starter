#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int kttn(char a[])
{
	char k[100];
	strcpy(k,a);
	strrev(k);
	if(strcmp(k,a)==0)	return 1;
	return 0;
}
main()
{
	int i;
	char a[100];
	for(i=100000;i<=999999;i+=1)
	{
		if(kttn(itoa(i,a,10)))	printf("%d\t",i);
	}
}
