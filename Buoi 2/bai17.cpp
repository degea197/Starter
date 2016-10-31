#include <stdio.h>
main()
{
	int n;
	float c,s;
 	printf("Nhap sai so c=");
	scanf("%f",&c);
	s=1;n=1;
	while (1 / (float)(2*n-1)>c)
	{
		if (n % 2 ==0) s=s + 1 / (float)(2*n+1);
		else s=s - 1/(float)(2*n+1);
		n++;
	}
	printf("pi=%f",4*s);
}
