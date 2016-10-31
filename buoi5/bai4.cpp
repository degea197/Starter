#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char s[100];
	printf("nhap sau s: ");	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(i%2==0)	strupr(&s[i]);
		else	strlwr(&s[i]);
	}
	puts(s);
}
