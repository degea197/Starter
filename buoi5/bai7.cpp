#include<stdio.h>
#include<string.h>
#define ktdung "., ;:?/!"
main()
{
	char s[100],s1[100];
	printf("nhap sau s: "); gets(s);
	char *p;
	int a[100],i=0,dem=0;
	strcpy(s1,s);
	p=strtok(s,ktdung);
	while(p!=NULL)
	{
		a[i]=strlen(p);
		p=strtok(NULL,ktdung);
		i++;
		dem++;
	}
	int max=a[0];
	int k,dem1=0;
	for(int j=1;j<dem;j++)
	{
		if(max<a[j])	
		{ 
			max=a[j];
			 k=j;
		}
	}
	char *h = strtok(s1, ktdung);
	while(h!=NULL)
	{	
		if(dem1 == k)	printf("\nky tu dai nhat la : %s\n vitri %d trong chuoi \n co %d ky tu",h,k+1,max);
		h=strtok(NULL,ktdung);
		dem1++;
	}
}
