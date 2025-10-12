//program in C to find the roots of a quadratic equation(ax²+bx+c=0)
#include<stdio.h>
#include<math.h>
int main ( )
{
	float a,b,c,D,r1,r2;
	printf("Enter the values of a,b and c: ");
	scanf("%f%f%f", &a, &b, &c);
	D=b*b-4*a*c;
	if(D>0)
	{
		r1=(-b+sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		printf("The equation has two real roots= %f and %f", r1, r2);
	}
	else if(D==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("The equation has two real and equal roots=%f and %f" , r1,r2);
	}
	else
	{
		printf("The equation has imaginary roots");
	}
	return 0;
}
