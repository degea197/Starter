#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,delta,x1,x2;
	printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0 moi ban nhap a :");scanf("%f",&a);
	printf("nhap b :");	scanf("%f",&b);
	printf("nhap c :");	scanf("%f",&c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0) printf("Phuong trinh da cho vo so nghiem");
			else printf("Phuong trinh da cho vo nghiem");
		}	
		else
		{
			x1=-b/c;
			printf("Phuong trinh da cho co 1 nghiem:%f",x1);
		}	
	}
	else
	{
		delta=b*b-4*a*c ;
		if (delta<0) printf("Phuong trinh da cho vo nghiem");
		if (delta==0)
		{	
			x1=-b/(2*a);
			printf("Phuong trinh da cho co nghiem kep:%f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh da cho co 2 nghiem phan biet");
			printf("%f",x1);
			printf("%f",x2);
		}
	}
}
