#include <stdio.h>

int vtslt2(int a[], int n)
{
   int k,h,max=0,max2=0;
  for(k=0;k<n;k++)
  {
  	if(a[max]<a[k])
  		max=k;
  }
  for(h=0;h<n;h++)
  {
  		if(h==max)
  			continue;
  		if(a[max2]<a[h])
  		max2=h;
  }
  return max2;	
}

int slt2(int a[],int n)
{
	int i,j,temp;
  for (i = 0; i < 2; i++)
  {
  	for (j = i + 1; j < n; j++)
    {
     if (a[i] < a[j])
       { 
       		 temp = a[i];
             a[i] = a[j];
       		 a[j] = temp;
         	 
        }
   
    }
  }
  return a[1];
}
 
int bangnhau( int a[],int n)
{
	int q;
	for(q=0;q<n;q++)
	{
		if(a[q]!=a[q++])	return 0;
	}
	return 1;
}

int main()
{
  int a[100], i, j, n, temp,max=0;
 
 do
 {
 	printf("\nNhap so phan tu: ");
    scanf("%d",&n);
 }while(n<=0);
  
 	for (i=0;i<n;i++)
    {
      printf("\nNhap a[%d]=",i);
      scanf("%d",&a[i]);
    }
	if(bangnhau(a,n)==1)
		printf("khong co so lon thu 2");  
  	else
  	{
  		printf("\nvi tri bd cua so lon thu 2 la: %d",vtslt2(a,n));
		printf("\n so lon thu 2 la: %d ",slt2(a,n));
	}
  
    
}
