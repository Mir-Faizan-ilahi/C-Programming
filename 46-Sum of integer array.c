//program in C to find sum of all elements of an integer array 
#include <stdio.h>
int main() 
{
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i<=n-1; i++) 
	{
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) 
	{
        sum = sum + a[i];
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

