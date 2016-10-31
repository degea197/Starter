#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}

int uoc(int n,int i){
	
	
		if(n%i==0)
			 return 1;
	return 0;
	
}

main(){
	int n;
	do{
		printf("nhap n:"); scanf("%d",&n);
		if(n<0) printf("moi nhap lai gia tri n");
	}while(n<0);
	int dem=0,i;
	printf("cac uoc cua n:");
	for(i=1;i<=n;i++){
		if(uoc(n,i)) {
			printf("%5d",i);
			dem++;}
	} 
	printf("\n%d co %d uoc",n,dem);
	printf("\ncac uoc la so nguyen to:");
	for(i=2;i<=n;i++){
		if(snt(i)&&uoc(n,i)){
			printf("%5d",i);
		}
	}
	
}
