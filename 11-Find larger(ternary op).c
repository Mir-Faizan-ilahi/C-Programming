//program in C to find larger of two distinct integers(using ternary operators)
#include<stdio.h>
int main ( )
{
	int a,b,larger;
	printf("Enter two distinct integers");
	scanf("%d %d", &a,&b);
	larger=(a>b) ? a:b;
	printf("The larger number is %d\n",larger);
	return 0;
}
