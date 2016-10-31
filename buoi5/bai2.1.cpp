#include<stdio.h>
#include<string.h>

#define ktdung "., ;:?/!"
main()
{
	char s1[100],s[100];
	printf("nhap sau s: ");
	gets(s);
	strcpy(s1,s);
	char *p=strtok(s,ktdung);
	int dem=0;
	while(p!=NULL)
	{
		p=strtok(NULL,ktdung);
		dem++;
	}
	printf("so tu cua sau ki tu "  ); 
	puts(s1);
	printf("la %d",dem);
}
