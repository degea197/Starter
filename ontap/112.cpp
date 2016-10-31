#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE*f1=fopen("112.in","r");
FILE*f2=fopen("112.out","w");
void bai2(int t)
{
	char s[225];int kt=1;
	itoa(t,s,10);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[0]==s[strlen(s)-1])	kt=0;
	}
	if(kt==0)	fprintf(f2,"\nYES");
	else	fprintf(f2,"\nNO");
}
main()
{
	int t,n;
	fscanf(f1,"%d",&n);
	while(n--)
	{
		fscanf(f1,"%d",&t);
		bai2(t);
	}
}
