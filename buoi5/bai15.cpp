#include<stdio.h>							
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int nho=0,t;
void tong(char *a,char *b)
{
	int a1=strlen(a);
	int b1= strlen(b);
	char k[255];
	strrev(a);	strrev(b);
	strcat(a,"0");
	for(int i=0;i<=a1-b1;i++)
		strcat(b,"0");					
	for(int i=0;i<=a1;i++)
	{
		int t1=a[i]-48,t2=b[i]-48,t3=t1+t2;	
			if(t3+nho<=9)
			{
				t=t3+nho;
				nho=0;
			}
			else
			{
				t=(t3+nho)%10;
				nho=1;
			}
			k[i]=t+48;
	}
	if(k[a1-1]==NULL)	k[a1-1]=NULL;
	else	k[a1]=NULL;	
	strrev(k);
	printf("%s",k);
}
main()
{   
	char a[100],b[100];
	printf("nhap so a: ");
	gets(a);
	printf("nhap so b: ");
	gets(b);
	int a1=strlen(a),	b1=strlen(b);
	if(a1>=b1)
	
			tong(a,b);
	else
	
			tong(b,a);
}
