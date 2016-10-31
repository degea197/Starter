#include <stdio.h>
#include <conio.h>
#include <string.h>

void ins(char s[], char s1[], char s2[])
{
    int kt=0,ns=strlen(s), ns1=strlen(s1), ns2=strlen(s2);
   int i=0, j, k;
   if(ns1>ns)	printf("khong tim thay s1 trong s");
   else if(strcmp(s,s1)==0)	{	printf("chuoi sau khi thay the la: %s",s2);  }
   else{
   	while(s[i])
   {
      k=i;
      j=0;
       while(s[k]==s1[j]) k++, j++;
      if(j==ns1)
      {
         memmove(s+i+ns2,s+i+ns1,ns-i-ns1+1);
         strncpy(s+i,s2,ns2);
         ns+=ns2-ns1;
         i+=ns2;
         kt=1;
      }
      else i++;
   }
   if(kt==1) printf("\nChuoi sau khi tim va thay the: %s", s);else printf("khong tim thay s1 trong s");
   }
}
int main()
{
    char s[255], s1[50], s2[50];
   printf("Nhap vao chuoi nguon:");
   gets(s);
   printf("\nNhap vao chuoi can tim:");
   gets(s1);
   printf("\nNhap vao chuoi thay the:");
   gets(s2);
   ins(s,s1,s2);   
}
