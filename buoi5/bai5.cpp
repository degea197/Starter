#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	char s[100],*p;
	int dem=0,dem1=0,dem2=0,dem3=0,dem4=0,dem5=0,dem6=0,dem7=0,dem8=0;
	printf("nhap sau s: ");	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='A') dem3++; if(s[i]=='a')	dem4++;
		if(s[i]=='B') dem5++; if(s[i]=='b')	dem6++;
		if(s[i]=='C')dem7++; if(s[i]=='c')	dem8++;
	}
	printf("\n a.\n");
	printf("\nso ky tu A  la: %d ",dem3);
	printf("\nso ky tu a  la: %d ",dem4);
	printf("\nso ky tu B la: %d ",dem5);
	printf("\nso ky tu b  la: %d ",dem6);;
	printf("\nso ky tu C la: %d ",dem7);
	printf("\nso ky tu c  la: %d ",dem8);
	
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='A'||s[i]=='a')	dem++;
		if(s[i]=='B'||s[i]=='b')	dem1++;
		if(s[i]=='C'||s[i]=='c')	dem2++;
	}
	printf("\n b.\n");
	printf("\nso ky tu A & a la: %d ",dem);
	printf("\nso ky tu B &b la: %d ",dem1);
	printf("\nso ky tu C & c la: %d ",dem2);
}
