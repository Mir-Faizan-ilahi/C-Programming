//Input a string from the user and display the same
#include<stdio.h>
int main ( )
{
	char str[100],i;
	printf("Enter the string");
	scanf("%s", &str);
	i=0;
	while(str[i] != '\0')
	{
		printf("%c",str[i]);
		i++;
	}
	return 0;
}
