#include <stdio.h>
 main()
{
  int a[100], i, j, n, temp;
 
  printf("Nhap so phan tu:");
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      printf("\nNhap a[%d]=",i);
      scanf("%d",&a[i]);
    }
  printf("\n");
 
  for (i = 0; i < n - 1; i++)
  {
  	for (j = i + 1; j < n; j++)
    {
     if (a[i] > a[j])
       {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        }
    }
  }
    
    for (j=0; j<n; j++)    printf(" %d ",a[j]);

}
