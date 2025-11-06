//program in C to display contents of an integer array
#include<stdio.h>
int main ( )
{
	int a[5]={10,20,30,40,50};
	int i;
	printf("The contents of the array are:");
	for(i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
