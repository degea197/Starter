#include<stdio.h>
#include<string.h>
#include<conio.h>
#define kt " =!?.:;,"

main()
{
	char *p,s[100],a[100][30],t[30];	int k=0,i,m,n;
	printf("nhap sau s: ");	gets(s);
	p=strtok(s,kt);
	while(p!=NULL)
	{
		strcpy(	a[k],p);	k++;
		p=strtok(NULL,kt);
	}
	for(n=0;n<k-1;n++)
		for(i=n+1;i<k;i++)
		{
			if(strcmp(a[n],a[i]) > 0)
			{
				strcpy(t,a[n]);
     			strcpy(a[n],a[i]);
   				strcpy(a[i],t);
			}
		}
	for(i=0;i<k;i++)
		printf("%s ",a[i]);
}
