#include<stdio.h>

main()
{
	float a,b,c,d,imax;
	printf("nhap lan luot 4 so thuc a,b,c,d: ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	imax=a;
	
	if (a==b&&a==c&&a==d)
		printf ("\n khong co so lon nhat");
	else{
		
	if (imax<b)
		imax=b;
	if (imax<c)
		imax=c;
	if (imax<d)
		imax=d;
	printf("\nso lon nhat la: %f",imax);
		
	}

	
}
