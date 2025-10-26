//program in C to display table of all integers from 2 to 10 (2x1=2,2x2=4,......10x10=100)
#include<stdio.h>
int main ( )
{
	int i,n,x;
	printf("Enter the number upto you need the table");
	scanf("%d", &n);
	for(i=2;i<=10;i++)
	{
		printf("The table of %d\n", i);
		for(x=1;x<=n;x++)
		{
			printf("%dx%d = %d\n",i,x,i*x);
		}
	}
	return 0;
}
