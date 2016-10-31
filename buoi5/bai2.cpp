#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char a[255];
	int dem=1;
	printf("nhap sau ki tu: ");
	gets(a);
	for(int i=0;i< strlen(a);i++)
	{
		if(a[i]<0||(a[i]>9&&a[i]<'A')||(a[i]>'Z'&&a[i]<'a')||a[i]>'z')
			if  ( (a[i-1]>='A' && a[i-1]<='Z')||(a[i-1]>='a' && a[i-1]<='z')||(a[i-1]>='0' && a[i-1]<='9'))	 
				dem++;
	}
	printf("\n so tu trong sau la: %d ",dem);
}

