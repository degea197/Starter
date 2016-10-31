 #include<stdio.h>
using namespace std;
int a[100][100],kq=0;
int dinhthuc(int a[][100],int n)
{
	if(n==1) return a[1][1];
	int b[100][100],ss=0;
	for(int i=1;i<=n;i++)
	{
		int dem=1;
		for(int j=1;j<=n;j++)
		{
			if(i==j) continue;
			for	(int k=2;k<=n;k++)
			{
				b[dem][k-1]=a[j][k];
			}
			dem++;
		}
		if(i%2==1) ss=ss+a[i][1]*dinhthuc(b,n-1);
		else ss=ss-a[i][1]*dinhthuc(b,n-1);
	}
	return ss;
}
main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	printf("a[%d][%d]= ",i,j);
	scanf ("%d",&a[i][j]);
	}
	}
	printf("ma tran: \n");
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	printf("%d  ",a[i][j]);
	}
	printf("\n");
	}
	printf("\ndinh thuc = %d",dinhthuc(a,n));
}
