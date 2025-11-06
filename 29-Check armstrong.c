//program in C to check whether a number is armstrong or not
#include<stdio.h>
int main ( )
{
	int num,x,rem,result=0;
	printf("Enter a number:");
	scanf("%d", &num);
	x=num;
	while(x!=0)
	{
		rem=x%10;
		result=result+(rem*rem*rem);
		x=x/10;
	}
	if(result==num)
	printf("%d is an armstrong number.", num);
	else
	printf("%d is not an armstrong number", num);
	return 0;
}
