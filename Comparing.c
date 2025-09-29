//program in C to compare two integers
#include<stdio.h>
int main ( )
{
	int num1,num2;
	printf("Enter first integer");
	scanf("%d", &num1);
	printf("Enter second integer");
	scanf("%d", &num2);
	if(num1>num2)
	{
		printf("%d is greater than %d", num1,num2);
	}
	else if(num1<num2)
	{
		printf("%d is smaller than %d", num1,num2);
	}
	return 0;
}
