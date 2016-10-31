#include<stdio.h>
#include<string.h>
#define ktdung "., ;:?/!"
char vh(char *s2)
{
	for(int i=0;i<strlen(s2);i++)
	{
		if(i==0)	strupr(&s2[i]);
		else strlwr(&s2[i]);
	}
}
main()
{
	char *s2,s1[100],s[100];
	printf("nhap sau s: ");
	gets(s);
	strcpy(s1,s);
	char *p=strtok(s,ktdung);
	int i=0;
	while(p!=NULL)
	{
		s2=p;
		vh(s2);
		printf("%s ", s2);
		p=strtok(NULL,ktdung);
	}
}
