//Input a string from the user and find its length (without using the string library)
#include<stdio.h>
int main ( )
{
	char str[100],i;
	printf("Enter the string");
	scanf("%s", &str);
	i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	return 0;
}
