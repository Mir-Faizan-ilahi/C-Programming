//program in C to swap two integers
#include<stdio.h>
int main ( )
{
	int a,b,temp;
	printf("Enter two integers");
	scanf("%d%d", &a,&b);
	printf("Before swapping numbers are %d and %d\n", a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Numbers after swapping are %d and %d\n", a,b);
	return 0;
}
