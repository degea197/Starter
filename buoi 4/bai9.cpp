#include<stdio.h>


void NhapMang(int &n, int a[20])
{
	int i;	
   for(int i=0; i<n; i++)
   {
      printf("\nNhap a[%d] = ", i); scanf("%d", &a[i]);
   }
}
int MangGiam(int n, int a[20])
{
    int b=n-1,c=0;
    while(b>c)
    {
    	if(a[b]!=a[c])	return 0;
    	b--;
    	c++;
	}return 1;
}


int main()
{
	
   int i,n, a[20],b[20];
   printf("Nhap n = "); scanf("%d", &n);
   NhapMang(n, a);
   if(MangGiam(n, a)==1)
   		printf("mang dx");
	else
		printf("mang ko dx");  
}
