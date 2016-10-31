#include<stdio.h>
#include<string.h>
#include<ctype.h>
void sosanglamma(int n)
{
	int m,i,k=0;	char lm[100];
	m=n/1000;
	int temp=n;
	for(i=0;i<m;i++)
	lm[k++]='M';
	n=n-m*1000;
	if(n>=900){lm[k++]='C';lm[k++]='M';n-=900;}
	else{m=n/500;for(i=0;i<m;i++) lm[k++]='D'; n=n-m*500;}
	if(n>=400){lm[k++]='C';lm[k++]='D';n-=400;}
	else{m=n/100;for(i=0;i<m;i++) lm[k++]='C'; n=n-m*100;}
	if(n>=90){lm[k++]='X';lm[k++]='C';n-=90;}
	else{m=n/50;for(i=0;i<m;i++) lm[k++]='L'; n=n-m*50;}
	if(n>=40){lm[k++]='X';lm[k++]='L';n-=40;}
	else{m=n/10;for(i=0;i<m;i++) lm[k++]='X'; n=n-m*10;}
	if(n>=9){lm[k++]='I';lm[k++]='X';n-=9;}
	m=n/5;for(i=0;i<m;i++) lm[k++]='V'; n=n-m*5;
	if(n==4){lm[k++]='I';lm[k++]='V';}	else{for(i=0;i<n;i++){lm[k++]='I';}	} 
	lm[k]='\0';			
	printf("%d sang so lam ma la: ",temp);puts(lm);
}
/*
void lammasangso(char s[])
{
	
	int so=0;
	for(int i=0;i<strlen(s);)
	{
		toupper(s[i]);
		if(s[i]=='M'){so+=1000;i++;}	
		else if(s[i]=='C'&&s[i++]=='M')	{so+=1000-100;i+=2;}
		if(s[i]=='D'){so+=500;i++;}	
		else if(s[i]=='C'&&s[i++]=='D')	{so+=500-100;i+=2;}
		if(s[i]=='C'){so+=100;i++;}	
		else if(s[i]=='X'&&s[i++]=='C')	{so+=100-10;i+=2;}
		if(s[i]=='L'){so+=50;i++;}	
		else if(s[i]=='X'&&s[i++]=='L')	{so+=50-10;i+=2;}
		if(s[i]=='X'){so+=10;i++;}	
		else if(s[i]=='I'&&s[i++]=='X')	{so+=10-1;i+=2;}
				
	}
	printf("\n%d",so);	
}
*/
main()
{
	int n;
	printf("nhap so can doi : ");	scanf("%d",&n);
	sosanglamma(n);
	//char s[255];
	//printf("nhap so lam ma: ");	scanf("%s",&s);
	//lammasangso(s);	
}
