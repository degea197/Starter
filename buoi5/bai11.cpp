#include<stdio.h>
#include<string.h>
#define kt "., ?!"

main()
{
	char s[255];
	printf("nhap sau ki tu: "); 	gets(s);
	char *p;
	p=strtok(s,kt);
	char d[10][10];
	int n=0;
	while(p!=NULL)
	{
		strcpy(d[n],p);
		n++;
		p=strtok(NULL,kt);
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%s ",d[i]);
	}
}
