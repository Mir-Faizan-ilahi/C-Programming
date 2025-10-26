//program in C to check whether a number is prime or not 
#include<stdio.h>
int main ( )
{
	int n,i;
	int flag=1;
	printf("Enter the number:");
	scanf("%d,", &n);
	if(n<=1)
	{
		printf("The number is not prime");
		return 0;
	}
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("The number is prime");
	}
	else
	{
		printf("The number is not prime");
	}
	return 0;
}
