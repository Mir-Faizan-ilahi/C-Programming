//program in C to find the factorial of a number entered the the user.
#include<stdio.h>
int main ( )
{
	int i,n,factorial;
	factorial=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("The factorial of %d is: %d", n,factorial);
	return 0;
} 
