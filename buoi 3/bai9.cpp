#include<stdio.h>
int j;
int snt (int n)
{
	for (j=2;j*j<=n;j++)
		if(n%j==0)	return 0;
	return 1;
}
int tlsnt(int n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	snt(s);
}
int sxtd(int n)
{
	int temp,h=9;
	while(n>0)
	{
		temp=h;
		h=n%10;
		n/=10;
		if(temp<h)	return 0;
	}
	return 1;
}

int main()
{
	int i;
	for(i=1000000;i<9999999;i++)
		if(snt(i)&&tlsnt(i)&&sxtd(i))
			printf("%5d\n",i);	

}
