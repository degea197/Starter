#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

main()
{
	int n;
	//char*c=(char*)malloc(sizeof(char));
	char c[100];
	int k;
	printf("nhap so can doi: ");
	scanf("%d",&k);

	for(int i=2;i<=36;i++)
	{
		printf("\ntu he 10: %d ----->he %d : %s ",k,i,itoa(k,c,i));
	}
}
