//program in C to find sum of series 1,2,3,4....,n
#include<stdio.h>
int main ( )
{
	int i,n,sum;
	sum=0;
	printf("Enter the number of terms you wish to add");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of the series is: %d", sum);
	return 0;
}
