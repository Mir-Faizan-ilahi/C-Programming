//program in C to display the pattern ***** *** ** *
#include<stdio.h>
int main ( )
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		{
			if(i==4)
			continue;
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
