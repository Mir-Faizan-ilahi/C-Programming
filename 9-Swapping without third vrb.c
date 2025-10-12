//program in C to swap two integers without using third variable
#include<stdio.h>
int main ( )
{
	int x,y;
	printf("Enter two integers");
	scanf("%d%d", &x,&y);
	printf("Before swapping numbers are %d and %d\n", &x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping numbers are %d and %d\n", &x,&y);
	return 0;
 } 
