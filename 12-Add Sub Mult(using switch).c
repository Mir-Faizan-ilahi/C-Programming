//program in C to input two integers from the user and add them if the user enters 1,subtract them if the user enters 2 and multiply them if the user enters 3(use switch)
#include<stdio.h>
int main ( )
{
	int i,x,y,z;
	printf("Enter two numbers");
	scanf("%d%d", &x,&y);
	printf("Enter 1 for addition,2 for subtraction,3 for multiplication");
	scanf("%d", &i);
	switch(i)
	{
		case 1:
			z=x+y;
			break;
		case 2:
			z=x-y;
			break;
		case 3:
			z=x*y;
			
		default:
			    printf("You entered incorrect option");
			    break;
	}
	printf("The answer is %d", z);
	return 0;	
}
