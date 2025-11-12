//program in C demonstrate the use of string library functions: strlen(),strcpy(),strrev(),strcat(),strcmp() using examples
#include <stdio.h>
#include <string.h>

int main ( ) 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // strlen()
    printf("\nLength of first string = %d", strlen(str1));

    // strcpy()
    strcpy(str2, str1);
    printf("\nAfter strcpy, second string = %s", str2);

    // strrev()
    strrev(str1);
    printf("\nReversed first string = %s", str1);

    // strcat()
    strcat(str1, str2);
    printf("\nAfter concatenation = %s", str1);

    // strcmp()
    if (strcmp(str1, str2) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    return 0;
}

