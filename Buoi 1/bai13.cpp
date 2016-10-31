#include<stdio.h>


main()
{
	int a,b,c;
	printf("nhap lan luot 3 so a b c ");
	scanf("%d%d%d",&a,&b,&c);
	if(a*a + b*b >= c*c && a*a-b*b<=c*c)
	{
		if(a==b && a==c && b==c)
			printf("\n  a b c la 3 canh cua tam gac deu ");
		
		else
		{
			
			if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
			{
			if (a==b||a==c||c==b)
				printf("\n  a b c la 3 canh cua tam gac vuong can");
			else
				printf("\n  a b c la 3 canh cua tam gac vuong");
			}
			else if (a==b||a==c||c==b)
			printf("\n  a b c la 3 canh cua tam gac can");
			
			else
			printf("\n a b c la 3 canh cua tam giac thuong");
			
		}			
	}
		
	else
		printf("\n  a b c khong la 3 canh cua tam gac ");
	
}
