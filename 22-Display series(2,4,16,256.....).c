//program in C to display the series (2,4,16,256......n)
#include<stdio.h>
#include<math.h>
int main ( )
{
	int i,n,x;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		x=pow(2,pow(2,i-1));
		printf("%d ", x);
	}
	return 0;
}
