#include<stdio.h> //ax+b=0

main()
{
	float a,b;
	printf("nhap lan luot a va b: ");
	scanf ("%d %d",&a,&b);
	if(a==0){
		if(b==0)
		printf("Phuong Trinh vo so nghiem");
		else
		printf("phuong trinh vo nghiem");
	}
	else{
		if(b==0)
		printf("Phuong trinh vo so nghiem");
		else
		printf("Phuong trinh co 1 nghiem: %f",-b/a);
	}
}
