//Input a string from the user and display its reverse order
#include<stdio.h>
int main ( )
{
	char str[100],i,n;
	printf("Enter the string");
	scanf("%s", &str);
	i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	n=i;
	for(i=n-1;i>=0;i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
