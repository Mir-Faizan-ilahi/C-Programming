//program in C to display contents of an integer array in reverse order
#include<stdio.h>
int main ( )
{
	int a[100],i,n;
	printf("Enter the size of an array");
	scanf("%d", &n);
	printf("Enter the array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d" ,&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
