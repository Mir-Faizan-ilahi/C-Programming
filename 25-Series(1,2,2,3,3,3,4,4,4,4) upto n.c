//program in C to display the series; 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 ....(upto n) [nesting of loops]
#include<stdio.h>
int main ( )
{
	int i,n,j;
	printf("Enter the number of terms");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return 0;
}
