//program in C to display the fibonacci series:0 1 1 2 3 5 8 13 21.....(upto n terms)
#include<stdio.h>
int main ( )
{
	int i,n,a=0,b=1,c;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	printf("The series is:%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}

