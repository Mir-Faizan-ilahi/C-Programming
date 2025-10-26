//program in C to find sum of the series 1+1/2+1/4+1/6......+1/n
#include<stdio.h>
#include<math.h>
int main ( )
{
	int n,i;
	float sum=0;
	printf("Enter the number of terms");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/pow(2,(i-1)));
	}
	printf("The sum is %f", sum);
	return 0;
}

