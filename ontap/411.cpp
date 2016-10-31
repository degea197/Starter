#include<stdio.h>
#include<string.h>

FILE	*f1= fopen("411.in","r");
FILE	*f2= fopen("411.out","w");
struct	Word
{
	char word[10];
	int count;
};
int sophantu =0;
Word	w[100];
main()
{

			int kt=1;

	while(!feof(f1))
	{
		char s[10];
		fscanf(f1,"%s",&s);
		for(int i=0;i<sophantu;i++)
			if(strcmp(w[i].word,s)==0)
			{
				kt=0;
				w[i].count++;
				break;
			}
		if(kt==1)
		{
			strcpy(w[sophantu].word,s);
			
			w[sophantu].count=1;
			sophantu++;
		}
	}

        fprintf(f2,"%d",sophantu);

}
