//Display contents of a character array 
#include<stdio.h>
int main ( )
{
	char a[] = "FAIZAN";
	int i;
	printf("The contents of the character array are: ");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c", a[i]);
	}
	return 0;
}
