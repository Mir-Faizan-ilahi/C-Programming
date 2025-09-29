//program in C to check whether a number is positive or negative
#include<stdio.h>
int main ( )
{
	int x;
	printf("Enter the number");
	scanf("%d", &x);
	if(x>0)
	{
		printf("%d is postive", x);
	}
	else if(x<0)
	{
		printf("%d is negative", x);
	}
	else
	{
		printf("The number is zero");
	}
	return 0;
}
