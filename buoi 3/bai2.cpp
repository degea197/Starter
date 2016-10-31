#include<stdio.h>
#include<math.h>

int snt(int n)
{
	int j;
	for(j=2;j<=sqrt((float)n);j++)
	{
		if(n%j==0) return 0;
	}
	return 1;
}
int odd(int n)
{
	int h,j;
	while(n>0)
	{
		h=n%10;
		n/=10;
		if(h%2==0)	return 0;
	}
	return 1;
}

main()
{
	int i;
	for(i=100000;i<999999;i++)
		if(snt(i)&&odd(i))
			printf("%10d",i);

}
