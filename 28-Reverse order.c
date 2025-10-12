//program in C to display the digits of any natural number in reverse order
#include<stdio.h>
int main ( )
{
	int n,r;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Digits in reverse order:");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	return 0;
}
