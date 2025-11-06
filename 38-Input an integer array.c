//program in C to input an integer array from the user and display the same 
#include<stdio.h>
int main ( )
{
	int a[100],i,n;
	printf("Enter the size of an array");
	scanf("%d", &n);
	printf("Enter an array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

