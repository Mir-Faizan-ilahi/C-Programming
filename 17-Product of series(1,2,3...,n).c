//program in C to find product of series 1,2,3,4....n
#include<stdio.h>
int main ( )
{
	int i,n,mul;
	mul=1;
	printf("Enter the number of items you wish to multiply: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("The product of the series is: %d", mul);
	return 0;
}
