//program in C to search for an element in an integer array (linear search)
#include <stdio.h>
int main() 
{
    int a[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) 
	{
        if(a[i] == key) 
		{
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}

