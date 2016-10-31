#include<stdio.h>
#include<string.h>
#define kt "., ?!"
main()
{
	char d[10][10],s[255];
	int n=0,i;
	printf(" nhap sau s: ");	gets(s);
	printf("\nho dem ten:\n ");
	puts(s);
	char *p= strtok(s,kt);
	while(p!=NULL)
	{
		 strcpy(d[n],p);
		p=strtok(NULL,kt);
		n++;
	}
	printf("\nten ho dem:\n ");
	printf("%s ",d[n-1]);
	for(i=0;i<n-1;i++)
	{
		printf("%s ",d[i]);
	}
}
