//program in C to display the series: 12345 12345 12345.....(n times) [using nesting of loops]
#include<stdio.h>
int main ( )
{
	int i,n,j;
	printf("Enter the number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d", j);
		}
		printf(" ");
	}
	return 0;
}
