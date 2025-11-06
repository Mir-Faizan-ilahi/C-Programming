//Check whether a string is palindrome or not
#include<stdio.h>
int main ( )
{
	char str[100],i,l=0,flag=0;
	printf("Enter a string");
	scanf("%s", str);
	for(i=0;str[i] != '\0';i++)
	{
		l++;
	}
	for(i=0;i<l/2;i++)
	{
		if(str[i] != str[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	   printf("Palindrome");
	else
	   printf("Not Palindrome");
	return 0;
}
