#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
	char s[255];
	int u,e,o,a,i,nguyenam,phuam=1,so=0;
	u=e=o=a=i=0;
	printf("nhap chuoi s: ");	gets(s);
	int n= strlen(s),kt=1;
	for(int i=0;i<n;i++)
	{
		if(((int)s[i]>=48)&&((int)s[i]<=57))
			so++;
		switch (toupper(s[i]))
		{
			case 'U':	u++;	break;
			case 'E':	e++;	break;
			case 'O':	o++;	break;
			case 'A':	a++;	break;
			case 'I':	i++;	break;
			default:
				if(((int)s[i]>=65)&&((int)s[i]<=90)||((int)s[i]>=97)&&((int)s[i]<=122))
				{
					phuam++;
					break;
				}
		}
	}
	nguyenam=u+e+o+a+i+1;
	printf("so nguyen am la: %d \nso phu an la: %d \nso chu so la : %d",nguyenam,phuam,so);
}
